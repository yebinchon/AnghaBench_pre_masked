
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 char const* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,char const*) ;
 char* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int,int) ;
 scalar_t__ FUNC_3 (int *,int,char const*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,char const*) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int,char const*) ;
 int FUNC_11 (int *,int) ;
 scalar_t__ FUNC_12 (int *,int) ;

__attribute__((used)) static int FUNC_13 (lua_State *VAR_3) {
  const char *VAR_4 = FUNC_1(VAR_3, 1);
  FUNC_11(VAR_3, 1);
  FUNC_3(VAR_3, VAR_1, VAR_0);
  FUNC_3(VAR_3, 2, VAR_4);
  if (FUNC_12(VAR_3, -1))
    return 1;

  FUNC_6(VAR_3, 1);
  FUNC_0(VAR_3, VAR_4);
  FUNC_8(VAR_3, VAR_4);
  FUNC_4(VAR_3, -2);
  FUNC_2(VAR_3, 2, 1);
  if (!FUNC_5(VAR_3, -1))
    FUNC_10(VAR_3, 2, VAR_4);
  if (FUNC_3(VAR_3, 2, VAR_4) == VAR_2) {
    FUNC_7(VAR_3, 1);
    FUNC_9(VAR_3, -1);
    FUNC_10(VAR_3, 2, VAR_4);
  }
  return 1;
}
