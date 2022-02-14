
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int lua_State ;
typedef int lua_CFunction ;
struct TYPE_2__ {int panic; } ;


 TYPE_1__* FUNC_0 (int *) ;

__attribute__((used)) static lua_CFunction FUNC_1(lua_State*VAR_0,lua_CFunction VAR_1){
lua_CFunction VAR_2;
VAR_2=FUNC_0(VAR_0)->panic;
FUNC_0(VAR_0)->panic=VAR_1;
return VAR_2;
}
