
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef TYPE_1__* p_unix ;
typedef int lua_State ;
struct TYPE_2__ {int sock; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(lua_State *VAR_0)
{
    p_unix VAR_1 = (p_unix) FUNC_0(VAR_0, "serial{any}", 1);
    FUNC_2(&VAR_1->sock);
    FUNC_1(VAR_0, 1);
    return 1;
}
