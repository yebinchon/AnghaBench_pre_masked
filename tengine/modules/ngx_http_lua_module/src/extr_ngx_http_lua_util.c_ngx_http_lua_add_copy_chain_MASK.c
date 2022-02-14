
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_13__ {int pool; TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_14__ {int free_bufs; } ;
typedef TYPE_3__ ngx_http_lua_ctx_t ;
struct TYPE_15__ {struct TYPE_15__* next; TYPE_5__* buf; } ;
typedef TYPE_4__ ngx_chain_t ;
struct TYPE_16__ {scalar_t__ pos; scalar_t__ last; scalar_t__ start; scalar_t__ end; scalar_t__ last_buf; scalar_t__ last_in_chain; } ;
typedef TYPE_5__ ngx_buf_t ;
struct TYPE_12__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int) ;
 scalar_t__ FUNC_1 (TYPE_5__*) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__,scalar_t__) ;
 TYPE_4__* FUNC_3 (int ,int ,int *,size_t) ;

ngx_int_t
FUNC_4(ngx_http_request_t *VAR_2, ngx_http_lua_ctx_t *VAR_3,
    ngx_chain_t ***VAR_4, ngx_chain_t *VAR_5, ngx_int_t *VAR_6)
{
    ngx_chain_t *VAR_7;
    size_t VAR_8;
    ngx_buf_t *VAR_9;

    VAR_8 = 0;
    *VAR_6 = 0;

    for (VAR_7 = VAR_5; VAR_7; VAR_7 = VAR_7->next) {
        if (FUNC_1(VAR_7->buf)) {
            VAR_8 += VAR_7->buf->last - VAR_7->buf->pos;
        }

        if (VAR_7->buf->last_in_chain || VAR_7->buf->last_buf) {
            *VAR_6 = 1;
        }
    }

    if (VAR_8 == 0) {
        return VAR_1;
    }

    VAR_7 = FUNC_3(VAR_2->connection->log, VAR_2->pool,
                                         &VAR_3->free_bufs, VAR_8);
    if (VAR_7 == ((void*)0)) {
        return VAR_0;
    }

    FUNC_0("chains get free buf: %d == %d", (int) (VAR_7->buf->end - VAR_7->buf->start),
       (int) VAR_8);

    VAR_9 = VAR_7->buf;

    while (VAR_5) {
        if (FUNC_1(VAR_5->buf)) {
            VAR_9->last = FUNC_2(VAR_9->last, VAR_5->buf->pos,
                               VAR_5->buf->last - VAR_5->buf->pos);
        }

        VAR_5 = VAR_5->next;
    }

    **VAR_4 = VAR_7;
    *VAR_4 = &VAR_7->next;

    return VAR_1;
}
