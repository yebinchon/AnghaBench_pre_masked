
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (int *,int,char*) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int,int) ;

__attribute__((used)) static int FUNC_4(lua_State *VAR_0, char **VAR_1, int VAR_2)
{
  int VAR_3;
  int VAR_4;
  int VAR_5 = 0;
  while (VAR_1[VAR_5]) VAR_5++;
  VAR_3 = VAR_5 - (VAR_2 + 1);
  FUNC_0(VAR_0, VAR_3 + 3, "too many arguments to script");
  for (VAR_4 = VAR_2+1; VAR_4 < VAR_5; VAR_4++)
    FUNC_2(VAR_0, VAR_1[VAR_4]);
  FUNC_1(VAR_0, VAR_3, VAR_2 + 1);
  for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
    FUNC_2(VAR_0, VAR_1[VAR_4]);
    FUNC_3(VAR_0, -2, VAR_4 - VAR_2);
  }
  return VAR_3;
}
