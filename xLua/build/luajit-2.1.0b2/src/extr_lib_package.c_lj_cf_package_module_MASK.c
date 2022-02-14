
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ,char const*) ;
 char* FUNC_2 (int *,int) ;
 int * FUNC_3 (int *,int ,char const*,int) ;
 int FUNC_4 (int *,int,char const*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int,char const*) ;
 int FUNC_11 (int *,char const*) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(lua_State *VAR_3)
{
  const char *VAR_4 = FUNC_2(VAR_3, 1);
  int VAR_5 = FUNC_5(VAR_3) + 1;
  FUNC_4(VAR_3, VAR_2, "_LOADED");
  FUNC_4(VAR_3, VAR_5, VAR_4);
  if (!FUNC_7(VAR_3, -1)) {
    FUNC_8(VAR_3, 1);

    if (FUNC_3(VAR_3, VAR_1, VAR_4, 1) != ((void*)0))
      FUNC_1(VAR_3, VAR_0, VAR_4);
    FUNC_9(VAR_3, -1);
    FUNC_10(VAR_3, VAR_5, VAR_4);
  }

  FUNC_4(VAR_3, -1, "_NAME");
  if (!FUNC_6(VAR_3, -1)) {
    FUNC_8(VAR_3, 1);
  } else {
    FUNC_8(VAR_3, 1);
    FUNC_11(VAR_3, VAR_4);
  }
  FUNC_9(VAR_3, -1);
  FUNC_12(VAR_3);
  FUNC_0(VAR_3, VAR_5 - 1);
  return 0;
}
