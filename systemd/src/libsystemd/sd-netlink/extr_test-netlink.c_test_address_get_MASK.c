
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {int dummy; } ;
struct ifa_cacheinfo {int dummy; } ;
typedef int sd_netlink_message ;
typedef int sd_netlink ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int,int **) ;
 scalar_t__ FUNC_2 (int *,int ,struct ifa_cacheinfo*) ;
 scalar_t__ FUNC_3 (int *,int ,struct in_addr*) ;
 scalar_t__ FUNC_4 (int *,int ,char const**) ;
 int * FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int **,int ,int,int ) ;

__attribute__((used)) static void FUNC_7(sd_netlink *VAR_6, int VAR_7) {
        sd_netlink_message *VAR_8;
        sd_netlink_message *VAR_9;
        struct in_addr VAR_10;
        struct ifa_cacheinfo VAR_11;
        const char *VAR_12;

        FUNC_0(FUNC_6(VAR_6, &VAR_8, VAR_5, VAR_7, VAR_0) >= 0);
        FUNC_0(*VAR_8);

        FUNC_0(FUNC_1(VAR_6, VAR_8, -1, &VAR_9) == 1);

        FUNC_0(FUNC_3(VAR_9, VAR_4, &VAR_10) == 0);
        FUNC_0(FUNC_3(VAR_9, VAR_1, &VAR_10) == 0);
        FUNC_0(FUNC_4(VAR_9, VAR_3, &VAR_12) == 0);
        FUNC_0(FUNC_2(VAR_9, VAR_2, &VAR_11) == 0);

        FUNC_0((VAR_8 = FUNC_5(VAR_8)) == ((void*)0));
        FUNC_0((VAR_9 = FUNC_5(VAR_9)) == ((void*)0));

}
