
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {int s_addr; } ;
typedef int sd_netlink_message ;
typedef int sd_netlink ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,char*,int*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (int *,int *,int,int ) ;
 scalar_t__ FUNC_7 (int *,int ,char*) ;
 scalar_t__ FUNC_8 (int *,int ,int) ;
 scalar_t__ FUNC_9 (int *,int ,int ) ;
 scalar_t__ FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *,int ) ;
 scalar_t__ FUNC_12 (int *,int ,char*) ;
 int * FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int *,int **,int ,int ) ;

__attribute__((used)) static int FUNC_15(sd_netlink *VAR_11) {
        int VAR_12;
        sd_netlink_message *VAR_13, *VAR_14;
        struct in_addr VAR_15, VAR_16;


        VAR_12 = FUNC_3("ipip");
        if (VAR_12 < 0)
                return FUNC_5(VAR_12, "failed to load module 'ipip'");

        VAR_12 = FUNC_3("sit");
        if (VAR_12 < 0)
                return FUNC_5(VAR_12, "failed to load module 'sit'");

        if (FUNC_1() != 0)
                return FUNC_4("not root");


        FUNC_0(FUNC_14(VAR_11, &VAR_13, VAR_10, 0) >= 0);
        FUNC_0(*VAR_13);

        FUNC_0(FUNC_7(VAR_13, VAR_2, "ipip-tunnel") >= 0);
        FUNC_0(FUNC_8(VAR_13, VAR_8, 1234)>= 0);

        FUNC_0(FUNC_11(VAR_13, VAR_7) >= 0);

        FUNC_0(FUNC_12(VAR_13, VAR_3, "ipip") >= 0);

        FUNC_2(VAR_0, "192.168.21.1", &VAR_15.s_addr);
        FUNC_0(FUNC_8(VAR_13, VAR_4, VAR_15.s_addr) >= 0);

        FUNC_2(VAR_0, "192.168.21.2", &VAR_16.s_addr);
        FUNC_0(FUNC_8(VAR_13, VAR_6, VAR_16.s_addr) >= 0);

        FUNC_0(FUNC_10(VAR_13) >= 0);
        FUNC_0(FUNC_10(VAR_13) >= 0);

        FUNC_0(FUNC_6(VAR_11, VAR_13, -1, 0) == 1);

        FUNC_0((VAR_13 = FUNC_13(VAR_13)) == ((void*)0));


        FUNC_0(FUNC_14(VAR_11, &VAR_14, VAR_10, 0) >= 0);
        FUNC_0(*VAR_14);

        FUNC_0(FUNC_7(VAR_14, VAR_2, "sit-tunnel") >= 0);
        FUNC_0(FUNC_8(VAR_14, VAR_8, 1234)>= 0);

        FUNC_0(FUNC_11(VAR_14, VAR_7) >= 0);

        FUNC_0(FUNC_12(VAR_14, VAR_3, "sit") >= 0);

        FUNC_0(FUNC_9(VAR_14, VAR_5, VAR_9) >= 0);

        FUNC_2(VAR_0, "192.168.21.3", &VAR_15.s_addr);
        FUNC_0(FUNC_8(VAR_14, VAR_4, VAR_15.s_addr) >= 0);

        FUNC_2(VAR_0, "192.168.21.4", &VAR_16.s_addr);
        FUNC_0(FUNC_8(VAR_14, VAR_6, VAR_16.s_addr) >= 0);

        FUNC_0(FUNC_10(VAR_14) >= 0);
        FUNC_0(FUNC_10(VAR_14) >= 0);

        FUNC_0(FUNC_6(VAR_11, VAR_14, -1, 0) == 1);

        FUNC_0((VAR_14 = FUNC_13(VAR_14)) == ((void*)0));

        return VAR_1;
}
