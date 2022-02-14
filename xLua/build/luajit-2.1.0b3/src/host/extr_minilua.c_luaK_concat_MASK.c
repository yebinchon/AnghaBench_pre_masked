
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FuncState ;


 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static void FUNC_2(FuncState*VAR_0,int*VAR_1,int VAR_2){
if(VAR_2==(-1))return;
else if(*VAR_1==(-1))
*VAR_1=VAR_2;
else{
int VAR_3=*VAR_1;
int VAR_4;
while((VAR_4=FUNC_1(VAR_0,VAR_3))!=(-1))
VAR_3=VAR_4;
FUNC_0(VAR_0,VAR_3,VAR_2);
}
}
