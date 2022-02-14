
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int lua_Number ;


 scalar_t__ FUNC_0 (unsigned char) ;
 int FUNC_1 (int *,int,int,char*) ;
 int FUNC_2 (int *,int) ;
 char* FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int,int) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int) ;
 unsigned long FUNC_9 (char const*,char**,int) ;

__attribute__((used)) static int FUNC_10(lua_State*VAR_0){
int VAR_1=FUNC_4(VAR_0,2,10);
if(VAR_1==10){
FUNC_2(VAR_0,1);
if(FUNC_5(VAR_0,1)){
FUNC_7(VAR_0,FUNC_8(VAR_0,1));
return 1;
}
}
else{
const char*VAR_2=FUNC_3(VAR_0,1);
char*VAR_3;
unsigned long VAR_4;
FUNC_1(VAR_0,2<=VAR_1&&VAR_1<=36,2,"base out of range");
VAR_4=FUNC_9(VAR_2,&VAR_3,VAR_1);
if(VAR_2!=VAR_3){
while(FUNC_0((unsigned char)(*VAR_3)))VAR_3++;
if(*VAR_3=='\0'){
FUNC_7(VAR_0,(lua_Number)VAR_4);
return 1;
}
}
}
FUNC_6(VAR_0);
return 1;
}
