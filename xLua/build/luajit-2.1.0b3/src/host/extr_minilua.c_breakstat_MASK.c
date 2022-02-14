
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int upval; int breaklist; int nactvar; struct TYPE_11__* previous; int isbreakable; } ;
struct TYPE_10__ {TYPE_3__* bl; } ;
struct TYPE_9__ {TYPE_2__* fs; } ;
typedef TYPE_1__ LexState ;
typedef TYPE_2__ FuncState ;
typedef TYPE_3__ BlockCnt ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*,int *,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*,char*) ;

__attribute__((used)) static void FUNC_4(LexState*VAR_1){
FuncState*VAR_2=VAR_1->fs;
BlockCnt*VAR_3=VAR_2->bl;
int VAR_4=0;
while(VAR_3&&!VAR_3->isbreakable){
VAR_4|=VAR_3->upval;
VAR_3=VAR_3->previous;
}
if(!VAR_3)
FUNC_3(VAR_1,"no loop to break");
if(VAR_4)
FUNC_0(VAR_2,VAR_0,VAR_3->nactvar,0,0);
FUNC_1(VAR_2,&VAR_3->breaklist,FUNC_2(VAR_2));
}
