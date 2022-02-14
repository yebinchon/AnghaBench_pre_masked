
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
struct in_addr {int dummy; } ;
typedef int sd_dhcp_lease ;
struct TYPE_10__ {int dhcp4_configured; int dhcp_lease; int keep_configuration; struct TYPE_10__* network; } ;
typedef TYPE_1__ sd_dhcp_client ;
typedef TYPE_1__ Link ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,struct in_addr*,struct in_addr*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int,char*) ;
 int FUNC_5 (TYPE_1__*,int **) ;
 int FUNC_6 (int *,struct in_addr*) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int *,struct in_addr*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(sd_dhcp_client *VAR_2, Link *VAR_3) {
        sd_dhcp_lease *VAR_4;
        struct in_addr VAR_5;
        struct in_addr VAR_6;
        uint32_t VAR_7 = VAR_0;
        int VAR_8;

        FUNC_1(VAR_3);
        FUNC_1(VAR_2);
        FUNC_1(VAR_3->network);

        VAR_8 = FUNC_5(VAR_2, &VAR_4);
        if (VAR_8 < 0)
                return FUNC_4(VAR_3, VAR_8, "DHCP error: no lease: %m");

        FUNC_10(VAR_3->dhcp_lease);
        VAR_3->dhcp4_configured = 0;
        VAR_3->dhcp_lease = FUNC_9(VAR_4);
        FUNC_3(VAR_3);

        VAR_8 = FUNC_6(VAR_4, &VAR_5);
        if (VAR_8 < 0)
                return FUNC_4(VAR_3, VAR_8, "DHCP error: no address: %m");

        VAR_8 = FUNC_8(VAR_4, &VAR_6);
        if (VAR_8 < 0)
                return FUNC_4(VAR_3, VAR_8, "DHCP error: no netmask: %m");

        if (!FUNC_0(VAR_3->network->keep_configuration, VAR_1)) {
                VAR_8 = FUNC_7(VAR_3->dhcp_lease, &VAR_7);
                if (VAR_8 < 0)
                        return FUNC_4(VAR_3, VAR_8, "DHCP error: no lifetime: %m");
        }

        VAR_8 = FUNC_2(VAR_3, &VAR_5, &VAR_6, VAR_7);
        if (VAR_8 < 0)
                return FUNC_4(VAR_3, VAR_8, "Could not update IP address: %m");

        return 0;
}
