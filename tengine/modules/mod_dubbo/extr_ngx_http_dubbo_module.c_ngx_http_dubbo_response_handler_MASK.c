
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_9__ ;
typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_18__ ;
typedef struct TYPE_22__ TYPE_17__ ;
typedef struct TYPE_21__ TYPE_12__ ;
typedef struct TYPE_20__ TYPE_11__ ;


typedef size_t ngx_uint_t ;
struct TYPE_23__ {scalar_t__ len; int * data; } ;
struct TYPE_22__ {int len; int data; } ;
struct TYPE_26__ {TYPE_18__ value; TYPE_17__ key; } ;
typedef TYPE_3__ ngx_keyval_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_24__ {size_t status_n; int content_length_n; } ;
struct TYPE_27__ {TYPE_2__* state; TYPE_1__ headers_in; TYPE_7__* out_bufs; int free_bufs; } ;
typedef TYPE_4__ ngx_http_upstream_t ;
struct TYPE_28__ {int pool; TYPE_4__* upstream; } ;
typedef TYPE_5__ ngx_http_request_t ;
struct TYPE_29__ {int log; } ;
typedef TYPE_6__ ngx_connection_t ;
struct TYPE_30__ {TYPE_8__* buf; } ;
typedef TYPE_7__ ngx_chain_t ;
struct TYPE_31__ {int flush; int memory; int * last; int * pos; } ;
typedef TYPE_8__ ngx_buf_t ;
struct TYPE_32__ {size_t nelts; TYPE_3__* elts; } ;
typedef TYPE_9__ ngx_array_t ;
struct TYPE_25__ {size_t status; } ;
struct TYPE_21__ {int len; int data; } ;
struct TYPE_20__ {int len; int data; } ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t FUNC_0 (int *,int) ;
 TYPE_7__* FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (TYPE_5__*,TYPE_17__*,TYPE_18__*) ;
 TYPE_12__ VAR_4 ;
 TYPE_11__ VAR_5 ;
 int FUNC_3 (int ,int ,int ,char*,TYPE_5__*) ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;

ngx_int_t
FUNC_5(ngx_connection_t *VAR_6, ngx_http_request_t *VAR_7, ngx_array_t *VAR_8)
{
    ngx_http_upstream_t *VAR_9;
    ngx_keyval_t *VAR_10;
    ngx_uint_t VAR_11;
    ngx_chain_t *VAR_12;
    ngx_buf_t *VAR_13;
    ngx_uint_t VAR_14;

    VAR_9 = VAR_7->upstream;

    if (VAR_9->out_bufs != ((void*)0)) {
        FUNC_3(VAR_2, VAR_6->log, 0, "dubbo [%V]: out_bufs is not NULL, %p", VAR_7);
        return VAR_0;
    }

    VAR_9->headers_in.status_n = VAR_1;
    VAR_9->state->status = VAR_1;

    VAR_10 = VAR_8->elts;
    for (VAR_11=0; VAR_11 < VAR_8->nelts; VAR_11++) {
        if (VAR_10[VAR_11].key.len == 4 && 0 == FUNC_4(VAR_10[VAR_11].key.data,
                    VAR_4.data, VAR_4.len)) {
            if (VAR_10[VAR_11].value.len > 0 && VAR_10[VAR_11].value.data != ((void*)0)) {
                VAR_12 = FUNC_1(VAR_7->pool, &VAR_9->free_bufs);
                if (VAR_12 == ((void*)0)) {
                    return VAR_0;
                }

                VAR_9->out_bufs = VAR_12;
                VAR_13 = VAR_9->out_bufs->buf;

                VAR_13->flush = 1;
                VAR_13->memory = 1;

                VAR_13->pos = VAR_10[VAR_11].value.data;
                VAR_13->last = VAR_10[VAR_11].value.data + VAR_10[VAR_11].value.len;
            }

            VAR_9->headers_in.content_length_n = VAR_10[VAR_11].value.len;
        } else if (VAR_10[VAR_11].key.len == 6 && 0 == FUNC_4(VAR_10[VAR_11].key.data, VAR_5.data, VAR_5.len)) {
            VAR_14 = FUNC_0(VAR_10[VAR_11].value.data, VAR_10[VAR_11].value.len);
            VAR_9->headers_in.status_n = VAR_14;
            VAR_9->state->status = VAR_14;
        } else {
            if (VAR_3 != FUNC_2(VAR_7, &VAR_10[VAR_11].key, &VAR_10[VAR_11].value)) {
                return VAR_0;
            }
        }
    }

    return VAR_3;
}
