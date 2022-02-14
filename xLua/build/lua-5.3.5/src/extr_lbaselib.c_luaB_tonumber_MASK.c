
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int lua_Integer ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 char const* FUNC_0 (char const*,int,int*) ;
 int FUNC_1 (int *,int,int,char*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int,int ) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;
 size_t FUNC_9 (int *,char const*) ;
 char* FUNC_10 (int *,int,size_t*) ;
 scalar_t__ FUNC_11 (int *,int) ;

__attribute__((used)) static int FUNC_12 (lua_State *VAR_2) {
  if (FUNC_5(VAR_2, 2)) {
    FUNC_2(VAR_2, 1);
    if (FUNC_11(VAR_2, 1) == VAR_0) {
      FUNC_8(VAR_2, 1);
      return 1;
    }
    else {
      size_t VAR_3;
      const char *VAR_4 = FUNC_10(VAR_2, 1, &VAR_3);
      if (VAR_4 != ((void*)0) && FUNC_9(VAR_2, VAR_4) == VAR_3 + 1)
        return 1;

    }
  }
  else {
    size_t VAR_5;
    const char *VAR_6;
    lua_Integer VAR_7 = 0;
    lua_Integer VAR_8 = FUNC_3(VAR_2, 2);
    FUNC_4(VAR_2, 1, VAR_1);
    VAR_6 = FUNC_10(VAR_2, 1, &VAR_5);
    FUNC_1(VAR_2, 2 <= VAR_8 && VAR_8 <= 36, 2, "base out of range");
    if (FUNC_0(VAR_6, (int)VAR_8, &VAR_7) == VAR_6 + VAR_5) {
      FUNC_6(VAR_2, VAR_7);
      return 1;
    }
  }
  FUNC_7(VAR_2);
  return 1;
}
