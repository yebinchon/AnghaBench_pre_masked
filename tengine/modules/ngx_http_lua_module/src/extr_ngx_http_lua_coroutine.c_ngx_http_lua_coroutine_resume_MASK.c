
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ngx_http_request_t ;
struct TYPE_8__ {TYPE_2__* cur_co_ctx; int co_op; } ;
typedef TYPE_1__ ngx_http_lua_ctx_t ;
struct TYPE_9__ {size_t co_status; struct TYPE_9__* parent_co_ctx; } ;
typedef TYPE_2__ ngx_http_lua_co_ctx_t ;
typedef int lua_State ;
struct TYPE_10__ {int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *,int *,int,char*) ;
 int FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,char*,int ) ;
 int * FUNC_6 (int *,int) ;
 int FUNC_7 (int *,scalar_t__) ;
 TYPE_1__* FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,TYPE_1__*,int) ;
 TYPE_5__* VAR_10 ;
 TYPE_2__* FUNC_10 (int *,TYPE_1__*) ;
 int * FUNC_11 (int *) ;
 int VAR_11 ;
 int FUNC_12 (int *,int *,int *) ;

__attribute__((used)) static int
FUNC_13(lua_State *VAR_12)
{
    lua_State *VAR_13;
    ngx_http_request_t *VAR_14;
    ngx_http_lua_ctx_t *VAR_15;
    ngx_http_lua_co_ctx_t *VAR_16;
    ngx_http_lua_co_ctx_t *VAR_17;

    VAR_13 = FUNC_6(VAR_12, 1);

    FUNC_1(VAR_12, VAR_13, 1, "coroutine expected");

    VAR_14 = FUNC_11(VAR_12);
    if (VAR_14 == ((void*)0)) {
        return FUNC_2(VAR_12, "no request found");
    }

    VAR_15 = FUNC_8(VAR_14, VAR_11);
    if (VAR_15 == ((void*)0)) {
        return FUNC_2(VAR_12, "no request ctx found");
    }

    FUNC_9(VAR_12, VAR_15, VAR_2
                               | VAR_0
                               | VAR_1
                               | VAR_5
                               | VAR_3
                               | VAR_4);

    VAR_17 = VAR_15->cur_co_ctx;
    if (VAR_17 == ((void*)0)) {
        return FUNC_2(VAR_12, "no parent co ctx found");
    }

    VAR_16 = FUNC_10(VAR_13, VAR_15);
    if (VAR_16 == ((void*)0)) {
        return FUNC_2(VAR_12, "no co ctx found");
    }

    FUNC_12(VAR_14, VAR_12, VAR_13);

    if (VAR_16->co_status != VAR_8) {
        FUNC_0("coroutine resume: %d", VAR_16->co_status);

        FUNC_4(VAR_12, 0);
        FUNC_5(VAR_12, "cannot resume %s coroutine",
                        VAR_10[VAR_16->co_status].data);
        return 2;
    }

    VAR_17->co_status = VAR_6;

    VAR_16->parent_co_ctx = VAR_17;

    FUNC_0("set coroutine to running");
    VAR_16->co_status = VAR_7;

    VAR_15->co_op = VAR_9;
    VAR_15->cur_co_ctx = VAR_16;



    return FUNC_7(VAR_12, FUNC_3(VAR_12) - 1);
}
