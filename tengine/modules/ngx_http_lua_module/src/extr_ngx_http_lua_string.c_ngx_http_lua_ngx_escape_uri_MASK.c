
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int lua_State ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int,size_t*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int * FUNC_4 (int *,size_t) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*,size_t) ;
 int FUNC_7 (int *,int *,size_t,int ) ;

__attribute__((used)) static int
FUNC_8(lua_State *VAR_1)
{
    size_t VAR_2, VAR_3;
    uintptr_t VAR_4;
    u_char *VAR_5, *VAR_6;

    if (FUNC_2(VAR_1) != 1) {
        return FUNC_1(VAR_1, "expecting one argument");
    }

    if (FUNC_3(VAR_1, 1)) {
        FUNC_5(VAR_1, "");
        return 1;
    }

    VAR_5 = (u_char *) FUNC_0(VAR_1, 1, &VAR_2);

    if (VAR_2 == 0) {
        return 1;
    }

    VAR_4 = 2 * FUNC_7(((void*)0), VAR_5, VAR_2,
                                         VAR_0);

    if (VAR_4) {
        VAR_3 = VAR_4 + VAR_2;
        VAR_6 = FUNC_4(VAR_1, VAR_3);
        FUNC_7(VAR_6, VAR_5, VAR_2, VAR_0);
        FUNC_6(VAR_1, (char *) VAR_6, VAR_3);
    }

    return 1;
}
