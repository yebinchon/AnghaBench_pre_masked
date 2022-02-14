
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int expdesc ;
struct TYPE_9__ {int token; } ;
struct TYPE_10__ {int linenumber; int fs; TYPE_1__ t; } ;
typedef TYPE_2__ LexState ;



 int FUNC_0 (TYPE_2__*,char,char,int) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 int FUNC_5 (TYPE_2__*,int *) ;

__attribute__((used)) static void FUNC_6(LexState*VAR_0,expdesc*VAR_1){
switch(VAR_0->t.token){
case'(':{
int VAR_2=VAR_0->linenumber;
FUNC_3(VAR_0);
FUNC_1(VAR_0,VAR_1);
FUNC_0(VAR_0,')','(',VAR_2);
FUNC_2(VAR_0->fs,VAR_1);
return;
}
case 128:{
FUNC_5(VAR_0,VAR_1);
return;
}
default:{
FUNC_4(VAR_0,"unexpected symbol");
return;
}
}
}
