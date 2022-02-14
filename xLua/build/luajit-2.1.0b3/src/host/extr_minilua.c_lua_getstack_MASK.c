
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_3__* base_ci; TYPE_3__* ci; } ;
typedef TYPE_1__ lua_State ;
struct TYPE_8__ {int i_ci; } ;
typedef TYPE_2__ lua_Debug ;
struct TYPE_9__ {scalar_t__ tailcalls; } ;
typedef TYPE_3__ CallInfo ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_2(lua_State*VAR_0,int VAR_1,lua_Debug*VAR_2){
int VAR_3;
CallInfo*VAR_4;
for(VAR_4=VAR_0->ci;VAR_1>0&&VAR_4>VAR_0->base_ci;VAR_4--){
VAR_1--;
if(FUNC_1(VAR_4))
VAR_1-=VAR_4->tailcalls;
}
if(VAR_1==0&&VAR_4>VAR_0->base_ci){
VAR_3=1;
VAR_2->i_ci=FUNC_0(VAR_4-VAR_0->base_ci);
}
else if(VAR_1<0){
VAR_3=1;
VAR_2->i_ci=0;
}
else VAR_3=0;
return VAR_3;
}
