
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int TString ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int ,int) ;
 char const* FUNC_2 (int *,char*,char*,int,char const*) ;

const char *FUNC_3 (lua_State *VAR_1, const char *VAR_2, TString *VAR_3,
                                        int VAR_4) {
  char VAR_5[VAR_0];
  if (VAR_3)
    FUNC_1(VAR_5, FUNC_0(VAR_3), VAR_0);
  else {
    VAR_5[0] = '?'; VAR_5[1] = '\0';
  }
  return FUNC_2(VAR_1, "%s:%d: %s", VAR_5, VAR_4, VAR_2);
}
