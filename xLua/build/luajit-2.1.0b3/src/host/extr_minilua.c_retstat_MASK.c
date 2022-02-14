
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_19__ {scalar_t__ k; } ;
typedef TYPE_2__ expdesc ;
struct TYPE_21__ {int nactvar; } ;
struct TYPE_18__ {char token; } ;
struct TYPE_20__ {TYPE_1__ t; TYPE_4__* fs; } ;
typedef TYPE_3__ LexState ;
typedef TYPE_4__ FuncState ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_4__*,TYPE_2__*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_4__*,TYPE_2__*) ;
 int FUNC_6 (TYPE_4__*,TYPE_2__*) ;
 int FUNC_7 (TYPE_4__*,int,int) ;
 int FUNC_8 (TYPE_4__*,TYPE_2__*) ;
 int FUNC_9 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_10(LexState*VAR_2){
FuncState*VAR_3=VAR_2->fs;
expdesc VAR_4;
int VAR_5,VAR_6;
FUNC_9(VAR_2);
if(FUNC_1(VAR_2->t.token)||VAR_2->t.token==';')
VAR_5=VAR_6=0;
else{
VAR_6=FUNC_2(VAR_2,&VAR_4);
if(FUNC_4(VAR_4.k)){
FUNC_8(VAR_3,&VAR_4);
if(VAR_4.k==VAR_1&&VAR_6==1){
FUNC_0(FUNC_3(VAR_3,&VAR_4),VAR_0);
}
VAR_5=VAR_3->nactvar;
VAR_6=(-1);
}
else{
if(VAR_6==1)
VAR_5=FUNC_5(VAR_3,&VAR_4);
else{
FUNC_6(VAR_3,&VAR_4);
VAR_5=VAR_3->nactvar;
}
}
}
FUNC_7(VAR_3,VAR_5,VAR_6);
}
