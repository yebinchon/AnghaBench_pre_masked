
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ ngx_uint_t ;
typedef scalar_t__ ngx_int_t ;
typedef int ngx_http_request_t ;
struct TYPE_9__ {TYPE_1__* co_ctx; struct TYPE_9__* next; } ;
typedef TYPE_2__ ngx_http_lua_posted_thread_t ;
struct TYPE_10__ {scalar_t__ entered_content_phase; TYPE_1__* cur_co_ctx; TYPE_2__* posted_threads; } ;
typedef TYPE_3__ ngx_http_lua_ctx_t ;
struct TYPE_11__ {scalar_t__ requests; scalar_t__ destroyed; } ;
typedef TYPE_4__ ngx_connection_t ;
typedef int lua_State ;
struct TYPE_8__ {scalar_t__ co_status; int co; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *,int ,int) ;
 scalar_t__ FUNC_2 (int *,int *,TYPE_3__*,int ) ;

ngx_int_t
FUNC_3(ngx_connection_t *VAR_3, lua_State *VAR_4,
    ngx_http_request_t *VAR_5, ngx_http_lua_ctx_t *VAR_6, ngx_uint_t VAR_7)
{
    ngx_int_t VAR_8;
    ngx_http_lua_posted_thread_t *VAR_9;

    for ( ;; ) {
        if (VAR_3->destroyed || VAR_3->requests != VAR_7) {
            return VAR_1;
        }

        VAR_9 = VAR_6->posted_threads;
        if (VAR_9 == ((void*)0)) {
            return VAR_1;
        }

        VAR_6->posted_threads = VAR_9->next;

        FUNC_1(VAR_5, VAR_9->co_ctx->co,
                                             (int) VAR_9->co_ctx->co_status);

        if (VAR_9->co_ctx->co_status != VAR_2) {
            continue;
        }

        VAR_6->cur_co_ctx = VAR_9->co_ctx;

        VAR_8 = FUNC_2(VAR_4, VAR_5, VAR_6, 0);

        if (VAR_8 == VAR_0) {
            continue;
        }

        if (VAR_8 == VAR_1) {
            FUNC_0(VAR_5, VAR_1);
            continue;
        }



        if (VAR_6->entered_content_phase) {
            FUNC_0(VAR_5, VAR_8);
        }

        return VAR_8;
    }


}
