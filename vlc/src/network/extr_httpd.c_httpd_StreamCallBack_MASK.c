
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_12__ {scalar_t__ i_buffer_pos; scalar_t__ i_last_keyframe_seen_pos; scalar_t__ i_buffer_size; scalar_t__ i_buffer_last_pos; size_t i_http_headers; scalar_t__ i_header; int psz_mime; int lock; scalar_t__ b_has_keyframes; int * p_header; TYPE_1__* p_http_headers; int * p_buffer; } ;
typedef TYPE_3__ httpd_stream_t ;
struct TYPE_13__ {scalar_t__ i_body_offset; scalar_t__ i_type; scalar_t__ i_body; int i_status; size_t i_headers; TYPE_2__* p_headers; void* p_body; scalar_t__ i_version; void* i_proto; } ;
typedef TYPE_4__ httpd_message_t ;
struct TYPE_14__ {scalar_t__ i_keyframe_wait_to_pass; int b_stream_mode; } ;
typedef TYPE_5__ httpd_client_t ;
typedef int httpd_callback_sys_t ;
struct TYPE_11__ {int value; int name; } ;
struct TYPE_10__ {int name; int value; } ;


 scalar_t__ HTTPD_CL_BUFSIZE ;
 void* HTTPD_MSG_ANSWER ;
 scalar_t__ HTTPD_MSG_HEAD ;
 void* HTTPD_PROTO_HTTP ;
 int VLC_EGENERIC ;
 int VLC_SUCCESS ;
 scalar_t__ __MIN (scalar_t__,int) ;
 int httpd_MsgAdd (TYPE_4__*,char*,char*,...) ;
 int memcpy (void*,int *,scalar_t__) ;
 int strcasecmp (int ,char*) ;
 int strcmp (int ,char*) ;
 scalar_t__ strncasecmp (int ,char*,int) ;
 scalar_t__ strstr (int ,char*) ;
 int vlc_mrand48 () ;
 int vlc_mutex_lock (int *) ;
 int vlc_mutex_unlock (int *) ;
 void* xmalloc (scalar_t__) ;

__attribute__((used)) static int httpd_StreamCallBack(httpd_callback_sys_t *p_sys,
                                 httpd_client_t *cl, httpd_message_t *answer,
                                 const httpd_message_t *query)
{
    httpd_stream_t *stream = (httpd_stream_t*)p_sys;

    if (!answer || !query || !cl)
        return VLC_SUCCESS;

    if (answer->i_body_offset > 0) {
        int i_pos;

        if (answer->i_body_offset >= stream->i_buffer_pos)
            return VLC_EGENERIC;

        if (cl->i_keyframe_wait_to_pass >= 0) {
            if (stream->i_last_keyframe_seen_pos <= cl->i_keyframe_wait_to_pass)

                return VLC_EGENERIC;


            answer->i_body_offset = stream->i_last_keyframe_seen_pos;
            cl->i_keyframe_wait_to_pass = -1;
        }

        if (answer->i_body_offset + stream->i_buffer_size < stream->i_buffer_pos)
            answer->i_body_offset = stream->i_buffer_last_pos;

        i_pos = answer->i_body_offset % stream->i_buffer_size;
        int64_t i_write = stream->i_buffer_pos - answer->i_body_offset;

        if (i_write > HTTPD_CL_BUFSIZE)
            i_write = HTTPD_CL_BUFSIZE;
        else if (i_write <= 0)
            return VLC_EGENERIC;


        i_write = __MIN(i_write, stream->i_buffer_size - i_pos);


        answer->i_proto = HTTPD_PROTO_HTTP;
        answer->i_version= 0;
        answer->i_type = HTTPD_MSG_ANSWER;

        answer->i_body = i_write;
        answer->p_body = xmalloc(i_write);
        memcpy(answer->p_body, &stream->p_buffer[i_pos], i_write);

        answer->i_body_offset += i_write;

        return VLC_SUCCESS;
    } else {
        answer->i_proto = HTTPD_PROTO_HTTP;
        answer->i_version= 0;
        answer->i_type = HTTPD_MSG_ANSWER;

        answer->i_status = 200;

        bool b_has_content_type = 0;
        bool b_has_cache_control = 0;

        vlc_mutex_lock(&stream->lock);
        for (size_t i = 0; i < stream->i_http_headers; i++)
            if (strncasecmp(stream->p_http_headers[i].name, "Content-Length", 14)) {
                httpd_MsgAdd(answer, stream->p_http_headers[i].name, "%s",
                              stream->p_http_headers[i].value);

                if (!strncasecmp(stream->p_http_headers[i].name, "Content-Type", 12))
                    b_has_content_type = 1;
                else if (!strncasecmp(stream->p_http_headers[i].name, "Cache-Control", 13))
                    b_has_cache_control = 1;
            }
        vlc_mutex_unlock(&stream->lock);

        if (query->i_type != HTTPD_MSG_HEAD) {
            cl->b_stream_mode = 1;
            vlc_mutex_lock(&stream->lock);

            if (stream->i_header > 0) {
                answer->i_body = stream->i_header;
                answer->p_body = xmalloc(stream->i_header);
                memcpy(answer->p_body, stream->p_header, stream->i_header);
            }
            answer->i_body_offset = stream->i_buffer_last_pos;
            if (stream->b_has_keyframes)
                cl->i_keyframe_wait_to_pass = stream->i_last_keyframe_seen_pos;
            else
                cl->i_keyframe_wait_to_pass = -1;
            vlc_mutex_unlock(&stream->lock);
        } else {
            httpd_MsgAdd(answer, "Content-Length", "0");
            answer->i_body_offset = 0;
        }


        if (!strcmp(stream->psz_mime, "video/x-ms-asf-stream")) {
            bool b_xplaystream = 0;

            httpd_MsgAdd(answer, "Content-type", "application/octet-stream");
            httpd_MsgAdd(answer, "Server", "Cougar 4.1.0.3921");
            httpd_MsgAdd(answer, "Pragma", "no-cache");
            httpd_MsgAdd(answer, "Pragma", "client-id=%lu",
                          vlc_mrand48()&0x7fff);
            httpd_MsgAdd(answer, "Pragma", "features=\"broadcast\"");


            for (size_t i = 0; i < query->i_headers; i++)
                if (!strcasecmp(query->p_headers[i].name, "Pragma") &&
                    strstr(query->p_headers[i].value, "xPlayStrm=1"))
                    b_xplaystream = 1;

            if (!b_xplaystream)
                answer->i_body_offset = 0;
        } else if (!b_has_content_type)
            httpd_MsgAdd(answer, "Content-type", "%s", stream->psz_mime);

        if (!b_has_cache_control)
            httpd_MsgAdd(answer, "Cache-Control", "no-cache");

        httpd_MsgAdd(answer, "Connection", "close");

        return VLC_SUCCESS;
    }
}
