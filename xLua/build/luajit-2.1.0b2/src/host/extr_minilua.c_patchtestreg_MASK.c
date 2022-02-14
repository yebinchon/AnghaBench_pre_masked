
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Instruction ;
typedef int FuncState ;


 int FUNC_0 (int ,int,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int ,int) ;
 int * FUNC_5 (int *,int) ;

__attribute__((used)) static int FUNC_6(FuncState*VAR_2,int VAR_3,int VAR_4){
Instruction*VAR_5=FUNC_5(VAR_2,VAR_3);
if(FUNC_3(*VAR_5)!=VAR_1)
return 0;
if(VAR_4!=((1<<8)-1)&&VAR_4!=FUNC_1(*VAR_5))
FUNC_4(*VAR_5,VAR_4);
else
*VAR_5=FUNC_0(VAR_0,FUNC_1(*VAR_5),0,FUNC_2(*VAR_5));
return 1;
}
