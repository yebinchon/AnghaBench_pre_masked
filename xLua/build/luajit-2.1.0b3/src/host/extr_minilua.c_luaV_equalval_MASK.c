
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int top; } ;
typedef TYPE_1__ lua_State ;
struct TYPE_9__ {int metatable; } ;
struct TYPE_8__ {int metatable; } ;
typedef int TValue ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (TYPE_1__*,int ,int const*,int const*,int const*) ;
 int FUNC_2 (int const*) ;
 int * FUNC_3 (TYPE_1__*,int ,int ,int ) ;
 TYPE_4__* FUNC_4 (int const*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int const*) ;
 int FUNC_8 (int const*) ;
 int FUNC_9 (int const*) ;
 TYPE_2__* FUNC_10 (int const*) ;

__attribute__((used)) static int FUNC_11(lua_State*VAR_1,const TValue*VAR_2,const TValue*VAR_3){
const TValue*VAR_4;
switch(FUNC_9(VAR_2)){
case 0:return 1;
case 3:return FUNC_6(FUNC_7(VAR_2),FUNC_7(VAR_3));
case 1:return FUNC_0(VAR_2)==FUNC_0(VAR_3);
case 2:return FUNC_8(VAR_2)==FUNC_8(VAR_3);
case 7:{
if(FUNC_10(VAR_2)==FUNC_10(VAR_3))return 1;
VAR_4=FUNC_3(VAR_1,FUNC_10(VAR_2)->metatable,FUNC_10(VAR_3)->metatable,
VAR_0);
break;
}
case 5:{
if(FUNC_4(VAR_2)==FUNC_4(VAR_3))return 1;
VAR_4=FUNC_3(VAR_1,FUNC_4(VAR_2)->metatable,FUNC_4(VAR_3)->metatable,VAR_0);
break;
}
default:return FUNC_2(VAR_2)==FUNC_2(VAR_3);
}
if(VAR_4==((void*)0))return 0;
FUNC_1(VAR_1,VAR_1->top,VAR_4,VAR_2,VAR_3);
return!FUNC_5(VAR_1->top);
}
