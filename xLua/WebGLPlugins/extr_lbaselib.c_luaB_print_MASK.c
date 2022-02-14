
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 char* FUNC_6 (int *,int,size_t*) ;
 int FUNC_7 () ;
 int FUNC_8 (char const*,size_t) ;

__attribute__((used)) static int FUNC_9 (lua_State *VAR_0) {
  int VAR_1 = FUNC_3(VAR_0);
  int VAR_2;
  FUNC_2(VAR_0, "tostring");
  for (VAR_2=1; VAR_2<=VAR_1; VAR_2++) {
    const char *VAR_3;
    size_t VAR_4;
    FUNC_5(VAR_0, -1);
    FUNC_5(VAR_0, VAR_2);
    FUNC_1(VAR_0, 1, 1);
    VAR_3 = FUNC_6(VAR_0, -1, &VAR_4);
    if (VAR_3 == ((void*)0))
      return FUNC_0(VAR_0, "'tostring' must return a string to 'print'");
    if (VAR_2>1) FUNC_8("\t", 1);
    FUNC_8(VAR_3, VAR_4);
    FUNC_4(VAR_0, 1);
  }
  FUNC_7();
  return 0;
}
