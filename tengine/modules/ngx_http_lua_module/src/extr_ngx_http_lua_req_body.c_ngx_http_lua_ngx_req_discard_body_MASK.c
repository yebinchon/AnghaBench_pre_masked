
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ngx_int_t ;
typedef int ngx_http_request_t ;
typedef int lua_State ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(lua_State *VAR_2)
{
    ngx_http_request_t *VAR_3;
    ngx_int_t VAR_4;
    int VAR_5;

    VAR_5 = FUNC_1(VAR_2);

    if (VAR_5 != 0) {
        return FUNC_0(VAR_2, "expecting 0 arguments but seen %d", VAR_5);
    }

    VAR_3 = FUNC_4(VAR_2);
    if (VAR_3 == ((void*)0)) {
        return FUNC_0(VAR_2, "request object not found");
    }

    FUNC_3(VAR_2, VAR_3);

    VAR_4 = FUNC_2(VAR_3);

    if (VAR_4 == VAR_0 || VAR_4 >= VAR_1) {
        return FUNC_0(VAR_2, "failed to discard request body");
    }

    return 0;
}
