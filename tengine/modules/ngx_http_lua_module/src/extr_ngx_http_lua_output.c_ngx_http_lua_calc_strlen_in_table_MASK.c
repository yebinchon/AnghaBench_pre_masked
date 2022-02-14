
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
 int FUNC_0 (char*,int) ;
 double FUNC_1 (double) ;
 size_t FUNC_2 (int *,int,char const*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 char* FUNC_7 (int *,char*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int,int) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int,size_t*) ;
 double FUNC_12 (int *,int) ;
 int * FUNC_13 (int *,int) ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (int *,int) ;

size_t
FUNC_16(lua_State *VAR_0, int VAR_1, int VAR_2,
    unsigned VAR_3)
{
    double VAR_4;
    int VAR_5;
    int VAR_6;
    int VAR_7;
    size_t VAR_8;
    size_t VAR_9;
    const char *VAR_10;

    if (VAR_1 < 0) {
        VAR_1 = FUNC_4(VAR_0) + VAR_1 + 1;
    }

    FUNC_0("table index: %d", VAR_1);

    VAR_5 = 0;

    FUNC_8(VAR_0);
    while (FUNC_5(VAR_0, VAR_1) != 0) {
        FUNC_0("key type: %s", FUNC_3(VAR_0, -2));

        if (FUNC_14(VAR_0, -2) == 130) {

            VAR_4 = FUNC_12(VAR_0, -2);

            FUNC_0("key value: %d", (int) VAR_4);

            if (FUNC_1(VAR_4) == VAR_4 && VAR_4 >= 1) {
                if (VAR_4 > VAR_5) {
                    VAR_5 = (int) VAR_4;
                }

                FUNC_6(VAR_0, 1);
                continue;
            }
        }


        FUNC_6(VAR_0, 2);

        FUNC_2(VAR_0, VAR_2, "non-array table found");
        return 0;
    }

    VAR_8 = 0;

    for (VAR_6 = 1; VAR_6 <= VAR_5; VAR_6++) {
        FUNC_9(VAR_0, VAR_1, VAR_6);
        VAR_7 = FUNC_14(VAR_0, -1);

        switch (VAR_7) {
            case 130:
            case 129:

                FUNC_11(VAR_0, -1, &VAR_9);
                VAR_8 += VAR_9;
                break;

            case 131:

                if (VAR_3) {
                    goto bad_type;
                }

                VAR_8 += sizeof("nil") - 1;
                break;

            case 133:

                if (VAR_3) {
                    goto bad_type;
                }

                if (FUNC_10(VAR_0, -1)) {
                    VAR_8 += sizeof("true") - 1;

                } else {
                    VAR_8 += sizeof("false") - 1;
                }

                break;

            case 128:

                VAR_8 += FUNC_16(VAR_0, -1, VAR_2, VAR_3);
                break;

            case 132:

                if (VAR_3) {
                    goto bad_type;
                }

                if (FUNC_13(VAR_0, -1) == ((void*)0)) {
                    VAR_8 += sizeof("null") - 1;
                    break;
                }

                continue;

            default:

bad_type:

                VAR_10 = FUNC_7(VAR_0, "bad data type %s found",
                                      FUNC_15(VAR_0, VAR_7));
                return FUNC_2(VAR_0, VAR_2, VAR_10);
        }

        FUNC_6(VAR_0, 1);
    }

    return VAR_8;
}
