
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {char const* name; int func; } ;
typedef TYPE_1__ luaL_Reg ;


 int FUNC_0 (int *,char const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,char const*) ;
 int FUNC_5 (int *,int) ;

void FUNC_6(lua_State *VAR_0, const char *VAR_1, luaL_Reg *VAR_2) {
    FUNC_0(VAR_0, VAR_1);

    FUNC_4(VAR_0, "__index");
    FUNC_1(VAR_0);

    FUNC_4(VAR_0, "class");
    FUNC_4(VAR_0, VAR_1);
    FUNC_5(VAR_0, -3);


    for (; VAR_2->name; VAR_2++) {
        FUNC_4(VAR_0, VAR_2->name);
        FUNC_3(VAR_0, VAR_2->func);
        FUNC_5(VAR_0, VAR_2->name[0] == '_' ? -5: -3);
    }
    FUNC_5(VAR_0, -3);
    FUNC_2(VAR_0, 1);
}
