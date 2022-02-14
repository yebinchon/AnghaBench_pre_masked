
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; int ifname; int network; } ;
typedef TYPE_1__ Link ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,char*,char*) ;

__attribute__((used)) static int FUNC_3(Link *VAR_2) {
        int VAR_3;


        if (!FUNC_1())
                return 0;

        if (VAR_2->flags & VAR_1)
                return 0;

        if (!VAR_2->network)
                return 0;

        VAR_3 = FUNC_2(VAR_0, VAR_2->ifname, "accept_ra", "0");
        if (VAR_3 < 0)
                FUNC_0(VAR_2, VAR_3, "Cannot disable kernel IPv6 accept_ra for interface: %m");

        return 0;
}
