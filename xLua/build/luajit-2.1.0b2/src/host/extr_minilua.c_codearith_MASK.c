
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int info; } ;
struct TYPE_11__ {TYPE_1__ s; } ;
struct TYPE_12__ {int k; TYPE_2__ u; } ;
typedef TYPE_3__ expdesc ;
typedef scalar_t__ OpCode ;
typedef int FuncState ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,TYPE_3__*,TYPE_3__*) ;
 int FUNC_1 (int *,TYPE_3__*) ;
 int FUNC_2 (int *,scalar_t__,int ,int,int) ;
 int FUNC_3 (int *,TYPE_3__*) ;

__attribute__((used)) static void FUNC_4(FuncState*VAR_3,OpCode VAR_4,expdesc*VAR_5,expdesc*VAR_6){
if(FUNC_0(VAR_4,VAR_5,VAR_6))
return;
else{
int VAR_7=(VAR_4!=VAR_1&&VAR_4!=VAR_0)?FUNC_3(VAR_3,VAR_6):0;
int VAR_8=FUNC_3(VAR_3,VAR_5);
if(VAR_8>VAR_7){
FUNC_1(VAR_3,VAR_5);
FUNC_1(VAR_3,VAR_6);
}
else{
FUNC_1(VAR_3,VAR_6);
FUNC_1(VAR_3,VAR_5);
}
VAR_5->u.s.info=FUNC_2(VAR_3,VAR_4,0,VAR_8,VAR_7);
VAR_5->k=VAR_2;
}
}
