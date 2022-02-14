
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_Integer ;
typedef int TValue ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int FUNC_2 (int VAR_0, TValue *VAR_1, TValue *VAR_2) {
  switch (VAR_0) {
    case 136: case 134: case 133:
    case 129: case 128: case 135: {
      lua_Integer VAR_3;
      return (FUNC_1(VAR_1, &VAR_3) && FUNC_1(VAR_2, &VAR_3));
    }
    case 132: case 131: case 130:
      return (FUNC_0(VAR_2) != 0);
    default: return 1;
  }
}
