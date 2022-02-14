
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_15__ {TYPE_2__* main; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_16__ {TYPE_1__* co_ctx; struct TYPE_16__* next; } ;
typedef TYPE_4__ ngx_http_lua_posted_thread_t ;
struct TYPE_17__ {TYPE_1__* cur_co_ctx; TYPE_4__* posted_threads; } ;
typedef TYPE_5__ ngx_http_lua_ctx_t ;
typedef int lua_State ;
struct TYPE_14__ {int count; } ;
struct TYPE_13__ {scalar_t__ co_status; int co; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,TYPE_4__*) ;
 int FUNC_1 (TYPE_3__*,scalar_t__) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;
 scalar_t__ FUNC_3 (int *,TYPE_3__*,TYPE_5__*,int ) ;

ngx_int_t
FUNC_4(lua_State *VAR_4, ngx_http_request_t *VAR_5,
    ngx_http_lua_ctx_t *VAR_6, int VAR_7)
{
    ngx_int_t VAR_8;
    ngx_http_lua_posted_thread_t *VAR_9;

    FUNC_0("run posted threads: %p", VAR_6->posted_threads);

    for ( ;; ) {
        VAR_9 = VAR_6->posted_threads;
        if (VAR_9 == ((void*)0)) {
            goto done;
        }

        VAR_6->posted_threads = VAR_9->next;

        FUNC_2(VAR_5, VAR_9->co_ctx->co,
                                             (int) VAR_9->co_ctx->co_status);

        FUNC_0("posted thread status: %d", VAR_9->co_ctx->co_status);

        if (VAR_9->co_ctx->co_status != VAR_2) {
            continue;
        }

        VAR_6->cur_co_ctx = VAR_9->co_ctx;

        VAR_8 = FUNC_3(VAR_4, VAR_5, VAR_6, 0);

        if (VAR_8 == VAR_0) {
            continue;
        }

        if (VAR_8 == VAR_1) {
            VAR_7++;
            continue;
        }

        if (VAR_8 == VAR_3) {
            while (VAR_7 > 0) {
                FUNC_1(VAR_5, VAR_1);
                VAR_7--;
            }

            return VAR_3;
        }



        return VAR_8;
    }

done:

    if (VAR_7 == 1) {
        return VAR_1;
    }

    if (VAR_7 == 0) {
        VAR_5->main->count++;
        return VAR_1;
    }



    do {
        FUNC_1(VAR_5, VAR_1);
    } while (--VAR_7 > 1);

    return VAR_1;
}
