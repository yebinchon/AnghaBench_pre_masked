
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ lua_Integer ;



__attribute__((used)) static lua_Integer FUNC_0 (lua_Integer VAR_0, size_t VAR_1) {
  if (VAR_0 >= 0) return VAR_0;
  else if (0u - (size_t)VAR_0 > VAR_1) return 0;
  else return (lua_Integer)VAR_1 + VAR_0 + 1;
}
