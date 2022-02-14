
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int lua_Number ;
typedef int TValue ;


 int * FUNC_0 (int *,int) ;
 int FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int const*,int *) ;

__attribute__((used)) static lua_Number FUNC_3(lua_State*VAR_0,int VAR_1){
TValue VAR_2;
const TValue*VAR_3=FUNC_0(VAR_0,VAR_1);
if(FUNC_2(VAR_3,&VAR_2))
return FUNC_1(VAR_3);
else
return 0;
}
