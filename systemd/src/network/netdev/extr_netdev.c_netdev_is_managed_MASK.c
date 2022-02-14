
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int ifname; TYPE_1__* manager; } ;
struct TYPE_5__ {int netdevs; } ;
typedef TYPE_2__ NetDev ;


 TYPE_2__* FUNC_0 (int ,int ) ;

bool FUNC_1(NetDev *VAR_0) {
        if (!VAR_0 || !VAR_0->manager || !VAR_0->ifname)
                return 0;

        return FUNC_0(VAR_0->manager->netdevs, VAR_0->ifname) == VAR_0;
}
