
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int flags; scalar_t__ master_ifindex; TYPE_1__* network; } ;
struct TYPE_4__ {scalar_t__ bridge; } ;
typedef TYPE_2__ Link ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(Link *VAR_1) {
        if (VAR_1->flags & VAR_0)

                return 1;

        if (!VAR_1->network)
                return 0;

        if (VAR_1->master_ifindex > 0 && VAR_1->network->bridge)
                return 1;



        return 0;
}
