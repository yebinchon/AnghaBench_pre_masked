
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int,int ) ;
 int FUNC_1 (int *,char*,char*) ;
 int FUNC_2 (int *,char*) ;
 int VAR_1 ;
 size_t FUNC_3 (char*) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static int FUNC_5(lua_State *VAR_2, int VAR_3)
{
  char VAR_4[VAR_0];
  FUNC_4(VAR_2, VAR_3);
  if (FUNC_0(VAR_4, VAR_0, VAR_1)) {
    size_t VAR_5 = FUNC_3(VAR_4);
    if (VAR_5 > 0 && VAR_4[VAR_5-1] == '\n')
      VAR_4[VAR_5-1] = '\0';
    if (VAR_3 && VAR_4[0] == '=')
      FUNC_1(VAR_2, "return %s", VAR_4+1);
    else
      FUNC_2(VAR_2, VAR_4);
    return 1;
  }
  return 0;
}
