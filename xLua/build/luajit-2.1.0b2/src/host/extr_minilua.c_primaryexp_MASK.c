
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int expdesc ;
struct TYPE_10__ {int token; } ;
struct TYPE_11__ {TYPE_1__ t; int * fs; } ;
typedef TYPE_2__ LexState ;
typedef int FuncState ;



 int FUNC_0 (TYPE_2__*,int *) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *,int *) ;
 int FUNC_6 (int *,int *,int *) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int *) ;
 int FUNC_9 (TYPE_2__*,int *) ;

__attribute__((used)) static void FUNC_10(LexState*VAR_0,expdesc*VAR_1){
FuncState*VAR_2=VAR_0->fs;
FUNC_8(VAR_0,VAR_1);
for(;;){
switch(VAR_0->t.token){
case'.':{
FUNC_1(VAR_0,VAR_1);
break;
}
case'[':{
expdesc VAR_3;
FUNC_3(VAR_2,VAR_1);
FUNC_9(VAR_0,&VAR_3);
FUNC_5(VAR_2,VAR_1,&VAR_3);
break;
}
case':':{
expdesc VAR_4;
FUNC_7(VAR_0);
FUNC_0(VAR_0,&VAR_4);
FUNC_6(VAR_2,VAR_1,&VAR_4);
FUNC_2(VAR_0,VAR_1);
break;
}
case'(':case 128:case'{':{
FUNC_4(VAR_2,VAR_1);
FUNC_2(VAR_0,VAR_1);
break;
}
default:return;
}
}
}
