
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef scalar_t__ time_t ;
typedef int lua_State ;


 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,int) ;
 int * FUNC_4 (int *,scalar_t__) ;

__attribute__((used)) static int
FUNC_5(lua_State *VAR_0)
{
    time_t VAR_1;
    u_char *VAR_2;

    u_char VAR_3[sizeof("Mon, 28 Sep 1970 06:00:00 GMT") - 1];

    if (FUNC_2(VAR_0) != 1) {
        return FUNC_1(VAR_0, "expecting one argument");
    }

    VAR_1 = (time_t) FUNC_0(VAR_0, 1);

    VAR_2 = VAR_3;
    VAR_2 = FUNC_4(VAR_2, VAR_1);

    FUNC_3(VAR_0, (char *) VAR_3, VAR_2 - VAR_3);

    return 1;
}
