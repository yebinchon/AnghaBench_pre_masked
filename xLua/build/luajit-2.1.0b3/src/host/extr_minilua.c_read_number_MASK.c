
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int lua_Number ;
typedef int FILE ;


 int FUNC_0 (int *,char*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int FUNC_3(lua_State*VAR_0,FILE*VAR_1){
lua_Number VAR_2;
if(FUNC_0(VAR_1,"%lf",&VAR_2)==1){
FUNC_2(VAR_0,VAR_2);
return 1;
}
else{
FUNC_1(VAR_0);
return 0;
}
}
