
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int flags; int ifname; } ;
typedef TYPE_1__ Link ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*,int,char*) ;
 int FUNC_3 (int ,int ,char*,int) ;

__attribute__((used)) static int FUNC_4(Link *VAR_2) {
        bool VAR_3;
        int VAR_4;

        if (VAR_2->flags & VAR_1)
                return 0;

        VAR_3 = FUNC_0(VAR_2);
        if (VAR_3) {
                VAR_4 = FUNC_3(VAR_0, VAR_2->ifname, "disable_ipv6", 0);
                if (VAR_4 < 0)
                        return FUNC_2(VAR_2, VAR_4, "Cannot enable IPv6: %m");

                FUNC_1(VAR_2, "IPv6 successfully enabled");
        }

        return 0;
}
