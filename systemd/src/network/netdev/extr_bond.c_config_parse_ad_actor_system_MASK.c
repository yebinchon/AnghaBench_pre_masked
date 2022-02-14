
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ether_addr {int* ether_addr_octet; } ;
struct TYPE_2__ {struct ether_addr ad_actor_system; } ;
typedef TYPE_1__ Bond ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (char const*,struct ether_addr*) ;
 scalar_t__ FUNC_2 (struct ether_addr*) ;
 int FUNC_3 (char const*,int ,char const*,unsigned int,int,char*,char const*) ;

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
        Bond *VAR_11 = VAR_10;
        struct ether_addr VAR_12;
        int VAR_13;

        FUNC_0(VAR_2);
        FUNC_0(VAR_6);
        FUNC_0(VAR_8);
        FUNC_0(VAR_9);

        VAR_13 = FUNC_1(VAR_8, &VAR_12);
        if (VAR_13 < 0) {
                FUNC_3(VAR_1, VAR_0, VAR_2, VAR_3, VAR_13,
                           "Not a valid MAC address %s. Ignoring assignment: %m",
                           VAR_8);
                return 0;
        }
        if (FUNC_2(&VAR_12) || (VAR_12.ether_addr_octet[0] & 0x01)) {
                FUNC_3(VAR_1, VAR_0, VAR_2, VAR_3, 0,
                           "Not a valid MAC address %s, can not be null or multicast. Ignoring assignment.",
                           VAR_8);
                return 0;
        }

        VAR_11->ad_actor_system = VAR_12;

        return 0;
}
