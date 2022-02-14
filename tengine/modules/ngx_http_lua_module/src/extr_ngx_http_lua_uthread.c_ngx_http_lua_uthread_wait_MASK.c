
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ngx_http_request_t ;
struct TYPE_9__ {int uthreads; TYPE_2__* cur_co_ctx; } ;
typedef TYPE_1__ ngx_http_lua_ctx_t ;
struct TYPE_10__ {int co_status; int waited_by_parent; int * co; struct TYPE_10__* parent_co_ctx; int is_uthread; } ;
typedef TYPE_2__ ngx_http_lua_co_ctx_t ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *,int *,int,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 int * FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int *,int) ;
 int FUNC_10 (int *,int ) ;
 TYPE_1__* FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,TYPE_1__*,int) ;
 int FUNC_13 (int *,int *,TYPE_1__*,TYPE_2__*) ;
 TYPE_2__* FUNC_14 (int *,TYPE_1__*) ;
 int * FUNC_15 (int *) ;
 int VAR_5 ;
 int FUNC_16 (char*) ;
 int FUNC_17 (int *,int *) ;

__attribute__((used)) static int
FUNC_18(lua_State *VAR_6)
{
    int VAR_7, VAR_8, VAR_9;
    lua_State *VAR_10;
    ngx_http_request_t *VAR_11;
    ngx_http_lua_ctx_t *VAR_12;
    ngx_http_lua_co_ctx_t *VAR_13, *VAR_14;

    VAR_11 = FUNC_15(VAR_6);
    if (VAR_11 == ((void*)0)) {
        return FUNC_2(VAR_6, "no request found");
    }

    VAR_12 = FUNC_11(VAR_11, VAR_5);
    if (VAR_12 == ((void*)0)) {
        return FUNC_2(VAR_6, "no request ctx found");
    }

    FUNC_12(VAR_6, VAR_12, VAR_2
                               | VAR_0
                               | VAR_1
                               | VAR_4
                               | VAR_3);

    VAR_13 = VAR_12->cur_co_ctx;

    VAR_8 = FUNC_4(VAR_6);

    for (VAR_7 = 1; VAR_7 <= VAR_8; VAR_7++) {
        VAR_10 = FUNC_8(VAR_6, VAR_7);

        FUNC_1(VAR_6, VAR_10, VAR_7, "lua thread expected");

        VAR_14 = FUNC_14(VAR_10, VAR_12);
        if (VAR_14 == ((void*)0)) {
            return FUNC_2(VAR_6, "no co ctx found");
        }

        if (!VAR_14->is_uthread) {
            return FUNC_2(VAR_6, "attempt to wait on a coroutine that is "
                              "not a user thread");
        }

        if (VAR_14->parent_co_ctx != VAR_13) {
            return FUNC_2(VAR_6, "only the parent coroutine can wait on the "
                              "thread");
        }

        switch (VAR_14->co_status) {
        case 128:

            FUNC_16("found zombie child");

            VAR_9 = FUNC_4(VAR_14->co);

            FUNC_0("child retval count: %d, %s: %s", (int) VAR_9,
               FUNC_3(VAR_14->co, -1),
               FUNC_7(VAR_14->co, -1));

            if (VAR_9) {
                FUNC_9(VAR_14->co, VAR_6, VAR_9);
            }


            FUNC_13(VAR_11, VAR_6, VAR_12, VAR_14);
            VAR_12->uthreads--;


            return VAR_9;

        case 129:
            FUNC_0("uthread already waited: %p (parent %p)", VAR_14,
               VAR_13);

            if (VAR_7 < VAR_8) {

                continue;
            }


            FUNC_6(VAR_6);
            FUNC_5(VAR_6, "already waited or killed");
            return 2;

        default:
            FUNC_0("uthread %p still alive, status: %d, parent %p", VAR_14,
               VAR_14->co_status, VAR_13);
            break;
        }

        FUNC_17(VAR_6, VAR_14->co);
        VAR_14->waited_by_parent = 1;
    }

    return FUNC_10(VAR_6, 0);
}
