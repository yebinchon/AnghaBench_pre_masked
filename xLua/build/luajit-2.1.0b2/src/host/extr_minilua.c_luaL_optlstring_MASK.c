
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 char const* FUNC_0 (int *,int,size_t*) ;
 scalar_t__ FUNC_1 (int *,int) ;
 size_t FUNC_2 (char const*) ;

__attribute__((used)) static const char*FUNC_3(lua_State*VAR_0,int VAR_1,
const char*VAR_2,size_t*VAR_3){
if(FUNC_1(VAR_0,VAR_1)){
if(VAR_3)
*VAR_3=(VAR_2?FUNC_2(VAR_2):0);
return VAR_2;
}
else return FUNC_0(VAR_0,VAR_1,VAR_3);
}
