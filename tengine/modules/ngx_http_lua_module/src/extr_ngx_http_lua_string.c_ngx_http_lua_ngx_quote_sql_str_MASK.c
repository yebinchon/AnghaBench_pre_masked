
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
 int * FUNC_3 (int *,size_t) ;
 int FUNC_4 (int *,char*,int) ;
 int * FUNC_5 (int *,int *,size_t) ;
 size_t FUNC_6 (int *,int *,size_t) ;

__attribute__((used)) static int
FUNC_7(lua_State *VAR_1)
{
    size_t VAR_2, VAR_3, VAR_4;
    u_char *VAR_5;
    u_char *VAR_6, *VAR_7;

    if (FUNC_2(VAR_1) != 1) {
        return FUNC_1(VAR_1, "expecting one argument");
    }

    VAR_6 = (u_char *) FUNC_0(VAR_1, 1, &VAR_2);

    if (VAR_2 == 0) {
        VAR_7 = (u_char *) "''";
        VAR_3 = sizeof("''") - 1;
        FUNC_4(VAR_1, (char *) VAR_7, VAR_3);
        return 1;
    }

    VAR_4 = FUNC_6(((void*)0), VAR_6, VAR_2);

    VAR_3 = sizeof("''") - 1 + VAR_2 + VAR_4;

    VAR_5 = FUNC_3(VAR_1, VAR_3);

    VAR_7 = VAR_5;

    *VAR_5++ = '\'';

    if (VAR_4 == 0) {
        VAR_5 = FUNC_5(VAR_5, VAR_6, VAR_2);

    } else {
        VAR_5 = (u_char *) FUNC_6(VAR_5, VAR_6, VAR_2);
    }

    *VAR_5++ = '\'';

    if (VAR_5 != VAR_7 + VAR_3) {
        return VAR_0;
    }

    FUNC_4(VAR_1, (char *) VAR_7, VAR_5 - VAR_7);

    return 1;
}
