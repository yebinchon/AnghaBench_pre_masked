
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int FILE ;


 int FUNC_0 (int *,int,char const*) ;
 int * FUNC_1 (char const*,char const*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int,int) ;
 int FUNC_5 (int *,int,int) ;
 char* FUNC_6 (int *,int) ;
 int ** FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(lua_State*VAR_0,int VAR_1,const char*VAR_2){
if(!FUNC_2(VAR_0,1)){
const char*VAR_3=FUNC_6(VAR_0,1);
if(VAR_3){
FILE**VAR_4=FUNC_7(VAR_0);
*VAR_4=FUNC_1(VAR_3,VAR_2);
if(*VAR_4==((void*)0))
FUNC_0(VAR_0,1,VAR_3);
}
else{
FUNC_8(VAR_0);
FUNC_3(VAR_0,1);
}
FUNC_5(VAR_0,(-10001),VAR_1);
}
FUNC_4(VAR_0,(-10001),VAR_1);
return 1;
}
