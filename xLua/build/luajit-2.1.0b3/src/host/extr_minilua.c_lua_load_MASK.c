
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int lua_Reader ;
typedef int ZIO ;


 int FUNC_0 (int *,int *,char const*) ;
 int FUNC_1 (int *,int *,int ,void*) ;

__attribute__((used)) static int FUNC_2(lua_State*VAR_0,lua_Reader VAR_1,void*VAR_2,
const char*VAR_3){
ZIO VAR_4;
int VAR_5;
if(!VAR_3)VAR_3="?";
FUNC_1(VAR_0,&VAR_4,VAR_1,VAR_2);
VAR_5=FUNC_0(VAR_0,&VAR_4,VAR_3);
return VAR_5;
}
