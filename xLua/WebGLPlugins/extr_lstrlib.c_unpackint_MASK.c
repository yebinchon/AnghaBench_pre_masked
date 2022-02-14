
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_Unsigned ;
typedef int lua_State ;
typedef scalar_t__ lua_Integer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int) ;

__attribute__((used)) static lua_Integer FUNC_1 (lua_State *VAR_3, const char *VAR_4,
                              int VAR_5, int VAR_6, int VAR_7) {
  lua_Unsigned VAR_8 = 0;
  int VAR_9;
  int VAR_10 = (VAR_6 <= VAR_2) ? VAR_6 : VAR_2;
  for (VAR_9 = VAR_10 - 1; VAR_9 >= 0; VAR_9--) {
    VAR_8 <<= VAR_1;
    VAR_8 |= (lua_Unsigned)(unsigned char)VAR_4[VAR_5 ? VAR_9 : VAR_6 - 1 - VAR_9];
  }
  if (VAR_6 < VAR_2) {
    if (VAR_7) {
      lua_Unsigned VAR_11 = (lua_Unsigned)1 << (VAR_6*VAR_1 - 1);
      VAR_8 = ((VAR_8 ^ VAR_11) - VAR_11);
    }
  }
  else if (VAR_6 > VAR_2) {
    int VAR_12 = (!VAR_7 || (lua_Integer)VAR_8 >= 0) ? 0 : VAR_0;
    for (VAR_9 = VAR_10; VAR_9 < VAR_6; VAR_9++) {
      if ((unsigned char)VAR_4[VAR_5 ? VAR_9 : VAR_6 - 1 - VAR_9] != VAR_12)
        FUNC_0(VAR_3, "%d-byte integer does not fit into Lua Integer", VAR_6);
    }
  }
  return (lua_Integer)VAR_8;
}
