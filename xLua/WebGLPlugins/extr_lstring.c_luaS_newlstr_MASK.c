
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int TString ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,char const*,size_t) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,size_t) ;
 int FUNC_4 (int ,char const*,size_t) ;

TString *FUNC_5 (lua_State *VAR_2, const char *VAR_3, size_t VAR_4) {
  if (VAR_4 <= VAR_0)
    return FUNC_1(VAR_2, VAR_3, VAR_4);
  else {
    TString *VAR_5;
    if (VAR_4 >= (VAR_1 - sizeof(TString))/sizeof(char))
      FUNC_2(VAR_2);
    VAR_5 = FUNC_3(VAR_2, VAR_4);
    FUNC_4(FUNC_0(VAR_5), VAR_3, VAR_4 * sizeof(char));
    return VAR_5;
  }
}
