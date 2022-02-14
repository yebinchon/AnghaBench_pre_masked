
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ngx_http_request_t ;
typedef int ngx_http_lua_ctx_t ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,int,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int) ;
 int * FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int *,int) ;
 int * FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_11(lua_State *VAR_9)
{
    ngx_http_request_t *VAR_10;
    ngx_http_lua_ctx_t *VAR_11;

    if (FUNC_3(VAR_9) != 0) {
        return FUNC_1(VAR_9, "expecting zero arguments, but got %d",
                          FUNC_3(VAR_9));
    }

    VAR_10 = FUNC_9(VAR_9);
    if (VAR_10 == ((void*)0)) {
        return FUNC_1(VAR_9, "no request found");
    }

    VAR_11 = FUNC_7(VAR_10, VAR_7);
    if (VAR_11 == ((void*)0)) {
        return FUNC_1(VAR_9, "no ctx found");
    }

    FUNC_8(VAR_9, VAR_11, VAR_3
                               | VAR_1
                               | VAR_2
                               | VAR_6
                               | VAR_4
                               | VAR_5);

    FUNC_2(VAR_9, 5 , 1 );
    FUNC_4(VAR_9, FUNC_10(
                          VAR_8));
    FUNC_5(VAR_9, VAR_0);
    FUNC_6(VAR_9, -2);

    FUNC_0("top: %d", FUNC_3(VAR_9));

    return 1;
}
