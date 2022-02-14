
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int lua_Integer ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,char const*) ;
 int FUNC_1 (int *,int,char const*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int,int*) ;

__attribute__((used)) static int FUNC_4 (lua_State *VAR_2, const char *VAR_3, int VAR_4, int VAR_5) {
  int VAR_6;
  int VAR_7 = FUNC_1(VAR_2, -1, VAR_3);
  lua_Integer VAR_8 = FUNC_3(VAR_2, -1, &VAR_6);
  if (!VAR_6) {
    if (VAR_7 != VAR_0)
      return FUNC_0(VAR_2, "field '%s' is not an integer", VAR_3);
    else if (VAR_4 < 0)
      return FUNC_0(VAR_2, "field '%s' missing in date table", VAR_3);
    VAR_8 = VAR_4;
  }
  else {
    if (!(-VAR_1 <= VAR_8 && VAR_8 <= VAR_1))
      return FUNC_0(VAR_2, "field '%s' is out-of-bound", VAR_3);
    VAR_8 -= VAR_5;
  }
  FUNC_2(VAR_2, 1);
  return (int)VAR_8;
}
