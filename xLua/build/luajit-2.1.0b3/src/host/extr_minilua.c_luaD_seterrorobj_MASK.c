
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ top; } ;
typedef TYPE_1__ lua_State ;
typedef scalar_t__ StkId ;


 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*,scalar_t__,scalar_t__) ;
 int FUNC_2 (TYPE_1__*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_3(lua_State*VAR_0,int VAR_1,StkId VAR_2){
switch(VAR_1){
case 4:{
FUNC_2(VAR_0,VAR_2,FUNC_0(VAR_0,"not enough memory"));
break;
}
case 5:{
FUNC_2(VAR_0,VAR_2,FUNC_0(VAR_0,"error in error handling"));
break;
}
case 3:
case 2:{
FUNC_1(VAR_0,VAR_2,VAR_0->top-1);
break;
}
}
VAR_0->top=VAR_2+1;
}
