
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ngx_http_request_t ;
struct TYPE_9__ {int check_client_abort; } ;
typedef TYPE_1__ ngx_http_lua_loc_conf_t ;
struct TYPE_10__ {int cur_co_ctx; TYPE_3__* on_abort_co_ctx; } ;
typedef TYPE_2__ ngx_http_lua_ctx_t ;
struct TYPE_11__ {int is_uthread; int parent_co_ctx; int co_status; int co; int co_ref; } ;
typedef TYPE_3__ ngx_http_lua_co_ctx_t ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int) ;
 TYPE_2__* FUNC_11 (int *,int ) ;
 TYPE_1__* FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,int *,TYPE_2__*) ;
 int FUNC_14 (int *,int *,TYPE_2__*,TYPE_3__**) ;
 int * FUNC_15 (int *) ;
 int FUNC_16 (int ) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_17(lua_State *VAR_4)
{
    ngx_http_request_t *VAR_5;
    ngx_http_lua_ctx_t *VAR_6;
    ngx_http_lua_co_ctx_t *VAR_7 = ((void*)0);
    ngx_http_lua_loc_conf_t *VAR_8;

    VAR_5 = FUNC_15(VAR_4);
    if (VAR_5 == ((void*)0)) {
        return FUNC_1(VAR_4, "no request found");
    }

    VAR_6 = FUNC_11(VAR_5, VAR_3);
    if (VAR_6 == ((void*)0)) {
        return FUNC_1(VAR_4, "no request ctx found");
    }

    FUNC_13(VAR_4, VAR_5, VAR_6);

    if (VAR_6->on_abort_co_ctx) {
        FUNC_7(VAR_4);
        FUNC_6(VAR_4, "duplicate call");
        return 2;
    }

    VAR_8 = FUNC_12(VAR_5, VAR_3);
    if (!VAR_8->check_client_abort) {
        FUNC_7(VAR_4);
        FUNC_6(VAR_4, "lua_check_client_abort is off");
        return 2;
    }

    FUNC_14(VAR_4, VAR_5, VAR_6, &VAR_7);

    FUNC_5(VAR_4, FUNC_16(
                          VAR_2));
    FUNC_9(VAR_4, VAR_0);
    FUNC_8(VAR_4, -2);

    FUNC_0("on_wait thread 1: %p", FUNC_10(VAR_4, -1));

    VAR_7->co_ref = FUNC_2(VAR_4, -2);
    FUNC_3(VAR_4, 1);

    VAR_7->is_uthread = 1;
    VAR_6->on_abort_co_ctx = VAR_7;

    FUNC_0("on_wait thread 2: %p", VAR_7->co);

    VAR_7->co_status = VAR_1;
    VAR_7->parent_co_ctx = VAR_6->cur_co_ctx;

    FUNC_4(VAR_4, 1);
    return 1;
}
