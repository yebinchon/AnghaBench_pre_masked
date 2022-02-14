
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 char* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (char const*,char*) ;

__attribute__((used)) static bool FUNC_3(lua_State *VAR_0)
{
    const char *VAR_1 = FUNC_0(VAR_0, -1);
    FUNC_1( VAR_0, 1 );
    return VAR_1 && !FUNC_2(VAR_1, "on");
}
