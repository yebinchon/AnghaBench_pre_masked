
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (int *,char*,char const*,char*) ;
 int FUNC_1 (int *,int,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (char const*,char*) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (char*,char const*,int) ;

void FUNC_8(lua_State *VAR_0, const char *VAR_1)
{

  char VAR_2[256];
  char VAR_3[] = {'.', '\0'};
  const char *VAR_4 = VAR_1;


  int VAR_5 = FUNC_5(VAR_1, VAR_3);
  FUNC_7(VAR_2, VAR_1, VAR_5);
  VAR_2[VAR_5] = '\0';
  FUNC_2(VAR_0, VAR_2);
  VAR_1 += VAR_5 + 1;


  VAR_5 = FUNC_5(VAR_1, VAR_3);
  while(VAR_5 < FUNC_6(VAR_1))
  {

    if(!FUNC_3(VAR_0, -1)){
      FUNC_7(VAR_2, VAR_4, VAR_1 - VAR_4 - 1);
      VAR_2[VAR_1 - VAR_4] = '\0';
      FUNC_0(VAR_0, "while creating metatable %s: bad argument #1 (%s is an invalid module name)", VAR_4, VAR_2);
    }
    FUNC_7(VAR_2, VAR_1, VAR_5);
    VAR_2[VAR_5] = '\0';
    FUNC_1(VAR_0, -1, VAR_2);
    FUNC_4(VAR_0, -2);
    VAR_1 += VAR_5 + 1;
    VAR_5 = FUNC_5(VAR_1, VAR_3);
  }


  if(!FUNC_3(VAR_0, -1)){
    FUNC_7(VAR_2, VAR_4, VAR_1 - VAR_4 - 1);
    VAR_2[VAR_1 - VAR_4] = '\0';
    FUNC_0(VAR_0, "while creating metatable %s: bad argument #1 (%s is an invalid module name)", VAR_4, VAR_2);
  }
}
