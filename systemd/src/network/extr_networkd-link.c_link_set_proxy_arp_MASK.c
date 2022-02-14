
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* network; int ifname; } ;
struct TYPE_6__ {scalar_t__ proxy_arp; } ;
typedef TYPE_2__ Link ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int,char*) ;
 int FUNC_2 (int ,int ,char*,int) ;

__attribute__((used)) static int FUNC_3(Link *VAR_1) {
        int VAR_2;

        if (!FUNC_0(VAR_1))
                return 0;

        VAR_2 = FUNC_2(VAR_0, VAR_1->ifname, "proxy_arp", VAR_1->network->proxy_arp > 0);
        if (VAR_2 < 0)
                FUNC_1(VAR_1, VAR_2, "Cannot configure proxy ARP for interface: %m");

        return 0;
}
