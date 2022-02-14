
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int UB ;


 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*,size_t) ;

__attribute__((used)) static int FUNC_3(lua_State*VAR_0){
UB VAR_1=FUNC_0(VAR_0,1);
int VAR_2=FUNC_1(VAR_0,2)?8:(int)FUNC_0(VAR_0,2);
const char*VAR_3="0123456789abcdef";
char VAR_4[8];
int VAR_5;
if(VAR_2<0){VAR_2=-VAR_2;VAR_3="0123456789ABCDEF";}
if(VAR_2>8)VAR_2=8;
for(VAR_5=(int)VAR_2;--VAR_5>=0;){VAR_4[VAR_5]=VAR_3[VAR_1&15];VAR_1>>=4;}
FUNC_2(VAR_0,VAR_4,(size_t)VAR_2);
return 1;
}
