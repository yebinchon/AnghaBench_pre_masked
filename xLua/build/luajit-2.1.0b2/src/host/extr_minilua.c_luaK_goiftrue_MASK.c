
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int info; } ;
struct TYPE_9__ {TYPE_1__ s; } ;
struct TYPE_10__ {int k; int t; int f; TYPE_2__ u; } ;
typedef TYPE_3__ expdesc ;
typedef int FuncState ;






 int FUNC_0 (int *,TYPE_3__*) ;
 int FUNC_1 (int *,TYPE_3__*,int ) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,TYPE_3__*) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static void FUNC_5(FuncState*VAR_0,expdesc*VAR_1){
int VAR_2;
FUNC_3(VAR_0,VAR_1);
switch(VAR_1->k){
case 130:case 129:case 128:{
VAR_2=(-1);
break;
}
case 131:{
FUNC_0(VAR_0,VAR_1);
VAR_2=VAR_1->u.s.info;
break;
}
default:{
VAR_2=FUNC_1(VAR_0,VAR_1,0);
break;
}
}
FUNC_2(VAR_0,&VAR_1->f,VAR_2);
FUNC_4(VAR_0,VAR_1->t);
VAR_1->t=(-1);
}
