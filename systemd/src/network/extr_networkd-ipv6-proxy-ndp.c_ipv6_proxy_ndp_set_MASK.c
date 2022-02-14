
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int ifname; } ;
typedef TYPE_1__ Link ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int,char*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ,char*,int) ;

__attribute__((used)) static int FUNC_5(Link *VAR_1) {
        bool VAR_2;
        int VAR_3;

        FUNC_0(VAR_1);

        if (!FUNC_3())
                return 0;

        VAR_2 = FUNC_1(VAR_1);

        VAR_3 = FUNC_4(VAR_0, VAR_1->ifname, "proxy_ndp", VAR_2);
        if (VAR_3 < 0)
                FUNC_2(VAR_1, VAR_3, "Cannot configure proxy NDP for interface: %m");

        return 0;
}
