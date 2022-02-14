
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Instruction ;
typedef int FuncState ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,int) ;
 int * FUNC_2 (int *,int) ;

__attribute__((used)) static int FUNC_3(FuncState*VAR_1,int VAR_2){
for(;VAR_2!=(-1);VAR_2=FUNC_1(VAR_1,VAR_2)){
Instruction VAR_3=*FUNC_2(VAR_1,VAR_2);
if(FUNC_0(VAR_3)!=VAR_0)return 1;
}
return 0;
}
