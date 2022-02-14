
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int size_ci; scalar_t__ base_ci; scalar_t__ ci; } ;
typedef TYPE_1__ lua_State ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_2(lua_State*VAR_0){
if(VAR_0->size_ci>20000){
int VAR_1=FUNC_0(VAR_0->ci-VAR_0->base_ci);
if(VAR_1+1<20000)
FUNC_1(VAR_0,20000);
}
}
