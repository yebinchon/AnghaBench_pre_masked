
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {int name; int (* func ) (int *) ;} ;
typedef TYPE_1__ luaL_Reg ;


 int FUNC_0 (int *,int,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int,int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_4 (int *) ;

void FUNC_5(lua_State* VAR_1)
{
    luaL_Reg* VAR_2 = VAR_0;
    FUNC_1(VAR_1, "package");
    FUNC_0(VAR_1, -1, "preload");
    for (; VAR_2->func; VAR_2++)
    {
        VAR_2->func(VAR_1);
        FUNC_3(VAR_1, -2, VAR_2->name);
    }
    FUNC_2(VAR_1, 2);
}
