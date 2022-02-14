
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int lua_Integer ;


 int FUNC_0 (int *,int,int,char*) ;
 char* FUNC_1 (int *,int,size_t*) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,size_t) ;
 char* FUNC_6 (char const*,int *) ;

__attribute__((used)) static int FUNC_7 (lua_State *VAR_0) {
  int VAR_1 = 0;
  size_t VAR_2;
  const char *VAR_3 = FUNC_1(VAR_0, 1, &VAR_2);
  lua_Integer VAR_4 = FUNC_5(FUNC_2(VAR_0, 2, 1), VAR_2);
  lua_Integer VAR_5 = FUNC_5(FUNC_2(VAR_0, 3, -1), VAR_2);
  FUNC_0(VAR_0, 1 <= VAR_4 && --VAR_4 <= (lua_Integer)VAR_2, 2,
                   "initial position out of string");
  FUNC_0(VAR_0, --VAR_5 < (lua_Integer)VAR_2, 3,
                   "final position out of string");
  while (VAR_4 <= VAR_5) {
    const char *VAR_6 = FUNC_6(VAR_3 + VAR_4, ((void*)0));
    if (VAR_6 == ((void*)0)) {
      FUNC_4(VAR_0);
      FUNC_3(VAR_0, VAR_4 + 1);
      return 2;
    }
    VAR_4 = VAR_6 - VAR_3;
    VAR_1++;
  }
  FUNC_3(VAR_0, VAR_1);
  return 1;
}
