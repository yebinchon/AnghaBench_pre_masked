
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int ngx_uint_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_16__ {TYPE_4__* connection; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_17__ {scalar_t__ entered_content_phase; TYPE_1__* cur_co_ctx; } ;
typedef TYPE_3__ ngx_http_lua_ctx_t ;
struct TYPE_18__ {int log; int requests; scalar_t__ error; scalar_t__ timedout; } ;
typedef TYPE_4__ ngx_connection_t ;
typedef int lua_State ;
struct TYPE_15__ {int co; int * cleanup; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,scalar_t__) ;
 int * FUNC_4 (TYPE_2__*,TYPE_3__*) ;
 scalar_t__ FUNC_5 (TYPE_4__*,int *,TYPE_2__*,TYPE_3__*,int ) ;
 scalar_t__ FUNC_6 (int *,TYPE_2__*,TYPE_3__*,int) ;
 int FUNC_7 (int ,int ,int ,char*,scalar_t__) ;

ngx_int_t
FUNC_8(ngx_http_request_t *VAR_3, ngx_http_lua_ctx_t *VAR_4)
{
    int VAR_5;
    lua_State *VAR_6;
    ngx_int_t VAR_7;
    ngx_uint_t VAR_8;
    ngx_connection_t *VAR_9;

    VAR_9 = VAR_3->connection;

    VAR_4->cur_co_ctx->cleanup = ((void*)0);



    if (VAR_9->timedout) {
        FUNC_2(VAR_4->cur_co_ctx->co);
        FUNC_1(VAR_4->cur_co_ctx->co, "timeout");
        VAR_5 = 2;

    } else if (VAR_9->error) {
        FUNC_2(VAR_4->cur_co_ctx->co);
        FUNC_1(VAR_4->cur_co_ctx->co, "client aborted");
        VAR_5 = 2;

    } else {
        FUNC_0(VAR_4->cur_co_ctx->co, 1);
        VAR_5 = 1;
    }

    VAR_6 = FUNC_4(VAR_3, VAR_4);
    VAR_8 = VAR_9->requests;

    VAR_7 = FUNC_6(VAR_6, VAR_3, VAR_4, VAR_5);

    FUNC_7(VAR_2, VAR_3->connection->log, 0,
                   "lua run thread returned %d", VAR_7);

    if (VAR_7 == VAR_0) {
        return FUNC_5(VAR_9, VAR_6, VAR_3, VAR_4, VAR_8);
    }

    if (VAR_7 == VAR_1) {
        FUNC_3(VAR_3, VAR_1);
        return FUNC_5(VAR_9, VAR_6, VAR_3, VAR_4, VAR_8);
    }



    if (VAR_4->entered_content_phase) {
        FUNC_3(VAR_3, VAR_7);
        return VAR_1;
    }

    return VAR_7;
}
