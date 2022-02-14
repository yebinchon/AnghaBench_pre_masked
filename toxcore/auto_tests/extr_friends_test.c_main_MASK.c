
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {int dht; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_13 ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (char*,int ) ;
 TYPE_1__* FUNC_7 () ;
 int FUNC_8 (int ,int ) ;
 TYPE_1__* VAR_14 ;
 int FUNC_9 (TYPE_1__*,int ,int *) ;
 int FUNC_10 (TYPE_1__*,int ,int *) ;
 int FUNC_11 (TYPE_1__*,int ,int *) ;
 int FUNC_12 (TYPE_1__*,int ,int *,int ) ;
 int FUNC_13 (int *,int ,int,int,int,int ) ;
 int FUNC_14 (int ,int ,int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_15 (int ) ;
 int VAR_17 ;
 int FUNC_16 (int ) ;
 int FUNC_17 (char*) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_18 (char*) ;
 int FUNC_19 (int *) ;

int FUNC_20(int VAR_21, char *VAR_22[])
{
    FUNC_17("=========== FRIENDS_TEST ===========");


    VAR_17 = FUNC_13(((void*)0), VAR_13, VAR_4 | VAR_5,
                     VAR_2 | VAR_1, -1, 0);
    VAR_10 = FUNC_13(((void*)0), VAR_13, VAR_4 | VAR_5,
                    VAR_2 | VAR_1, -1, 0);

    FUNC_6("friends_test: Starting test...\n", VAR_20);

    if ((VAR_11 = FUNC_5()) == 0) {

        int VAR_23 = 0;
        char *VAR_24 = "Y-yes Mr. Watson?";

        VAR_14 = FUNC_7();

        FUNC_0(VAR_14, VAR_10);
        FUNC_14(VAR_10, VAR_13, VAR_3);

        FUNC_10(VAR_14, VAR_8, ((void*)0));
        FUNC_11(VAR_14, VAR_9, ((void*)0));


        while (!(VAR_18 & VAR_0))
            FUNC_4(VAR_14->dht);


        while (!(VAR_18 & VAR_6))
            FUNC_4(VAR_14->dht);

        for (VAR_23 = 0; VAR_23 < 6; VAR_23++) {

            FUNC_12(VAR_14, 0, (uint8_t *)VAR_24, FUNC_18(VAR_24));
            FUNC_4(VAR_14->dht);
        }

        FUNC_3(VAR_14);

        return 0;
    }


    if (FUNC_1(VAR_12) != 0) {
        FUNC_6("friends_test: atexit() failed!\nFailing build...\n", VAR_19);
        FUNC_8(VAR_11, VAR_7);
        return -1;
    }

    VAR_14 = FUNC_7();

    FUNC_14(VAR_17, VAR_13, VAR_3);
    FUNC_11(VAR_14, VAR_16, ((void*)0));
    FUNC_9(VAR_14, VAR_15, ((void*)0));


    FUNC_2(50);

    FUNC_0(VAR_14, VAR_17);

    if (FUNC_15(VAR_14->dht) == -1)
        return -1;

    if (FUNC_16(VAR_14->dht) == -1)
        return -1;

    FUNC_19(((void*)0));
    FUNC_6("friends_test: Build passed!\n", VAR_20);
    return 0;
}
