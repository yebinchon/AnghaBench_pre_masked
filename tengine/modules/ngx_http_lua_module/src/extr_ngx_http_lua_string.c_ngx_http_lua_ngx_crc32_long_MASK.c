
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int lua_State ;
typedef int lua_Number ;


 scalar_t__ FUNC_0 (int *,int,size_t*) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int *,size_t) ;

__attribute__((used)) static int
FUNC_5(lua_State *VAR_0)
{
    u_char *VAR_1;
    size_t VAR_2;

    if (FUNC_2(VAR_0) != 1) {
        return FUNC_1(VAR_0, "expecting one argument, but got %d",
                          FUNC_2(VAR_0));
    }

    VAR_1 = (u_char *) FUNC_0(VAR_0, 1, &VAR_2);

    FUNC_3(VAR_0, (lua_Number) FUNC_4(VAR_1, VAR_2));
    return 1;
}
