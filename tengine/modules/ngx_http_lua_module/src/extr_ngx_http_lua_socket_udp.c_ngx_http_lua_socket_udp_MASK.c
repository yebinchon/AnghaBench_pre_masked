
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
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_11(lua_State *VAR_8)
{
    ngx_http_request_t *VAR_9;
    ngx_http_lua_ctx_t *VAR_10;

    if (FUNC_3(VAR_8) != 0) {
        return FUNC_1(VAR_8, "expecting zero arguments, but got %d",
                          FUNC_3(VAR_8));
    }

    VAR_9 = FUNC_9(VAR_8);
    if (VAR_9 == ((void*)0)) {
        return FUNC_1(VAR_8, "no request found");
    }

    VAR_10 = FUNC_7(VAR_9, VAR_6);
    if (VAR_10 == ((void*)0)) {
        return FUNC_1(VAR_8, "no ctx found");
    }

    FUNC_8(VAR_8, VAR_10, VAR_3
                               | VAR_1
                               | VAR_2
                               | VAR_5
                               | VAR_4);

    FUNC_2(VAR_8, 3 , 1 );
    FUNC_4(VAR_8, FUNC_10(
                          VAR_7));
    FUNC_5(VAR_8, VAR_0);
    FUNC_6(VAR_8, -2);

    FUNC_0("top: %d", FUNC_3(VAR_8));

    return 1;
}
