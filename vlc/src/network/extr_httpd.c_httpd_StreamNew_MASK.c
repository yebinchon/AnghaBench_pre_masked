
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int i_buffer_size; int i_buffer_pos; int i_buffer_last_pos; int b_has_keyframes; int url; int * p_http_headers; scalar_t__ i_http_headers; scalar_t__ i_last_keyframe_seen_pos; int p_buffer; int * p_header; scalar_t__ i_header; int psz_mime; int lock; } ;
typedef TYPE_1__ httpd_stream_t ;
typedef int httpd_host_t ;
typedef int httpd_callback_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ,int *) ;
 int FUNC_2 (int *,char const*,char const*,char const*) ;
 TYPE_1__* FUNC_3 (int) ;
 char* FUNC_4 (char const*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char const*) ;

httpd_stream_t *FUNC_8(httpd_host_t *VAR_4,
                                 const char *VAR_5, const char *VAR_6,
                                 const char *VAR_7, const char *VAR_8)
{
    httpd_stream_t *VAR_9 = FUNC_3(sizeof(*VAR_9));
    if (!VAR_9)
        return ((void*)0);

    VAR_9->url = FUNC_2(VAR_4, VAR_5, VAR_7, VAR_8);
    if (!VAR_9->url) {
        FUNC_0(VAR_9);
        return ((void*)0);
    }

    FUNC_5(&VAR_9->lock);
    if (VAR_6 == ((void*)0) || VAR_6[0] == '\0')
        VAR_6 = FUNC_4(VAR_5);
    VAR_9->psz_mime = FUNC_7(VAR_6);

    VAR_9->i_header = 0;
    VAR_9->p_header = ((void*)0);
    VAR_9->i_buffer_size = 5000000;
    VAR_9->p_buffer = FUNC_6(VAR_9->i_buffer_size);


    VAR_9->i_buffer_pos = 1;
    VAR_9->i_buffer_last_pos = 1;
    VAR_9->b_has_keyframes = 0;
    VAR_9->i_last_keyframe_seen_pos = 0;
    VAR_9->i_http_headers = 0;
    VAR_9->p_http_headers = ((void*)0);

    FUNC_1(VAR_9->url, VAR_1, VAR_3,
                    (httpd_callback_sys_t*)VAR_9);
    FUNC_1(VAR_9->url, VAR_0, VAR_3,
                    (httpd_callback_sys_t*)VAR_9);
    FUNC_1(VAR_9->url, VAR_2, VAR_3,
                    (httpd_callback_sys_t*)VAR_9);

    return VAR_9;
}
