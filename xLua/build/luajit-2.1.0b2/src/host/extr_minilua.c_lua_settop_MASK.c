
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int stack_last; int base; scalar_t__ top; } ;
typedef TYPE_1__ lua_State ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(lua_State*VAR_0,int VAR_1){
if(VAR_1>=0){
FUNC_0(VAR_0,VAR_1<=VAR_0->stack_last-VAR_0->base);
while(VAR_0->top<VAR_0->base+VAR_1)
FUNC_1(VAR_0->top++);
VAR_0->top=VAR_0->base+VAR_1;
}
else{
FUNC_0(VAR_0,-(VAR_1+1)<=(VAR_0->top-VAR_0->base));
VAR_0->top+=VAR_1+1;
}
}
