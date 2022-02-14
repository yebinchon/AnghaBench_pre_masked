
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int flags; TYPE_1__* network; int ifname; } ;
struct TYPE_5__ {scalar_t__ ipv6_dad_transmits; } ;
typedef TYPE_2__ Link ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(Link *VAR_2) {
        int VAR_3;


        if (!FUNC_1())
                return 0;

        if (VAR_2->flags & VAR_1)
                return 0;

        if (!VAR_2->network)
                return 0;

        if (VAR_2->network->ipv6_dad_transmits < 0)
                return 0;

        VAR_3 = FUNC_2(VAR_0, VAR_2->ifname, "dad_transmits", VAR_2->network->ipv6_dad_transmits);
        if (VAR_3 < 0)
                FUNC_0(VAR_2, VAR_3, "Cannot set IPv6 dad transmits for interface: %m");

        return 0;
}
