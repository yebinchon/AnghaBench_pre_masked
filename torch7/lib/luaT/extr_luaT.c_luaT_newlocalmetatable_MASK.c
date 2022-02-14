
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef scalar_t__ lua_CFunction ;


 scalar_t__ VAR_0 ;
 char const* FUNC_0 (int *,char const*) ;
 int FUNC_1 (int *,int,int) ;
 void FUNC_2 (int *,scalar_t__) ;
 void FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,char const*) ;
 void FUNC_5 (int *,int) ;

const char* FUNC_6(lua_State *VAR_1, const char *VAR_2, const char *VAR_3,
                                   lua_CFunction VAR_4, lua_CFunction VAR_5, lua_CFunction VAR_6, int VAR_7)
{
  FUNC_2(VAR_1, VAR_0);
  FUNC_4(VAR_1, VAR_2);
  (VAR_3 ? (void)FUNC_4(VAR_1, VAR_3) : FUNC_3(VAR_1));
  (VAR_4 ? FUNC_2(VAR_1, VAR_4) : FUNC_3(VAR_1));
  (VAR_5 ? FUNC_2(VAR_1, VAR_5) : FUNC_3(VAR_1));
  (VAR_6 ? FUNC_2(VAR_1, VAR_6) : FUNC_3(VAR_1));
  (VAR_7 > 0 ? FUNC_5(VAR_1, VAR_7) : FUNC_3(VAR_1));
  FUNC_1(VAR_1, 6, 1);
  return FUNC_0(VAR_1, VAR_2);
}
