
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef scalar_t__ u_char ;
typedef int ngx_uint_t ;
struct TYPE_20__ {TYPE_4__* node; TYPE_3__* request; int free_frame_headers; int frames; TYPE_6__* free_frames; TYPE_7__* connection; } ;
typedef TYPE_5__ ngx_http_v2_stream_t ;
struct TYPE_21__ {size_t length; scalar_t__ fin; scalar_t__ blocked; TYPE_5__* stream; int handler; TYPE_8__* last; TYPE_8__* first; struct TYPE_21__* next; } ;
typedef TYPE_6__ ngx_http_v2_out_frame_t ;
struct TYPE_22__ {int frames; TYPE_1__* connection; } ;
typedef TYPE_7__ ngx_http_v2_connection_t ;
struct TYPE_23__ {TYPE_9__* buf; struct TYPE_23__* next; } ;
typedef TYPE_8__ ngx_chain_t ;
typedef scalar_t__ ngx_buf_tag_t ;
struct TYPE_24__ {int memory; int flush; scalar_t__ last_buf; int * last; int * pos; int * start; scalar_t__ tag; int * end; } ;
typedef TYPE_9__ ngx_buf_t ;
struct TYPE_19__ {int id; } ;
struct TYPE_18__ {int pool; TYPE_2__* connection; } ;
struct TYPE_17__ {int log; } ;
struct TYPE_16__ {int error; int log; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_8__* FUNC_0 (int ,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_1 (int *,size_t,int ) ;
 int * FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int ,int ,char*,int ,TYPE_6__*,size_t,int ) ;
 int FUNC_4 (int ,int ,int ,char*) ;
 void* FUNC_5 (int ,int) ;

__attribute__((used)) static ngx_http_v2_out_frame_t *
FUNC_6(ngx_http_v2_stream_t *VAR_7,
    size_t VAR_8, ngx_chain_t *VAR_9, ngx_chain_t *VAR_10)
{
    u_char VAR_11;
    ngx_buf_t *VAR_12;
    ngx_chain_t *VAR_13;
    ngx_http_v2_out_frame_t *VAR_14;
    ngx_http_v2_connection_t *VAR_15;

    VAR_14 = VAR_7->free_frames;
    VAR_15 = VAR_7->connection;

    if (VAR_14) {
        VAR_7->free_frames = VAR_14->next;

    } else if (VAR_15->frames < 10000) {
        VAR_14 = FUNC_5(VAR_7->request->pool,
                           sizeof(ngx_http_v2_out_frame_t));
        if (VAR_14 == ((void*)0)) {
            return ((void*)0);
        }

        VAR_7->frames++;
        VAR_15->frames++;

    } else {
        FUNC_4(VAR_4, VAR_15->connection->log, 0,
                      "http2 flood detected");

        VAR_15->connection->error = 1;
        return ((void*)0);
    }

    VAR_11 = VAR_10->buf->last_buf ? VAR_1 : 0;

    FUNC_3(VAR_3, VAR_7->request->connection->log, 0,
                   "http2:%ui create DATA frame %p: len:%uz flags:%ui",
                   VAR_7->node->id, VAR_14, VAR_8, (ngx_uint_t) VAR_11);

    VAR_13 = FUNC_0(VAR_7->request->pool,
                                &VAR_7->free_frame_headers);
    if (VAR_13 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_12 = VAR_13->buf;

    if (VAR_12->start == ((void*)0)) {
        VAR_12->start = FUNC_5(VAR_7->request->pool,
                                VAR_2);
        if (VAR_12->start == ((void*)0)) {
            return ((void*)0);
        }

        VAR_12->end = VAR_12->start + VAR_2;
        VAR_12->last = VAR_12->end;

        VAR_12->tag = (ngx_buf_tag_t) &VAR_6;
        VAR_12->memory = 1;
    }

    VAR_12->pos = VAR_12->start;
    VAR_12->last = VAR_12->pos;

    VAR_12->last = FUNC_1(VAR_12->last, VAR_8,
                                               VAR_0);
    *VAR_12->last++ = VAR_11;

    VAR_12->last = FUNC_2(VAR_12->last, VAR_7->node->id);

    VAR_13->next = VAR_9;
    VAR_9 = VAR_13;

    VAR_10->buf->flush = 1;

    VAR_14->first = VAR_9;
    VAR_14->last = VAR_10;
    VAR_14->handler = VAR_5;
    VAR_14->stream = VAR_7;
    VAR_14->length = VAR_8;
    VAR_14->blocked = 0;
    VAR_14->fin = VAR_10->buf->last_buf;

    return VAR_14;
}
