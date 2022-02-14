
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int lua_Number ;
typedef scalar_t__ lua_Integer ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int *,int,int,char*) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static int FUNC_7 (lua_State *VAR_2) {
  lua_Integer VAR_3, VAR_4;
  double VAR_5 = (double)FUNC_0() * (1.0 / ((double)VAR_1 + 1.0));
  switch (FUNC_4(VAR_2)) {
    case 0: {
      FUNC_6(VAR_2, (lua_Number)VAR_5);
      return 1;
    }
    case 1: {
      VAR_3 = 1;
      VAR_4 = FUNC_2(VAR_2, 1);
      break;
    }
    case 2: {
      VAR_3 = FUNC_2(VAR_2, 1);
      VAR_4 = FUNC_2(VAR_2, 2);
      break;
    }
    default: return FUNC_3(VAR_2, "wrong number of arguments");
  }

  FUNC_1(VAR_2, VAR_3 <= VAR_4, 1, "interval is empty");
  FUNC_1(VAR_2, VAR_3 >= 0 || VAR_4 <= VAR_0 + VAR_3, 1,
                   "interval too large");
  VAR_5 *= (double)(VAR_4 - VAR_3) + 1.0;
  FUNC_5(VAR_2, (lua_Integer)VAR_5 + VAR_3);
  return 1;
}
