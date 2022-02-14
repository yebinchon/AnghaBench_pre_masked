
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int luaL_Buffer ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,char const*,size_t) ;
 int FUNC_2 (int *,int *) ;
 int VAR_0 ;
 int FUNC_3 (int *,int,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int ,int,int ) ;
 int FUNC_6 (int *,int,int) ;
 char* FUNC_7 (int *,int,char*,size_t*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(lua_State*VAR_1){
luaL_Buffer VAR_2;
size_t VAR_3;
int VAR_4,VAR_5;
const char*VAR_6=FUNC_7(VAR_1,2,"",&VAR_3);
FUNC_3(VAR_1,1,5);
VAR_4=FUNC_6(VAR_1,3,1);
VAR_5=FUNC_5(VAR_1,VAR_0,4,FUNC_4(VAR_1,1));
FUNC_2(VAR_1,&VAR_2);
for(;VAR_4<VAR_5;VAR_4++){
FUNC_0(VAR_1,&VAR_2,VAR_4);
FUNC_1(&VAR_2,VAR_6,VAR_3);
}
if(VAR_4==VAR_5)
FUNC_0(VAR_1,&VAR_2,VAR_4);
FUNC_8(&VAR_2);
return 1;
}
