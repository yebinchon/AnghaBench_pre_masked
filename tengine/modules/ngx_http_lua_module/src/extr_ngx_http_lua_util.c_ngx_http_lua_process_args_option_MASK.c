
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
typedef int ssize_t ;
struct TYPE_5__ {size_t len; int * data; } ;
typedef TYPE_1__ ngx_str_t ;
struct TYPE_6__ {int pool; } ;
typedef TYPE_2__ ngx_http_request_t ;
typedef int lua_State ;






 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int * FUNC_5 (int *,size_t) ;
 scalar_t__ FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int) ;
 scalar_t__ FUNC_10 (int *,int,size_t*) ;
 int FUNC_11 (int *,int) ;
 int * FUNC_12 (int *,int *,size_t) ;
 int FUNC_13 (int *,int *,size_t,int ) ;
 int * FUNC_14 (int ,size_t) ;

void
FUNC_15(ngx_http_request_t *VAR_1, lua_State *VAR_2,
    int VAR_3, ngx_str_t *VAR_4)
{
    u_char *VAR_5;
    size_t VAR_6;
    u_char *VAR_7;
    size_t VAR_8;
    size_t VAR_9 = 0;
    size_t VAR_10 = 0;
    uintptr_t VAR_11 = 0;
    int VAR_12;
    int VAR_13;
    u_char *VAR_14;

    if (VAR_3 < 0) {
        VAR_3 = FUNC_3(VAR_2) + VAR_3 + 1;
    }

    VAR_12 = 0;
    FUNC_8(VAR_2);
    while (FUNC_6(VAR_2, VAR_3) != 0) {
        if (FUNC_11(VAR_2, -2) != 129) {
            FUNC_1(VAR_2, "attempt to use a non-string key in the "
                       "\"args\" option table");
            return;
        }

        VAR_5 = (u_char *) FUNC_10(VAR_2, -2, &VAR_6);

        VAR_10 = 2 * FUNC_13(((void*)0), VAR_5, VAR_6,
                                                 VAR_0);
        VAR_11 += VAR_10;

        switch (FUNC_11(VAR_2, -1)) {
        case 130:
        case 129:
            VAR_7 = (u_char *) FUNC_10(VAR_2, -1, &VAR_8);

            VAR_11 += 2 * FUNC_13(((void*)0), VAR_7, VAR_8,
                                                      VAR_0);

            VAR_9 += VAR_6 + VAR_8 + (sizeof("=") - 1);
            VAR_12++;

            break;

        case 131:
            if (FUNC_9(VAR_2, -1)) {
                VAR_9 += VAR_6;
                VAR_12++;
            }

            break;

        case 128:

            VAR_13 = 0;
            FUNC_8(VAR_2);
            while (FUNC_6(VAR_2, -2) != 0) {
                if (FUNC_4(VAR_2, -1)) {
                    if (FUNC_9(VAR_2, -1)) {
                        VAR_9 += VAR_6;

                    } else {
                        FUNC_7(VAR_2, 1);
                        continue;
                    }

                } else {
                    VAR_7 = (u_char *) FUNC_10(VAR_2, -1, &VAR_8);

                    if (VAR_7 == ((void*)0)) {
                        FUNC_1(VAR_2, "attempt to use %s as query arg value",
                                   FUNC_2(VAR_2, -1));
                        return;
                    }

                    VAR_11 +=
                        2 * FUNC_13(((void*)0), VAR_7,
                                                    VAR_8,
                                                    VAR_0);

                    VAR_9 += VAR_6 + VAR_8 + (sizeof("=") - 1);
                }

                if (VAR_13++ > 0) {
                    VAR_11 += VAR_10;
                }

                VAR_12++;
                FUNC_7(VAR_2, 1);
            }

            break;

        default:
            FUNC_1(VAR_2, "attempt to use %s as query arg value",
                       FUNC_2(VAR_2, -1));
            return;
        }

        FUNC_7(VAR_2, 1);
    }

    VAR_9 += (size_t) VAR_11;

    if (VAR_12 > 1) {
        VAR_9 += (VAR_12 - 1) * (sizeof("&") - 1);
    }

    FUNC_0("len 1: %d", (int) VAR_9);

    if (VAR_1) {
        VAR_14 = FUNC_14(VAR_1->pool, VAR_9);
        if (VAR_14 == ((void*)0)) {
            FUNC_1(VAR_2, "no memory");
            return;
        }

    } else {
        VAR_14 = FUNC_5(VAR_2, VAR_9);
    }

    VAR_4->data = VAR_14;
    VAR_4->len = VAR_9;

    VAR_13 = 0;
    FUNC_8(VAR_2);
    while (FUNC_6(VAR_2, VAR_3) != 0) {
        VAR_5 = (u_char *) FUNC_10(VAR_2, -2, &VAR_6);

        switch (FUNC_11(VAR_2, -1)) {
        case 130:
        case 129:

            if (VAR_11) {
                VAR_14 = (u_char *) FUNC_13(VAR_14, VAR_5, VAR_6,
                                                       VAR_0
                                                       );

            } else {
                FUNC_0("shortcut: no escape required");

                VAR_14 = FUNC_12(VAR_14, VAR_5, VAR_6);
            }

            *VAR_14++ = '=';

            VAR_7 = (u_char *) FUNC_10(VAR_2, -1, &VAR_8);

            if (VAR_11) {
                VAR_14 = (u_char *) FUNC_13(VAR_14, VAR_7, VAR_8,
                                                       VAR_0
                                                       );

            } else {
                VAR_14 = FUNC_12(VAR_14, VAR_7, VAR_8);
            }

            if (VAR_13 != VAR_12 - 1) {

                *VAR_14++ = '&';
            }

            VAR_13++;

            break;

        case 131:
            if (FUNC_9(VAR_2, -1)) {
                if (VAR_11) {
                    VAR_14 = (u_char *) FUNC_13(VAR_14, VAR_5, VAR_6,
                                                VAR_0);

                } else {
                    FUNC_0("shortcut: no escape required");

                    VAR_14 = FUNC_12(VAR_14, VAR_5, VAR_6);
                }

                if (VAR_13 != VAR_12 - 1) {

                    *VAR_14++ = '&';
                }

                VAR_13++;
            }

            break;

        case 128:

            FUNC_8(VAR_2);
            while (FUNC_6(VAR_2, -2) != 0) {

                if (FUNC_4(VAR_2, -1)) {
                    if (FUNC_9(VAR_2, -1)) {
                        if (VAR_11) {
                            VAR_14 = (u_char *) FUNC_13(VAR_14, VAR_5,
    VAR_6,
    VAR_0);

                        } else {
                            FUNC_0("shortcut: no escape required");

                            VAR_14 = FUNC_12(VAR_14, VAR_5, VAR_6);
                        }

                    } else {
                        FUNC_7(VAR_2, 1);
                        continue;
                    }

                } else {

                    if (VAR_11) {
                        VAR_14 = (u_char *)
                                FUNC_13(VAR_14, VAR_5,
                                                        VAR_6,
                                                        VAR_0
                                                        );

                    } else {
                        FUNC_0("shortcut: no escape required");

                        VAR_14 = FUNC_12(VAR_14, VAR_5, VAR_6);
                    }

                    *VAR_14++ = '=';

                    VAR_7 = (u_char *) FUNC_10(VAR_2, -1, &VAR_8);

                    if (VAR_11) {
                        VAR_14 = (u_char *)
                                FUNC_13(VAR_14, VAR_7,
                                                        VAR_8,
                                                        VAR_0
                                                        );

                    } else {
                        VAR_14 = FUNC_12(VAR_14, VAR_7, VAR_8);
                    }
                }

                if (VAR_13 != VAR_12 - 1) {

                    *VAR_14++ = '&';
                }

                VAR_13++;
                FUNC_7(VAR_2, 1);
            }

            break;

        default:
            FUNC_1(VAR_2, "should not reach here");
            return;
        }

        FUNC_7(VAR_2, 1);
    }

    if (VAR_14 - VAR_4->data != (ssize_t) VAR_9) {
        FUNC_1(VAR_2, "buffer error: %d != %d",
                   (int) (VAR_14 - VAR_4->data), (int) VAR_9);
        return;
    }
}
