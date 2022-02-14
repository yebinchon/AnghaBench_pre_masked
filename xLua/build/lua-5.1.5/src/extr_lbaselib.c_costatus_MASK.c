
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int lua_Debug ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3 (lua_State *VAR_4, lua_State *VAR_5) {
  if (VAR_4 == VAR_5) return VAR_2;
  switch (FUNC_2(VAR_5)) {
    case 128:
      return VAR_3;
    case 0: {
      lua_Debug VAR_6;
      if (FUNC_0(VAR_5, 0, &VAR_6) > 0)
        return VAR_1;
      else if (FUNC_1(VAR_5) == 0)
          return VAR_0;
      else
        return VAR_3;
    }
    default:
      return VAR_0;
  }
}
