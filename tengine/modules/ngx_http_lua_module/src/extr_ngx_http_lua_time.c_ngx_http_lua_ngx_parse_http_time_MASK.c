
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef scalar_t__ time_t ;
typedef int lua_State ;
typedef int lua_Number ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int,size_t*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int *,size_t) ;

__attribute__((used)) static int
FUNC_6(lua_State *VAR_1)
{
    u_char *VAR_2;
    size_t VAR_3;
    time_t VAR_4;

    if (FUNC_2(VAR_1) != 1) {
        return FUNC_1(VAR_1, "expecting one argument");
    }

    VAR_2 = (u_char *) FUNC_0(VAR_1, 1, &VAR_3);

    VAR_4 = FUNC_5(VAR_2, VAR_3);
    if (VAR_4 == VAR_0) {
        FUNC_3(VAR_1);
        return 1;
    }

    FUNC_4(VAR_1, (lua_Number) VAR_4);

    return 1;
}
