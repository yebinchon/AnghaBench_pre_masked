
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct in_addr {int s_addr; } ;
typedef int sd_dhcp_lease ;
struct TYPE_11__ {int dhcp_black_listed_ip; struct TYPE_11__* network; } ;
typedef TYPE_1__ sd_dhcp_client ;
typedef TYPE_1__ Link ;


 int FUNC_0 (struct in_addr) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int,char*) ;
 int FUNC_6 (TYPE_1__*,int,char*) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (TYPE_1__*,int **) ;
 int FUNC_9 (int *,struct in_addr*) ;
 scalar_t__ FUNC_10 (int ,int ) ;

__attribute__((used)) static int FUNC_11(Link *VAR_1, sd_dhcp_client *VAR_2) {
        sd_dhcp_lease *VAR_3;
        struct in_addr VAR_4;
        int VAR_5;

        FUNC_4(VAR_1);
        FUNC_4(VAR_1->network);
        FUNC_4(VAR_2);

        VAR_5 = FUNC_8(VAR_2, &VAR_3);
        if (VAR_5 < 0)
                return FUNC_6(VAR_1, VAR_5, "Failed to get DHCP lease: %m");

        VAR_5 = FUNC_9(VAR_3, &VAR_4);
        if (VAR_5 < 0)
                return FUNC_5(VAR_1, VAR_5, "Failed to get DHCP server ip address: %m");

        if (FUNC_10(VAR_1->network->dhcp_black_listed_ip, FUNC_3(VAR_4.s_addr))) {
                FUNC_7(VAR_0,
                           FUNC_1(VAR_1),
                           FUNC_2(VAR_1, "DHCPv4 ip '%u.%u.%u.%u' found in black listed ip addresses, ignoring offer",
                                            FUNC_0(VAR_4)));
                return 1;
        }

        return 0;
}
