
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ token; } ;
struct TYPE_9__ {TYPE_1__ t; int * fs; } ;
typedef TYPE_2__ LexState ;
typedef int FuncState ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,int ,int) ;
 int FUNC_2 (int *,int*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_7(LexState*VAR_4,int VAR_5){
FuncState*VAR_6=VAR_4->fs;
int VAR_7;
int VAR_8=(-1);
VAR_7=FUNC_6(VAR_4);
while(VAR_4->t.token==VAR_1){
FUNC_2(VAR_6,&VAR_8,FUNC_3(VAR_6));
FUNC_4(VAR_6,VAR_7);
VAR_7=FUNC_6(VAR_4);
}
if(VAR_4->t.token==VAR_0){
FUNC_2(VAR_6,&VAR_8,FUNC_3(VAR_6));
FUNC_4(VAR_6,VAR_7);
FUNC_5(VAR_4);
FUNC_0(VAR_4);
}
else
FUNC_2(VAR_6,&VAR_8,VAR_7);
FUNC_4(VAR_6,VAR_8);
FUNC_1(VAR_4,VAR_2,VAR_3,VAR_5);
}
