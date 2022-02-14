
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int flags; scalar_t__ iftype; TYPE_1__* network; int kind; } ;
struct TYPE_5__ {int link_local; scalar_t__ bond; } ;
typedef TYPE_2__ Link ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,char*,char*,char*,char*,char*,char*,char*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 () ;

__attribute__((used)) static bool FUNC_3(Link *VAR_3) {
        FUNC_1(VAR_3);

        if (!FUNC_2())
                return 0;

        if (VAR_3->flags & VAR_2)
                return 0;

        if (!VAR_3->network)
                return 0;

        if (VAR_3->iftype == VAR_1)
                return 0;

        if (FUNC_0(VAR_3->kind, "vrf", "wireguard", "ipip", "gre", "sit", "vti", "nlmon"))
                return 0;

        if (VAR_3->network->bond)
                return 0;

        return VAR_3->network->link_local & VAR_0;
}
