
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int ngx_http_request_t ;
typedef int ngx_http_lua_ctx_t ;
struct TYPE_6__ {int co_top; int co_status; int * co; int co_ref; } ;
typedef TYPE_1__ ngx_http_lua_co_ctx_t ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int,int,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (int *,int *,int) ;
 TYPE_1__* FUNC_8 (int *,int *) ;
 TYPE_1__* FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int *,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (TYPE_1__*,int) ;

int
FUNC_16(lua_State *VAR_8, ngx_http_request_t *VAR_9,
    ngx_http_lua_ctx_t *VAR_10, ngx_http_lua_co_ctx_t **VAR_11)
{
    lua_State *VAR_12;
    lua_State *VAR_13;
    ngx_http_lua_co_ctx_t *VAR_14;

    FUNC_0(VAR_8, FUNC_3(VAR_8, 1) && !FUNC_2(VAR_8, 1), 1,
                  "Lua function expected");

    FUNC_7(VAR_8, VAR_10, VAR_3
                               | VAR_1
                               | VAR_2
                               | VAR_6
                               | VAR_4
                               | VAR_5);

    VAR_12 = FUNC_11(VAR_9, VAR_10);




    VAR_13 = FUNC_4(VAR_12);

    FUNC_12(VAR_9, VAR_8, VAR_13);

    VAR_14 = FUNC_9(VAR_13, VAR_10);
    if (VAR_14 == ((void*)0)) {
        VAR_14 = FUNC_8(VAR_9, VAR_10);
        if (VAR_14 == ((void*)0)) {
            return FUNC_1(VAR_8, "no memory");
        }

    } else {
        FUNC_15(VAR_14, sizeof(ngx_http_lua_co_ctx_t));
        VAR_14->co_ref = VAR_0;
    }

    VAR_14->co = VAR_13;
    VAR_14->co_status = VAR_7;






    FUNC_10(VAR_8);
    FUNC_6(VAR_8, VAR_13, 1);
    FUNC_13(VAR_13);


    FUNC_6(VAR_12, VAR_8, 1);

    FUNC_5(VAR_8, 1);
    FUNC_6(VAR_8, VAR_13, 1);

    if (VAR_11) {
        *VAR_11 = VAR_14;
    }





    return 1;
}
