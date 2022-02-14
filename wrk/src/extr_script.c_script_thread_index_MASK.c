
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int addr; } ;
typedef TYPE_1__ thread ;
typedef int lua_State ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 char* FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (char*,char const*) ;

__attribute__((used)) static int FUNC_5(lua_State *VAR_3) {
    thread *VAR_4 = FUNC_0(VAR_3);
    const char *VAR_5 = FUNC_2(VAR_3, 2);
    if (!FUNC_4("get", VAR_5)) FUNC_1(VAR_3, VAR_0);
    if (!FUNC_4("set", VAR_5)) FUNC_1(VAR_3, VAR_1);
    if (!FUNC_4("stop", VAR_5)) FUNC_1(VAR_3, VAR_2);
    if (!FUNC_4("addr", VAR_5)) FUNC_3(VAR_3, VAR_4->addr);
    return 1;
}
