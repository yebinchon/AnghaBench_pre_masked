
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int size_ci; int * ci; } ;
typedef TYPE_1__ lua_State ;
typedef int CallInfo ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,char*) ;

__attribute__((used)) static CallInfo*FUNC_3(lua_State*VAR_0){
if(VAR_0->size_ci>20000)
FUNC_1(VAR_0,5);
else{
FUNC_0(VAR_0,2*VAR_0->size_ci);
if(VAR_0->size_ci>20000)
FUNC_2(VAR_0,"stack overflow");
}
return++VAR_0->ci;
}
