
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {int name; scalar_t__ func; } ;
typedef TYPE_1__ luaL_Reg ;


 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *,int ) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_3(lua_State*VAR_1){
const luaL_Reg*VAR_2=VAR_0;
for(;VAR_2->func;VAR_2++){
FUNC_1(VAR_1,VAR_2->func);
FUNC_2(VAR_1,VAR_2->name);
FUNC_0(VAR_1,1,0);
}
}
