
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int ifname; int operstate; int mtu; int flags; } ;
typedef TYPE_1__ sd_netlink_message ;
typedef TYPE_1__ Link ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,char const*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int ,char const**) ;
 int FUNC_5 (TYPE_1__*,int ,int *) ;
 int FUNC_6 (TYPE_1__*,int ,int *) ;
 int FUNC_7 (TYPE_1__*,int *) ;

int FUNC_8(Link *VAR_3, sd_netlink_message *VAR_4) {
        const char *VAR_5 = ((void*)0);
        int VAR_6;

        FUNC_0(VAR_3);
        FUNC_0(VAR_4);

        VAR_6 = FUNC_7(VAR_4, &VAR_3->flags);
        if (VAR_6 < 0)
                return VAR_6;

        (void) FUNC_5(VAR_4, VAR_1, &VAR_3->mtu);
        (void) FUNC_6(VAR_4, VAR_2, &VAR_3->operstate);

        if (FUNC_4(VAR_4, VAR_0, &VAR_5) >= 0) {
                VAR_6 = FUNC_1(&VAR_3->ifname, VAR_5);
                if (VAR_6 < 0)
                        return VAR_6;
        }

        FUNC_3(VAR_3);
        FUNC_2(VAR_3, 0);

        return 0;
}
