
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int dummy; } ;
typedef int lua_State ;
typedef int luaL_Buffer ;


 int VAR_0 ;
 char* FUNC_0 (int *,char const*,char*) ;
 int VAR_1 ;
 struct tm* FUNC_1 (int *,struct tm*) ;
 struct tm* FUNC_2 (int *,struct tm*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,size_t) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,int ,int,int ) ;
 char* FUNC_8 (int *,int,char*) ;
 char* FUNC_9 (int *,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ,int) ;
 int FUNC_12 (int *,struct tm*) ;
 scalar_t__ FUNC_13 (char const*,char*) ;
 size_t FUNC_14 (char*,int ,char*,struct tm*) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int FUNC_16 (lua_State *VAR_2) {
  const char *VAR_3 = FUNC_8(VAR_2, 1, "%c");
  time_t VAR_4 = FUNC_7(VAR_2, VAR_1, 2, FUNC_15(((void*)0)));
  struct tm VAR_5, *VAR_6;
  if (*VAR_3 == '!') {
    VAR_6 = FUNC_1(&VAR_4, &VAR_5);
    VAR_3++;
  }
  else
    VAR_6 = FUNC_2(&VAR_4, &VAR_5);
  if (VAR_6 == ((void*)0))
    FUNC_6(VAR_2, "time result cannot be represented in this installation");
  if (FUNC_13(VAR_3, "*t") == 0) {
    FUNC_11(VAR_2, 0, 9);
    FUNC_12(VAR_2, VAR_6);
  }
  else {
    char VAR_7[4];
    luaL_Buffer VAR_8;
    VAR_7[0] = '%';
    FUNC_5(VAR_2, &VAR_8);
    while (*VAR_3) {
      if (*VAR_3 != '%')
        FUNC_3(&VAR_8, *VAR_3++);
      else {
        size_t VAR_9;
        char *VAR_10 = FUNC_9(&VAR_8, VAR_0);
        VAR_3 = FUNC_0(VAR_2, VAR_3 + 1, VAR_7 + 1);
        VAR_9 = FUNC_14(VAR_10, VAR_0, VAR_7, VAR_6);
        FUNC_4(&VAR_8, VAR_9);
      }
    }
    FUNC_10(&VAR_8);
  }
  return 1;
}
