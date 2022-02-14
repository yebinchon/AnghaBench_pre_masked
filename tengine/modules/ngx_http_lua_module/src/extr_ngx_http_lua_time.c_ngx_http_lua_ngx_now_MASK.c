
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {long double msec; scalar_t__ sec; } ;
typedef TYPE_1__ ngx_time_t ;
typedef int lua_State ;
typedef int lua_Number ;


 int FUNC_0 (int *,int ) ;
 TYPE_1__* FUNC_1 () ;

__attribute__((used)) static int
FUNC_2(lua_State *VAR_0)
{
    ngx_time_t *VAR_1;

    VAR_1 = FUNC_1();

    FUNC_0(VAR_0, (lua_Number) (VAR_1->sec + VAR_1->msec / 1000.0L));

    return 1;
}
