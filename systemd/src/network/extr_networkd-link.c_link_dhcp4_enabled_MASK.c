
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int flags; scalar_t__ iftype; TYPE_1__* network; } ;
struct TYPE_5__ {int dhcp; scalar_t__ bond; } ;
typedef TYPE_2__ Link ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static bool FUNC_1(Link *VAR_3) {
        FUNC_0(VAR_3);

        if (VAR_3->flags & VAR_2)
                return 0;

        if (!VAR_3->network)
                return 0;

        if (VAR_3->network->bond)
                return 0;

        if (VAR_3->iftype == VAR_1)
                return 0;

        return VAR_3->network->dhcp & VAR_0;
}
