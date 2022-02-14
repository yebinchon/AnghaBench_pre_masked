
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int luaL_Buffer ;


 int FUNC_0 (int *,char const) ;
 int FUNC_1 (int *,char*,int) ;
 char* FUNC_2 (int *,int,size_t*) ;

__attribute__((used)) static void FUNC_3(lua_State*VAR_0,luaL_Buffer*VAR_1,int VAR_2){
size_t VAR_3;
const char*VAR_4=FUNC_2(VAR_0,VAR_2,&VAR_3);
FUNC_0(VAR_1,'"');
while(VAR_3--){
switch(*VAR_4){
case'"':case'\\':case'\n':{
FUNC_0(VAR_1,'\\');
FUNC_0(VAR_1,*VAR_4);
break;
}
case'\r':{
FUNC_1(VAR_1,"\\r",2);
break;
}
case'\0':{
FUNC_1(VAR_1,"\\000",4);
break;
}
default:{
FUNC_0(VAR_1,*VAR_4);
break;
}
}
VAR_4++;
}
FUNC_0(VAR_1,'"');
}
