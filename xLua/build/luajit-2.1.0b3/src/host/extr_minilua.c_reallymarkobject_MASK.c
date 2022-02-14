
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_6__ ;
typedef struct TYPE_34__ TYPE_5__ ;
typedef struct TYPE_33__ TYPE_4__ ;
typedef struct TYPE_32__ TYPE_3__ ;
typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_23__ ;
typedef struct TYPE_29__ TYPE_21__ ;
typedef struct TYPE_28__ TYPE_1__ ;
typedef struct TYPE_27__ TYPE_19__ ;
typedef struct TYPE_26__ TYPE_17__ ;
typedef struct TYPE_25__ TYPE_15__ ;


struct TYPE_33__ {TYPE_6__* gray; } ;
typedef TYPE_4__ global_State ;
struct TYPE_31__ {int value; } ;
struct TYPE_34__ {TYPE_2__ u; int * v; } ;
typedef TYPE_5__ UpVal ;
typedef int Table ;
struct TYPE_28__ {int tt; } ;
struct TYPE_35__ {TYPE_1__ gch; } ;
struct TYPE_32__ {TYPE_6__* gclist; } ;
struct TYPE_30__ {TYPE_3__ c; } ;
struct TYPE_29__ {TYPE_6__* gclist; } ;
struct TYPE_27__ {TYPE_6__* gclist; } ;
struct TYPE_26__ {TYPE_6__* gclist; } ;
struct TYPE_25__ {int * env; int * metatable; } ;
typedef TYPE_6__ GCObject ;


 TYPE_23__* FUNC_0 (TYPE_6__*) ;
 TYPE_21__* FUNC_1 (TYPE_6__*) ;
 TYPE_19__* FUNC_2 (TYPE_6__*) ;
 TYPE_17__* FUNC_3 (TYPE_6__*) ;
 TYPE_15__* FUNC_4 (TYPE_6__*) ;
 TYPE_5__* FUNC_5 (TYPE_6__*) ;
 int FUNC_6 (TYPE_6__*) ;
 int FUNC_7 (TYPE_4__*,int *) ;
 int FUNC_8 (TYPE_4__*,int *) ;
 int FUNC_9 (TYPE_6__*) ;

__attribute__((used)) static void FUNC_10(global_State*VAR_0,GCObject*VAR_1){
FUNC_9(VAR_1);
switch(VAR_1->gch.tt){
case 4:{
return;
}
case 7:{
Table*VAR_2=FUNC_4(VAR_1)->metatable;
FUNC_6(VAR_1);
if(VAR_2)FUNC_7(VAR_0,VAR_2);
FUNC_7(VAR_0,FUNC_4(VAR_1)->env);
return;
}
case(8+2):{
UpVal*VAR_3=FUNC_5(VAR_1);
FUNC_8(VAR_0,VAR_3->v);
if(VAR_3->v==&VAR_3->u.value)
FUNC_6(VAR_1);
return;
}
case 6:{
FUNC_0(VAR_1)->c.gclist=VAR_0->gray;
VAR_0->gray=VAR_1;
break;
}
case 5:{
FUNC_1(VAR_1)->gclist=VAR_0->gray;
VAR_0->gray=VAR_1;
break;
}
case 8:{
FUNC_3(VAR_1)->gclist=VAR_0->gray;
VAR_0->gray=VAR_1;
break;
}
case(8+1):{
FUNC_2(VAR_1)->gclist=VAR_0->gray;
VAR_0->gray=VAR_1;
break;
}
default:;
}
}
