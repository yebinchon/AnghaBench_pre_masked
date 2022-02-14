
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int FILE ;


 scalar_t__ FUNC_0 (int *,char*,double) ;
 size_t FUNC_1 (char const*,int,size_t,int *) ;
 char* FUNC_2 (int *,int,size_t*) ;
 int FUNC_3 (int *) ;
 double FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int,int *) ;

__attribute__((used)) static int FUNC_7(lua_State*VAR_0,FILE*VAR_1,int VAR_2){
int VAR_3=FUNC_3(VAR_0)-1;
int VAR_4=1;
for(;VAR_3--;VAR_2++){
if(FUNC_5(VAR_0,VAR_2)==3){
VAR_4=VAR_4&&
FUNC_0(VAR_1,"%.14g",FUNC_4(VAR_0,VAR_2))>0;
}
else{
size_t VAR_5;
const char*VAR_6=FUNC_2(VAR_0,VAR_2,&VAR_5);
VAR_4=VAR_4&&(FUNC_1(VAR_6,sizeof(char),VAR_5,VAR_1)==VAR_5);
}
}
return FUNC_6(VAR_0,VAR_4,((void*)0));
}
