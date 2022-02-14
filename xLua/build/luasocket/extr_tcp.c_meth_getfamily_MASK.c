
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef TYPE_1__* p_tcp ;
typedef int lua_State ;
struct TYPE_2__ {scalar_t__ family; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static int FUNC_2(lua_State *VAR_1)
{
    p_tcp VAR_2 = (p_tcp) FUNC_0(VAR_1, "tcp{any}", 1);
    if (VAR_2->family == VAR_0) {
        FUNC_1(VAR_1, "inet6");
        return 1;
    } else {
        FUNC_1(VAR_1, "inet4");
        return 1;
    }
}
