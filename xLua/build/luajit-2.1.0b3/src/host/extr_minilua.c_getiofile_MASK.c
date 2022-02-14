
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int FILE ;


 int * VAR_0 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,int,int) ;
 scalar_t__ FUNC_2 (int *,int) ;

__attribute__((used)) static FILE*FUNC_3(lua_State*VAR_1,int VAR_2){
FILE*VAR_3;
FUNC_1(VAR_1,(-10001),VAR_2);
VAR_3=*(FILE**)FUNC_2(VAR_1,-1);
if(VAR_3==((void*)0))
FUNC_0(VAR_1,"standard %s file is closed",VAR_0[VAR_2-1]);
return VAR_3;
}
