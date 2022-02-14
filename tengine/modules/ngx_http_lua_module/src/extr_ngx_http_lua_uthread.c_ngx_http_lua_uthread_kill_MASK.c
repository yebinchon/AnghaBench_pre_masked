
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int ngx_http_request_t ;
struct TYPE_10__ {int uthreads; TYPE_2__* cur_co_ctx; } ;
typedef TYPE_1__ ngx_http_lua_ctx_t ;
struct TYPE_11__ {scalar_t__ pending_subreqs; int co_status; struct TYPE_11__* parent_co_ctx; int is_uthread; } ;
typedef TYPE_2__ ngx_http_lua_co_ctx_t ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int FUNC_0 (int *,int *,int,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,int) ;
 TYPE_1__* FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,TYPE_1__*,int) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int *,int *,TYPE_1__*,TYPE_2__*) ;
 TYPE_2__* FUNC_10 (int *,TYPE_1__*) ;
 int * FUNC_11 (int *) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_12(lua_State *VAR_6)
{
    lua_State *VAR_7;
    ngx_http_request_t *VAR_8;
    ngx_http_lua_ctx_t *VAR_9;
    ngx_http_lua_co_ctx_t *VAR_10, *VAR_11;

    VAR_8 = FUNC_11(VAR_6);
    if (VAR_8 == ((void*)0)) {
        return FUNC_1(VAR_6, "no request found");
    }

    VAR_9 = FUNC_6(VAR_8, VAR_5);
    if (VAR_9 == ((void*)0)) {
        return FUNC_1(VAR_6, "no request ctx found");
    }

    FUNC_7(VAR_6, VAR_9, VAR_2
                               | VAR_0
                               | VAR_1
                               | VAR_4
                               | VAR_3);

    VAR_10 = VAR_9->cur_co_ctx;

    VAR_7 = FUNC_5(VAR_6, 1);
    FUNC_0(VAR_6, VAR_7, 1, "lua thread expected");

    VAR_11 = FUNC_10(VAR_7, VAR_9);

    if (VAR_11 == ((void*)0)) {
        return FUNC_1(VAR_6, "no co ctx found");
    }

    if (!VAR_11->is_uthread) {
        FUNC_4(VAR_6);
        FUNC_3(VAR_6, "not user thread");
        return 2;
    }

    if (VAR_11->parent_co_ctx != VAR_10) {
        FUNC_4(VAR_6);
        FUNC_3(VAR_6, "killer not parent");
        return 2;
    }

    if (VAR_11->pending_subreqs > 0) {
        FUNC_4(VAR_6);
        FUNC_3(VAR_6, "pending subrequests");
        return 2;
    }

    switch (VAR_11->co_status) {
    case 128:
        FUNC_9(VAR_8, VAR_6, VAR_9, VAR_11);
        VAR_9->uthreads--;

        FUNC_4(VAR_6);
        FUNC_3(VAR_6, "already terminated");
        return 2;

    case 129:
        FUNC_4(VAR_6);
        FUNC_3(VAR_6, "already waited or killed");
        return 2;

    default:
        FUNC_8(VAR_11);
        FUNC_9(VAR_8, VAR_6, VAR_9, VAR_11);
        VAR_9->uthreads--;

        FUNC_2(VAR_6, 1);
        return 1;
    }


}
