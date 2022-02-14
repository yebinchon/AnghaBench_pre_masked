
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef scalar_t__ u_char ;
struct TYPE_18__ {TYPE_2__* node; TYPE_5__* connection; } ;
typedef TYPE_3__ ngx_http_v2_stream_t ;
struct TYPE_19__ {size_t length; int blocked; TYPE_7__* last; TYPE_7__* first; scalar_t__ fin; TYPE_3__* stream; int handler; } ;
typedef TYPE_4__ ngx_http_v2_out_frame_t ;
struct TYPE_20__ {size_t frame_size; int last_push; } ;
typedef TYPE_5__ ngx_http_v2_connection_t ;
struct TYPE_21__ {TYPE_1__* connection; int pool; TYPE_3__* stream; } ;
typedef TYPE_6__ ngx_http_request_t ;
struct TYPE_22__ {struct TYPE_22__* next; TYPE_8__* buf; } ;
typedef TYPE_7__ ngx_chain_t ;
typedef scalar_t__ ngx_buf_tag_t ;
struct TYPE_23__ {scalar_t__* last; scalar_t__* pos; scalar_t__* start; scalar_t__* end; int temporary; scalar_t__ tag; } ;
typedef TYPE_8__ ngx_buf_t ;
struct TYPE_17__ {int id; } ;
struct TYPE_16__ {int log; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_7__* FUNC_0 (int ) ;
 TYPE_8__* FUNC_1 (int ) ;
 TYPE_8__* FUNC_2 (int ,scalar_t__) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__* FUNC_3 (scalar_t__*,size_t,scalar_t__) ;
 void* FUNC_4 (scalar_t__*,int) ;
 int FUNC_5 (int ,int ,int ,char*,int,TYPE_4__*,int,size_t) ;
 TYPE_4__* FUNC_6 (int ,int) ;

__attribute__((used)) static ngx_http_v2_out_frame_t *
FUNC_7(ngx_http_request_t *VAR_9, u_char *VAR_10, u_char *VAR_11)
{
    u_char VAR_12, VAR_13;
    size_t VAR_14, VAR_15, VAR_16;
    ngx_buf_t *VAR_17;
    ngx_chain_t *VAR_18, **VAR_19;
    ngx_http_v2_stream_t *VAR_20;
    ngx_http_v2_out_frame_t *VAR_21;
    ngx_http_v2_connection_t *VAR_22;

    VAR_20 = VAR_9->stream;
    VAR_22 = VAR_20->connection;
    VAR_14 = VAR_5 + (VAR_11 - VAR_10);

    VAR_21 = FUNC_6(VAR_9->pool, sizeof(ngx_http_v2_out_frame_t));
    if (VAR_21 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_21->handler = VAR_8;
    VAR_21->stream = VAR_20;
    VAR_21->length = VAR_14;
    VAR_21->blocked = 1;
    VAR_21->fin = 0;

    VAR_19 = &VAR_21->first;

    VAR_12 = VAR_4;
    VAR_13 = VAR_3;
    VAR_15 = VAR_22->frame_size;

    for ( ;; ) {
        if (VAR_14 <= VAR_15) {
            VAR_15 = VAR_14;
            VAR_13 |= VAR_1;
        }

        VAR_17 = FUNC_2(VAR_9->pool,
                                VAR_2
                                + ((VAR_12 == VAR_4)
                                   ? VAR_5 : 0));
        if (VAR_17 == ((void*)0)) {
            return ((void*)0);
        }

        VAR_17->last = FUNC_3(VAR_17->last, VAR_15, VAR_12);
        *VAR_17->last++ = VAR_13;
        VAR_17->last = FUNC_4(VAR_17->last, VAR_20->node->id);

        VAR_17->tag = (ngx_buf_tag_t) &VAR_7;

        if (VAR_12 == VAR_4) {
            VAR_22->last_push += 2;

            VAR_17->last = FUNC_4(VAR_17->last, VAR_22->last_push);
            VAR_16 = VAR_15 - VAR_5;

        } else {
            VAR_16 = VAR_15;
        }

        VAR_18 = FUNC_0(VAR_9->pool);
        if (VAR_18 == ((void*)0)) {
            return ((void*)0);
        }

        VAR_18->buf = VAR_17;

        *VAR_19 = VAR_18;
        VAR_19 = &VAR_18->next;

        VAR_17 = FUNC_1(VAR_9->pool);
        if (VAR_17 == ((void*)0)) {
            return ((void*)0);
        }

        VAR_17->pos = VAR_10;

        VAR_10 += VAR_16;

        VAR_17->last = VAR_10;
        VAR_17->start = VAR_17->pos;
        VAR_17->end = VAR_17->last;
        VAR_17->temporary = 1;

        VAR_18 = FUNC_0(VAR_9->pool);
        if (VAR_18 == ((void*)0)) {
            return ((void*)0);
        }

        VAR_18->buf = VAR_17;

        *VAR_19 = VAR_18;
        VAR_19 = &VAR_18->next;

        VAR_14 -= VAR_15;

        if (VAR_14) {
            VAR_21->length += VAR_2;

            VAR_12 = VAR_0;
            continue;
        }

        VAR_18->next = ((void*)0);
        VAR_21->last = VAR_18;

        FUNC_5(VAR_6, VAR_9->connection->log, 0,
                       "http2:%ui create PUSH_PROMISE frame %p: "
                       "sid:%ui len:%uz",
                       VAR_20->node->id, VAR_21, VAR_22->last_push,
                       VAR_21->length);

        return VAR_21;
    }
}
