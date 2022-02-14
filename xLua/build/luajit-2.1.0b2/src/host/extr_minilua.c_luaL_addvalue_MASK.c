
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_6__ {size_t p; int lvl; int * L; } ;
typedef TYPE_1__ luaL_Buffer ;


 int FUNC_0 (TYPE_1__*) ;
 size_t FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 char* FUNC_5 (int *,int,size_t*) ;
 int FUNC_6 (size_t,char const*,size_t) ;

__attribute__((used)) static void FUNC_7(luaL_Buffer*VAR_0){
lua_State*VAR_1=VAR_0->L;
size_t VAR_2;
const char*VAR_3=FUNC_5(VAR_1,-1,&VAR_2);
if(VAR_2<=FUNC_1(VAR_0)){
FUNC_6(VAR_0->p,VAR_3,VAR_2);
VAR_0->p+=VAR_2;
FUNC_4(VAR_1,1);
}
else{
if(FUNC_2(VAR_0))
FUNC_3(VAR_1,-2);
VAR_0->lvl++;
FUNC_0(VAR_0);
}
}
