
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int lua_Integer ;


 int VAR_0 ;
 char* FUNC_0 (int *,int,size_t*) ;
 int FUNC_1 (int *,int,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,size_t) ;
 int FUNC_6 (char const) ;

__attribute__((used)) static int FUNC_7 (lua_State *VAR_1) {
  size_t VAR_2;
  const char *VAR_3 = FUNC_0(VAR_1, 1, &VAR_2);
  lua_Integer VAR_4 = FUNC_5(FUNC_3(VAR_1, 2, 1), VAR_2);
  lua_Integer VAR_5 = FUNC_5(FUNC_3(VAR_1, 3, VAR_4), VAR_2);
  int VAR_6, VAR_7;
  if (VAR_4 < 1) VAR_4 = 1;
  if (VAR_5 > (lua_Integer)VAR_2) VAR_5 = VAR_2;
  if (VAR_4 > VAR_5) return 0;
  if (VAR_5 - VAR_4 >= VAR_0)
    return FUNC_2(VAR_1, "string slice too long");
  VAR_6 = (int)(VAR_5 - VAR_4) + 1;
  FUNC_1(VAR_1, VAR_6, "string slice too long");
  for (VAR_7=0; VAR_7<VAR_6; VAR_7++)
    FUNC_4(VAR_1, FUNC_6(VAR_3[VAR_4+VAR_7-1]));
  return VAR_6;
}
