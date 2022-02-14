
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ngx_http_request_t ;
typedef int ngx_http_lua_ctx_t ;
typedef int lua_State ;


 int FUNC_0 (int *,char*) ;
 int * FUNC_1 (int *,int ) ;
 int * FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int *,int *,int *,int) ;

int
FUNC_4(lua_State *VAR_1)
{
    ngx_http_request_t *VAR_2;
    ngx_http_lua_ctx_t *VAR_3;

    VAR_2 = FUNC_2(VAR_1);
    if (VAR_2 == ((void*)0)) {
        return FUNC_0(VAR_1, "no request found");
    }

    VAR_3 = FUNC_1(VAR_2, VAR_0);
    if (VAR_3 == ((void*)0)) {
        return FUNC_0(VAR_1, "no request ctx found");
    }

    return FUNC_3(VAR_1, VAR_2, VAR_3, 3);
}
