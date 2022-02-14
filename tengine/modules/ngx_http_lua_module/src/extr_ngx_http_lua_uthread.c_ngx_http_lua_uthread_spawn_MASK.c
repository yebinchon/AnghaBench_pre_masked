
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ngx_http_request_t ;
struct TYPE_8__ {TYPE_2__* cur_co_ctx; int co_op; int uthreads; } ;
typedef TYPE_1__ ngx_http_lua_ctx_t ;
struct TYPE_9__ {int is_uthread; int thread_spawn_yielded; int co; struct TYPE_9__* parent_co_ctx; int co_status; int co_ref; } ;
typedef TYPE_2__ ngx_http_lua_co_ctx_t ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ,int,int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int ,int) ;
 int FUNC_11 (int *,int) ;
 TYPE_1__* FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,int *,TYPE_1__*,TYPE_2__**) ;
 int * FUNC_14 (int *) ;
 int FUNC_15 (int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_16 (int *,TYPE_1__*,TYPE_2__*) ;
 int FUNC_17 (int *,int *,int ) ;

__attribute__((used)) static int
FUNC_18(lua_State *VAR_6)
{
    int VAR_7;
    ngx_http_request_t *VAR_8;
    ngx_http_lua_ctx_t *VAR_9;
    ngx_http_lua_co_ctx_t *VAR_10 = ((void*)0);

    VAR_7 = FUNC_4(VAR_6);

    VAR_8 = FUNC_14(VAR_6);
    if (VAR_8 == ((void*)0)) {
        return FUNC_1(VAR_6, "no request found");
    }

    VAR_9 = FUNC_12(VAR_8, VAR_5);
    if (VAR_9 == ((void*)0)) {
        return FUNC_1(VAR_6, "no request ctx found");
    }

    FUNC_13(VAR_6, VAR_8, VAR_9, &VAR_10);



    FUNC_6(VAR_6, FUNC_15(
                          VAR_4));
    FUNC_8(VAR_6, VAR_0);
    FUNC_7(VAR_6, -2);
    VAR_10->co_ref = FUNC_2(VAR_6, -2);
    FUNC_5(VAR_6, 1);

    if (VAR_7 > 1) {
        FUNC_9(VAR_6, 1);
        FUNC_10(VAR_6, VAR_10->co, VAR_7 - 1);
    }

    VAR_10->is_uthread = 1;
    VAR_9->uthreads++;

    VAR_10->co_status = VAR_1;
    VAR_9->co_op = VAR_2;

    VAR_9->cur_co_ctx->thread_spawn_yielded = 1;

    if (FUNC_16(VAR_8, VAR_9, VAR_9->cur_co_ctx) != VAR_3) {
        return FUNC_1(VAR_6, "no memory");
    }

    VAR_10->parent_co_ctx = VAR_9->cur_co_ctx;
    VAR_9->cur_co_ctx = VAR_10;

    FUNC_17(VAR_8, VAR_6, VAR_10->co);

    FUNC_0("yielding with arg %s, top=%d, index-1:%s", FUNC_3(VAR_6, -1),
       (int) FUNC_4(VAR_6), FUNC_3(VAR_6, 1));
    return FUNC_11(VAR_6, 1);
}
