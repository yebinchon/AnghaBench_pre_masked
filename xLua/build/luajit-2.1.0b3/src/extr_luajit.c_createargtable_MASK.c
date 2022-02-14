
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *,char*) ;

__attribute__((used)) static void FUNC_4(lua_State *VAR_0, char **VAR_1, int VAR_2, int VAR_3)
{
  int VAR_4;
  FUNC_0(VAR_0, VAR_2 - VAR_3, VAR_3);
  for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
    FUNC_1(VAR_0, VAR_1[VAR_4]);
    FUNC_2(VAR_0, -2, VAR_4 - VAR_3);
  }
  FUNC_3(VAR_0, "arg");
}
