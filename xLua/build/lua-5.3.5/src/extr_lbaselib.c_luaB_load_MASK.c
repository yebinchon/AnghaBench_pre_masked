
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *,char const*,size_t,char const*,char const*) ;
 char* FUNC_3 (int *,int,char const*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int ,int *,char const*,char const*) ;
 int FUNC_6 (int *,int ) ;
 char* FUNC_7 (int *,int,size_t*) ;

__attribute__((used)) static int FUNC_8 (lua_State *VAR_3) {
  int VAR_4;
  size_t VAR_5;
  const char *VAR_6 = FUNC_7(VAR_3, 1, &VAR_5);
  const char *VAR_7 = FUNC_3(VAR_3, 3, "bt");
  int VAR_8 = (!FUNC_4(VAR_3, 4) ? 4 : 0);
  if (VAR_6 != ((void*)0)) {
    const char *VAR_9 = FUNC_3(VAR_3, 2, VAR_6);
    VAR_4 = FUNC_2(VAR_3, VAR_6, VAR_5, VAR_9, VAR_7);
  }
  else {
    const char *VAR_10 = FUNC_3(VAR_3, 2, "=(load)");
    FUNC_1(VAR_3, 1, VAR_0);
    FUNC_6(VAR_3, VAR_1);
    VAR_4 = FUNC_5(VAR_3, VAR_2, ((void*)0), VAR_10, VAR_7);
  }
  return FUNC_0(VAR_3, VAR_4, VAR_8);
}
