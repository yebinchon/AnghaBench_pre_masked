
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int,int ) ;
 char* FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int FUNC_5 (int *,char const*) ;
 char* FUNC_6 (int *,int,int) ;

__attribute__((used)) static int FUNC_7 (lua_State *VAR_1, int VAR_2) {
  const char *VAR_3;
  int VAR_4 = FUNC_0(VAR_1, 2);
  FUNC_1(VAR_1, 1, VAR_0);
  if (FUNC_4(VAR_1, 1)) return 0;
  VAR_3 = VAR_2 ? FUNC_2(VAR_1, 1, VAR_4) : FUNC_6(VAR_1, 1, VAR_4);
  if (VAR_3 == ((void*)0)) return 0;
  FUNC_5(VAR_1, VAR_3);
  FUNC_3(VAR_1, -(VAR_2+1));
  return VAR_2 + 1;
}
