
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int size_ci; int stacksize; scalar_t__ stack; scalar_t__ base_ci; scalar_t__ ci; } ;
typedef TYPE_1__ lua_State ;
typedef scalar_t__ StkId ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_4(lua_State*VAR_0,StkId VAR_1){
int VAR_2=FUNC_0(VAR_0->ci-VAR_0->base_ci);
int VAR_3=FUNC_0(VAR_1-VAR_0->stack);
if(VAR_0->size_ci>20000)
return;
if(4*VAR_2<VAR_0->size_ci&&2*8<VAR_0->size_ci)
FUNC_2(VAR_0,VAR_0->size_ci/2);
FUNC_1(FUNC_2(VAR_0,VAR_2+1));
if(4*VAR_3<VAR_0->stacksize&&
2*((2*20)+5)<VAR_0->stacksize)
FUNC_3(VAR_0,VAR_0->stacksize/2);
FUNC_1(FUNC_3(VAR_0,VAR_3));
}
