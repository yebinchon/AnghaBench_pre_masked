
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int flags; TYPE_1__* network; } ;
struct TYPE_5__ {scalar_t__ proxy_arp; } ;
typedef TYPE_2__ Link ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static bool FUNC_1(Link *VAR_1) {
        FUNC_0(VAR_1);

        if (VAR_1->flags & VAR_0)
                return 0;

        if (!VAR_1->network)
                return 0;

        if (VAR_1->network->proxy_arp < 0)
                return 0;

        return 1;
}
