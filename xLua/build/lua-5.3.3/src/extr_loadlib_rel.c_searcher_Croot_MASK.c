
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,char const*) ;
 char* FUNC_1 (int *,int ,char*,int ) ;
 int FUNC_2 (int *,char const*,char const*) ;
 char* FUNC_3 (int *,int) ;
 int FUNC_4 (int *,char*,char const*,char const*) ;
 int FUNC_5 (int *,char const*,int) ;
 int FUNC_6 (int *,char const*) ;
 int FUNC_7 (int *,int) ;
 char* FUNC_8 (char const*,char) ;

__attribute__((used)) static int FUNC_9 (lua_State *VAR_2) {
  const char *VAR_3;
  const char *VAR_4 = FUNC_3(VAR_2, 1);
  const char *VAR_5 = FUNC_8(VAR_4, '.');
  int VAR_6;
  if (VAR_5 == ((void*)0)) return 0;
  FUNC_5(VAR_2, VAR_4, VAR_5 - VAR_4);
  VAR_3 = FUNC_1(VAR_2, FUNC_7(VAR_2, -1), "cpath", VAR_1);
  if (VAR_3 == ((void*)0)) return 1;
  if ((VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_4)) != 0) {
    if (VAR_6 != VAR_0)
      return FUNC_0(VAR_2, 0, VAR_3);
    else {
      FUNC_4(VAR_2, "\n\tno module '%s' in file '%s'", VAR_4, VAR_3);
      return 1;
    }
  }
  FUNC_6(VAR_2, VAR_3);
  return 2;
}
