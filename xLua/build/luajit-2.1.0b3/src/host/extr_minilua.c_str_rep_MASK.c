
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int luaL_Buffer ;


 int FUNC_0 (int *,char const*,size_t) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int) ;
 char* FUNC_3 (int *,int,size_t*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(lua_State*VAR_0){
size_t VAR_1;
luaL_Buffer VAR_2;
const char*VAR_3=FUNC_3(VAR_0,1,&VAR_1);
int VAR_4=FUNC_2(VAR_0,2);
FUNC_1(VAR_0,&VAR_2);
while(VAR_4-->0)
FUNC_0(&VAR_2,VAR_3,VAR_1);
FUNC_4(&VAR_2);
return 1;
}
