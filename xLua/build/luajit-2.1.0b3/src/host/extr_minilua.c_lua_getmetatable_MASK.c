
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int top; } ;
typedef TYPE_1__ lua_State ;
typedef int Table ;
struct TYPE_13__ {int ** mt; } ;
struct TYPE_12__ {int * metatable; } ;
struct TYPE_11__ {int * metatable; } ;
typedef int TValue ;


 TYPE_8__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_6__* FUNC_2 (int const*) ;
 int * FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int ,int *) ;
 size_t FUNC_5 (int const*) ;
 TYPE_2__* FUNC_6 (int const*) ;

__attribute__((used)) static int FUNC_7(lua_State*VAR_0,int VAR_1){
const TValue*VAR_2;
Table*VAR_3=((void*)0);
int VAR_4;
VAR_2=FUNC_3(VAR_0,VAR_1);
switch(FUNC_5(VAR_2)){
case 5:
VAR_3=FUNC_2(VAR_2)->metatable;
break;
case 7:
VAR_3=FUNC_6(VAR_2)->metatable;
break;
default:
VAR_3=FUNC_0(VAR_0)->mt[FUNC_5(VAR_2)];
break;
}
if(VAR_3==((void*)0))
VAR_4=0;
else{
FUNC_4(VAR_0,VAR_0->top,VAR_3);
FUNC_1(VAR_0);
VAR_4=1;
}
return VAR_4;
}
