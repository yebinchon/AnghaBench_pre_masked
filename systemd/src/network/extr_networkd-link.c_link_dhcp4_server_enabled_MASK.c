
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int flags; scalar_t__ iftype; TYPE_1__* network; } ;
struct TYPE_5__ {int dhcp_server; scalar_t__ bond; } ;
typedef TYPE_2__ Link ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static bool FUNC_1(Link *VAR_2) {
        FUNC_0(VAR_2);

        if (VAR_2->flags & VAR_1)
                return 0;

        if (!VAR_2->network)
                return 0;

        if (VAR_2->network->bond)
                return 0;

        if (VAR_2->iftype == VAR_0)
                return 0;

        return VAR_2->network->dhcp_server;
}
