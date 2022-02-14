
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int top; int base; TYPE_1__* ci; } ;
typedef TYPE_2__ lua_State ;
struct TYPE_5__ {scalar_t__ top; } ;


 int FUNC_0 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_1(lua_State*VAR_0,int VAR_1){
int VAR_2=1;
if(VAR_1>8000||(VAR_0->top-VAR_0->base+VAR_1)>8000)
VAR_2=0;
else if(VAR_1>0){
FUNC_0(VAR_0,VAR_1);
if(VAR_0->ci->top<VAR_0->top+VAR_1)
VAR_0->ci->top=VAR_0->top+VAR_1;
}
return VAR_2;
}
