
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ ifname; TYPE_1__* manager; } ;
struct TYPE_4__ {int netdevs; } ;
typedef TYPE_2__ NetDev ;


 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(NetDev *VAR_0) {
        if (VAR_0->ifname && VAR_0->manager)
                FUNC_0(VAR_0->manager->netdevs, VAR_0->ifname);
}
