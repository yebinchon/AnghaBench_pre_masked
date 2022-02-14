
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {long double start_msec; scalar_t__ start_sec; } ;
typedef TYPE_1__ ngx_http_request_t ;
typedef int lua_State ;
typedef int lua_Number ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int ) ;
 TYPE_1__* FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(lua_State *VAR_0)
{
    ngx_http_request_t *VAR_1;

    VAR_1 = FUNC_2(VAR_0);
    if (VAR_1 == ((void*)0)) {
        return FUNC_0(VAR_0, "no request found");
    }

    FUNC_1(VAR_0, (lua_Number) (VAR_1->start_sec + VAR_1->start_msec / 1000.0L));
    return 1;
}
