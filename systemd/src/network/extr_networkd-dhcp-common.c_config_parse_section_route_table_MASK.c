
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_2__ {int dhcp_route_table_set; int ipv6_accept_ra_route_table_set; void* ipv6_accept_ra_route_table; void* dhcp_route_table; } ;
typedef TYPE_1__ Network ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,char*,char*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (char const*,int ,char const*,unsigned int,int,char*,char const*) ;
 int FUNC_3 (char const*,void**) ;

int FUNC_4(
                const char *VAR_1,
                const char *VAR_2,
                unsigned VAR_3,
                const char *VAR_4,
                unsigned VAR_5,
                const char *VAR_6,
                int VAR_7,
                const char *VAR_8,
                void *VAR_9,
                void *VAR_10) {

        Network *VAR_11 = VAR_9;
        uint32_t VAR_12;
        int VAR_13;

        FUNC_1(VAR_2);
        FUNC_1(VAR_6);
        FUNC_1(VAR_8);
        FUNC_1(VAR_9);

        VAR_13 = FUNC_3(VAR_8, &VAR_12);
        if (VAR_13 < 0) {
                FUNC_2(VAR_1, VAR_0, VAR_2, VAR_3, VAR_13,
                           "Failed to parse RouteTable=%s, ignoring assignment: %m", VAR_8);
                return 0;
        }

        if (FUNC_0(VAR_4, "DHCP", "DHCPv4")) {
                VAR_11->dhcp_route_table = VAR_12;
                VAR_11->dhcp_route_table_set = 1;
        } else {
                VAR_11->ipv6_accept_ra_route_table = VAR_12;
                VAR_11->ipv6_accept_ra_route_table_set = 1;
        }

        return 0;
}
