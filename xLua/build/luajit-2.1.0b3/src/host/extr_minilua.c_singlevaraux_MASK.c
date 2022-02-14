
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int info; } ;
struct TYPE_13__ {TYPE_1__ s; } ;
struct TYPE_14__ {int k; TYPE_2__ u; } ;
typedef TYPE_3__ expdesc ;
struct TYPE_15__ {struct TYPE_15__* prev; } ;
typedef int TString ;
typedef TYPE_4__ FuncState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*,int *,TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int,int) ;
 int FUNC_2 (TYPE_4__*,int) ;
 int FUNC_3 (TYPE_4__*,int *) ;

__attribute__((used)) static int FUNC_4(FuncState*VAR_3,TString*VAR_4,expdesc*VAR_5,int VAR_6){
if(VAR_3==((void*)0)){
FUNC_1(VAR_5,VAR_0,((1<<8)-1));
return VAR_0;
}
else{
int VAR_7=FUNC_3(VAR_3,VAR_4);
if(VAR_7>=0){
FUNC_1(VAR_5,VAR_1,VAR_7);
if(!VAR_6)
FUNC_2(VAR_3,VAR_7);
return VAR_1;
}
else{
if(FUNC_4(VAR_3->prev,VAR_4,VAR_5,0)==VAR_0)
return VAR_0;
VAR_5->u.s.info=FUNC_0(VAR_3,VAR_4,VAR_5);
VAR_5->k=VAR_2;
return VAR_2;
}
}
}
