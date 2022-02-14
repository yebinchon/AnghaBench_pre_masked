
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct ether_addr {int dummy; } ;
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
 int FUNC_1 (int *,int *,int,int **) ;
 scalar_t__ FUNC_2 (int *,int ,int) ;
 scalar_t__ FUNC_3 (int *,int ,int ) ;
 scalar_t__ FUNC_4 (int *,int ,struct ether_addr*) ;
 scalar_t__ FUNC_5 (int *,int ,char const**) ;
 scalar_t__ FUNC_6 (int *,int ,int*) ;
 scalar_t__ FUNC_7 (int *,int ,int *) ;
 int * FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,int **,int ,int) ;

__attribute__((used)) static void FUNC_10(sd_netlink *VAR_11, int VAR_12) {
        sd_netlink_message *VAR_13;
        sd_netlink_message *VAR_14;
        uint32_t VAR_15 = 1500;
        const char *VAR_16;
        uint8_t VAR_17;
        uint32_t VAR_18;
        struct ether_addr VAR_19;

        FUNC_0(FUNC_9(VAR_11, &VAR_13, VAR_10, VAR_12) >= 0);
        FUNC_0(*VAR_13);


        FUNC_0(FUNC_3(VAR_13, VAR_1, 0) >= 0);
        FUNC_0(FUNC_3(VAR_13, VAR_8, 0) >= 0);
        FUNC_0(FUNC_3(VAR_13, VAR_4, 0) >= 0);


        FUNC_0(FUNC_2(VAR_13, VAR_5, VAR_15) >= 0);
        FUNC_0(FUNC_2(VAR_13, VAR_2, 0) >= 0);
        FUNC_0(FUNC_2(VAR_13, VAR_9, 0) >= 0);
        FUNC_0(FUNC_2(VAR_13, VAR_7, 0) >= 0);
        FUNC_0(FUNC_2(VAR_13, VAR_6, 0) >= 0);

        FUNC_0(FUNC_1(VAR_11, VAR_13, -1, &VAR_14) == 1);

        FUNC_0(FUNC_5(VAR_14, VAR_3, &VAR_16) == 0);

        FUNC_0(FUNC_7(VAR_14, VAR_1, &VAR_17) == 0);
        FUNC_0(FUNC_7(VAR_14, VAR_8, &VAR_17) == 0);
        FUNC_0(FUNC_7(VAR_14, VAR_4, &VAR_17) == 0);

        FUNC_0(FUNC_6(VAR_14, VAR_5, &VAR_18) == 0);
        FUNC_0(FUNC_6(VAR_14, VAR_2, &VAR_18) == 0);
        FUNC_0(FUNC_6(VAR_14, VAR_9, &VAR_18) == 0);
        FUNC_0(FUNC_6(VAR_14, VAR_7, &VAR_18) == 0);
        FUNC_0(FUNC_6(VAR_14, VAR_6, &VAR_18) == 0);

        FUNC_0(FUNC_4(VAR_14, VAR_0, &VAR_19) == 0);

        FUNC_0((VAR_13 = FUNC_8(VAR_13)) == ((void*)0));
        FUNC_0((VAR_14 = FUNC_8(VAR_14)) == ((void*)0));
}
