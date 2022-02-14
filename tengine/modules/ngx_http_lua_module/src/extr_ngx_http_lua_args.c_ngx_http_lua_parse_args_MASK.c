
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char u_char ;
typedef int lua_State ;
struct TYPE_2__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*,int) ;
 int FUNC_7 (int *,int,size_t*) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int ) ;
 TYPE_1__* VAR_2 ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (char**,char**,int,int ) ;
 int FUNC_12 (int ,int ,int ,char*,int) ;

int
FUNC_13(lua_State *VAR_3, u_char *VAR_4, u_char *VAR_5, int VAR_6)
{
    u_char *VAR_7, *VAR_8;
    u_char *VAR_9, *VAR_10;
    unsigned VAR_11;
    size_t VAR_12;
    int VAR_13 = 0;
    int VAR_14;

    VAR_14 = FUNC_2(VAR_3);

    VAR_7 = VAR_4;

    VAR_11 = 0;
    VAR_8 = VAR_7;

    while (VAR_7 != VAR_5) {
        if (*VAR_7 == '=' && ! VAR_11) {


            VAR_9 = VAR_8; VAR_10 = VAR_8;

            FUNC_11(&VAR_10, &VAR_9, VAR_7 - VAR_8,
                                      VAR_1);

            FUNC_0("pushing key %.*s", (int) (VAR_10 - VAR_8), VAR_8);


            FUNC_6(VAR_3, (char *) VAR_8, VAR_10 - VAR_8);


            VAR_7++;

            VAR_8 = VAR_7;
            VAR_11 = 1;

        } else if (*VAR_7 == '&') {

            VAR_9 = VAR_8; VAR_10 = VAR_8;

            FUNC_11(&VAR_10, &VAR_9, VAR_7 - VAR_8,
                                      VAR_1);

            FUNC_0("pushing key or value %.*s", (int) (VAR_10 - VAR_8), VAR_8);


            FUNC_6(VAR_3, (char *) VAR_8, VAR_10 - VAR_8);


            VAR_7++;

            VAR_8 = VAR_7;

            if (VAR_11) {

                VAR_11 = 0;

            } else {


                FUNC_0("pushing boolean true");

                FUNC_4(VAR_3, 1);
            }

            (void) FUNC_7(VAR_3, -2, &VAR_12);

            if (VAR_12 == 0) {

                FUNC_0("popping key and value...");
                FUNC_3(VAR_3, 2);

            } else {
                FUNC_0("setting table...");
                FUNC_10(VAR_3, VAR_14);
            }

            if (VAR_6 > 0 && ++VAR_13 == VAR_6) {
                FUNC_5(VAR_3, "truncated");

                FUNC_12(VAR_0, VAR_2->log, 0,
                               "lua hit query args limit %d", VAR_6);
                return 2;
            }

        } else {
            VAR_7++;
        }
    }

    if (VAR_7 != VAR_8 || VAR_11) {
        VAR_9 = VAR_8; VAR_10 = VAR_8;

        FUNC_11(&VAR_10, &VAR_9, VAR_7 - VAR_8,
                                  VAR_1);

        FUNC_0("pushing key or value %.*s", (int) (VAR_10 - VAR_8), VAR_8);

        FUNC_6(VAR_3, (char *) VAR_8, VAR_10 - VAR_8);

        if (!VAR_11) {
            FUNC_0("pushing boolean true...");
            FUNC_4(VAR_3, 1);
        }

        (void) FUNC_7(VAR_3, -2, &VAR_12);

        if (VAR_12 == 0) {

            FUNC_0("popping key and value...");
            FUNC_3(VAR_3, 2);

        } else {
            FUNC_0("setting table...");
            FUNC_10(VAR_3, VAR_14);
        }
    }

    FUNC_0("gettop: %d", FUNC_2(VAR_3));
    FUNC_0("type: %s", FUNC_9(VAR_3, FUNC_8(VAR_3, 1)));

    if (FUNC_2(VAR_3) != VAR_14) {
        return FUNC_1(VAR_3, "internal error: stack in bad state");
    }

    return 1;
}
