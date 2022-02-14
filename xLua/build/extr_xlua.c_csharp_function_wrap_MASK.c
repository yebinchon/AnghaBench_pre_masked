
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int (* lua_CFunction ) (int *) ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(lua_State *VAR_0) {
 lua_CFunction VAR_1 = (lua_CFunction)FUNC_6(VAR_0, FUNC_7(1));
    int VAR_2 = VAR_1(VAR_0);

    if (FUNC_5(VAR_0, FUNC_7(2)))
    {
        FUNC_3(VAR_0, 0);
        FUNC_4(VAR_0, FUNC_7(2));
        return FUNC_1(VAR_0);
    }

 if (FUNC_2(VAR_0)) {
  FUNC_0(VAR_0);
 }

    return VAR_2;
}
