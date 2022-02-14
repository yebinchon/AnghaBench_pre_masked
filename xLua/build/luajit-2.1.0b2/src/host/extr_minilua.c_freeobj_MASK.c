
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_13__ ;


typedef int lua_State ;
struct TYPE_15__ {int tt; } ;
struct TYPE_17__ {TYPE_1__ gch; } ;
struct TYPE_16__ {int nuse; } ;
struct TYPE_14__ {TYPE_2__ strt; } ;
typedef TYPE_3__ GCObject ;


 TYPE_13__* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,TYPE_3__*,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;

__attribute__((used)) static void FUNC_16(lua_State*VAR_0,GCObject*VAR_1){
switch(VAR_1->gch.tt){
case(8+1):FUNC_10(VAR_0,FUNC_3(VAR_1));break;
case 6:FUNC_9(VAR_0,FUNC_1(VAR_1));break;
case(8+2):FUNC_11(VAR_0,FUNC_7(VAR_1));break;
case 5:FUNC_12(VAR_0,FUNC_2(VAR_1));break;
case 8:{
FUNC_8(VAR_0,FUNC_4(VAR_1));
break;
}
case 4:{
FUNC_0(VAR_0)->strt.nuse--;
FUNC_13(VAR_0,VAR_1,FUNC_14(FUNC_5(VAR_1)));
break;
}
case 7:{
FUNC_13(VAR_0,VAR_1,FUNC_15(FUNC_6(VAR_1)));
break;
}
default:;
}
}
