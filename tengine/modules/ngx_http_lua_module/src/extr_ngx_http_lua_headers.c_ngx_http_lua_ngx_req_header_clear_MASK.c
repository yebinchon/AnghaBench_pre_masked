
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(lua_State *VAR_0)
{
    if (FUNC_1(VAR_0) != 1) {
        return FUNC_0(VAR_0, "expecting one arguments, but seen %d",
                          FUNC_1(VAR_0));
    }

    FUNC_2(VAR_0);

    return FUNC_3(VAR_0);
}
