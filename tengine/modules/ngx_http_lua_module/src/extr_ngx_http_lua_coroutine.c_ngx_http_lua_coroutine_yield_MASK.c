
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ngx_http_request_t ;
struct TYPE_7__ {int co_op; TYPE_3__* cur_co_ctx; } ;
typedef TYPE_2__ ngx_http_lua_ctx_t ;
struct TYPE_8__ {TYPE_1__* parent_co_ctx; int is_uthread; int co_status; } ;
typedef TYPE_3__ ngx_http_lua_co_ctx_t ;
typedef int lua_State ;
struct TYPE_6__ {int * co; int co_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 TYPE_2__* FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,TYPE_2__*,int) ;
 int * FUNC_6 (int *) ;
 int VAR_9 ;
 int FUNC_7 (int *,int *,int *) ;

__attribute__((used)) static int
FUNC_8(lua_State *VAR_10)
{
    ngx_http_request_t *VAR_11;
    ngx_http_lua_ctx_t *VAR_12;
    ngx_http_lua_co_ctx_t *VAR_13;

    VAR_11 = FUNC_6(VAR_10);
    if (VAR_11 == ((void*)0)) {
        return FUNC_1(VAR_10, "no request found");
    }

    VAR_12 = FUNC_4(VAR_11, VAR_9);
    if (VAR_12 == ((void*)0)) {
        return FUNC_1(VAR_10, "no request ctx found");
    }

    FUNC_5(VAR_10, VAR_12, VAR_2
                               | VAR_0
                               | VAR_1
                               | VAR_5
                               | VAR_3
                               | VAR_4);

    VAR_13 = VAR_12->cur_co_ctx;

    VAR_13->co_status = VAR_7;

    VAR_12->co_op = VAR_8;

    if (!VAR_13->is_uthread && VAR_13->parent_co_ctx) {
        FUNC_0("set coroutine to running");
        VAR_13->parent_co_ctx->co_status = VAR_6;

        FUNC_7(VAR_11, VAR_13->parent_co_ctx->co, VAR_10);

    } else {
        FUNC_7(VAR_11, ((void*)0), VAR_10);
    }



    return FUNC_3(VAR_10, FUNC_2(VAR_10));
}
