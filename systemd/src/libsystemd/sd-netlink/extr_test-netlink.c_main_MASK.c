
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
typedef int sd_netlink_message ;
typedef int sd_netlink ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (int *,int *,int,int **) ;
 scalar_t__ FUNC_3 (int *,scalar_t__*) ;
 int FUNC_4 (int *,int ,char const**) ;
 int * FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int **) ;
 int * FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int **,scalar_t__,int) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 () ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int) ;
 int FUNC_17 (int *,int) ;
 int FUNC_18 () ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 () ;
 int FUNC_22 (int) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int) ;

int FUNC_25(void) {
        sd_netlink *VAR_5;
        sd_netlink_message *VAR_6;
        sd_netlink_message *VAR_7;
        const char *VAR_8;
        int VAR_9;
        uint16_t VAR_10;

        FUNC_18();
        FUNC_21();

        FUNC_0(FUNC_6(&VAR_5) >= 0);
        FUNC_0(*VAR_5);

        FUNC_23(VAR_5);
        FUNC_19(VAR_5);
        FUNC_13(VAR_5);
        FUNC_10();

        VAR_9 = (int) FUNC_1("lo");
        FUNC_0(VAR_9 > 0);

        FUNC_11(VAR_9);
        FUNC_24(VAR_9);
        FUNC_12(VAR_9);
        FUNC_22(VAR_9);
        FUNC_14(VAR_9);
        FUNC_16(VAR_5, VAR_9);

        FUNC_15(VAR_5);
        FUNC_20(VAR_5);

        FUNC_0(FUNC_8(VAR_5, &VAR_6, VAR_3, VAR_9) >= 0);
        FUNC_0(*VAR_6);

        FUNC_0(FUNC_3(VAR_6, &VAR_10) >= 0);
        FUNC_0(VAR_10 == VAR_3);

        FUNC_0(FUNC_4(VAR_6, VAR_2, &VAR_8) == -VAR_0);

        FUNC_0(FUNC_2(VAR_5, VAR_6, 0, &VAR_7) == 1);
        FUNC_0(FUNC_3(VAR_7, &VAR_10) >= 0);
        FUNC_0(VAR_10 == VAR_4);

        FUNC_0((VAR_7 = FUNC_5(VAR_7)) == ((void*)0));

        FUNC_0(FUNC_2(VAR_5, VAR_6, -1, &VAR_7) == -VAR_0);
        FUNC_0((VAR_6 = FUNC_5(VAR_6)) == ((void*)0));
        FUNC_0((VAR_7 = FUNC_5(VAR_7)) == ((void*)0));

        FUNC_17(VAR_5, VAR_9);
        FUNC_9(VAR_5, VAR_9);

        FUNC_0((VAR_6 = FUNC_5(VAR_6)) == ((void*)0));
        FUNC_0((VAR_7 = FUNC_5(VAR_7)) == ((void*)0));
        FUNC_0((VAR_5 = FUNC_7(VAR_5)) == ((void*)0));

        return VAR_1;
}
