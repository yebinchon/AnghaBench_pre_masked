
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {int info; } ;
struct TYPE_16__ {TYPE_1__ s; } ;
struct TYPE_17__ {TYPE_2__ u; int k; int t; int f; } ;
typedef TYPE_3__ expdesc ;
typedef int FuncState ;
typedef int BinOpr ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,int ) ;
 int VAR_10 ;
 int FUNC_2 (int *,int ,TYPE_3__*,TYPE_3__*) ;
 int FUNC_3 (int *,int ,int,TYPE_3__*,TYPE_3__*) ;
 int FUNC_4 (int *,TYPE_3__*) ;
 int FUNC_5 (int *,TYPE_3__*) ;
 int FUNC_6 (int *,int *,int ) ;
 int FUNC_7 (int *,TYPE_3__*) ;
 int FUNC_8 (int *,TYPE_3__*) ;
 int FUNC_9 (int *,TYPE_3__*) ;

__attribute__((used)) static void FUNC_10(FuncState*VAR_11,BinOpr VAR_12,expdesc*VAR_13,expdesc*VAR_14){
switch(VAR_12){
case 141:{
FUNC_7(VAR_11,VAR_14);
FUNC_6(VAR_11,&VAR_14->f,VAR_13->f);
*VAR_13=*VAR_14;
break;
}
case 130:{
FUNC_7(VAR_11,VAR_14);
FUNC_6(VAR_11,&VAR_14->t,VAR_13->t);
*VAR_13=*VAR_14;
break;
}
case 140:{
FUNC_9(VAR_11,VAR_14);
if(VAR_14->k==VAR_10&&FUNC_0(FUNC_5(VAR_11,VAR_14))==VAR_1){
FUNC_4(VAR_11,VAR_13);
FUNC_1(FUNC_5(VAR_11,VAR_14),VAR_13->u.s.info);
VAR_13->k=VAR_10;VAR_13->u.s.info=VAR_14->u.s.info;
}
else{
FUNC_8(VAR_11,VAR_14);
FUNC_2(VAR_11,VAR_1,VAR_13,VAR_14);
}
break;
}
case 142:FUNC_2(VAR_11,VAR_0,VAR_13,VAR_14);break;
case 128:FUNC_2(VAR_11,VAR_9,VAR_13,VAR_14);break;
case 132:FUNC_2(VAR_11,VAR_7,VAR_13,VAR_14);break;
case 139:FUNC_2(VAR_11,VAR_2,VAR_13,VAR_14);break;
case 133:FUNC_2(VAR_11,VAR_6,VAR_13,VAR_14);break;
case 129:FUNC_2(VAR_11,VAR_8,VAR_13,VAR_14);break;
case 138:FUNC_3(VAR_11,VAR_3,1,VAR_13,VAR_14);break;
case 131:FUNC_3(VAR_11,VAR_3,0,VAR_13,VAR_14);break;
case 134:FUNC_3(VAR_11,VAR_5,1,VAR_13,VAR_14);break;
case 135:FUNC_3(VAR_11,VAR_4,1,VAR_13,VAR_14);break;
case 136:FUNC_3(VAR_11,VAR_5,0,VAR_13,VAR_14);break;
case 137:FUNC_3(VAR_11,VAR_4,0,VAR_13,VAR_14);break;
default:;
}
}
