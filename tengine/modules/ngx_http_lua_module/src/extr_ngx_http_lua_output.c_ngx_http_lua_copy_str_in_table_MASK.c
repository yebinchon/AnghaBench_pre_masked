
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int lua_State ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int,int) ;
 int FUNC_6 (int *,int) ;
 scalar_t__ FUNC_7 (int *,int,size_t*) ;
 double FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int) ;
 int * FUNC_10 (int *,int *,size_t) ;

u_char *
FUNC_11(lua_State *VAR_0, int VAR_1, u_char *VAR_2)
{
    double VAR_3;
    int VAR_4;
    int VAR_5;
    int VAR_6;
    size_t VAR_7;
    u_char *VAR_8;

    if (VAR_1 < 0) {
        VAR_1 = FUNC_1(VAR_0) + VAR_1 + 1;
    }

    VAR_4 = 0;

    FUNC_4(VAR_0);
    while (FUNC_2(VAR_0, VAR_1) != 0) {
        VAR_3 = FUNC_8(VAR_0, -2);
        if (VAR_3 > VAR_4) {
            VAR_4 = (int) VAR_3;
        }

        FUNC_3(VAR_0, 1);
    }

    for (VAR_5 = 1; VAR_5 <= VAR_4; VAR_5++) {
        FUNC_5(VAR_0, VAR_1, VAR_5);
        VAR_6 = FUNC_9(VAR_0, -1);
        switch (VAR_6) {
            case 130:
            case 129:
                VAR_8 = (u_char *) FUNC_7(VAR_0, -1, &VAR_7);
                VAR_2 = FUNC_10(VAR_2, VAR_8, VAR_7);
                break;

            case 131:
                *VAR_2++ = 'n';
                *VAR_2++ = 'i';
                *VAR_2++ = 'l';
                break;

            case 133:
                if (FUNC_6(VAR_0, -1)) {
                    *VAR_2++ = 't';
                    *VAR_2++ = 'r';
                    *VAR_2++ = 'u';
                    *VAR_2++ = 'e';

                } else {
                    *VAR_2++ = 'f';
                    *VAR_2++ = 'a';
                    *VAR_2++ = 'l';
                    *VAR_2++ = 's';
                    *VAR_2++ = 'e';
                }

                break;

            case 128:
                VAR_2 = FUNC_11(VAR_0, -1, VAR_2);
                break;

            case 132:

                *VAR_2++ = 'n';
                *VAR_2++ = 'u';
                *VAR_2++ = 'l';
                *VAR_2++ = 'l';
                break;

            default:
                FUNC_0(VAR_0, "impossible to reach here");
                return ((void*)0);
        }

        FUNC_3(VAR_0, 1);
    }

    return VAR_2;
}
