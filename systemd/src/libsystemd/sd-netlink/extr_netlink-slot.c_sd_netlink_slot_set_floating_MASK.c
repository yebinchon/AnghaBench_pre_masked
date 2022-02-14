
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int floating; int netlink; } ;
typedef TYPE_1__ sd_netlink_slot ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;

int FUNC_5(sd_netlink_slot *VAR_2, int VAR_3) {
        FUNC_0(VAR_2, -VAR_0);

        if (VAR_2->floating == !!VAR_3)
                return 0;

        if (!VAR_2->netlink)
                return -VAR_1;

        VAR_2->floating = VAR_3;

        if (VAR_3) {
                FUNC_2(VAR_2);
                FUNC_4(VAR_2->netlink);
        } else {
                FUNC_1(VAR_2->netlink);
                FUNC_3(VAR_2);
        }

        return 1;
}
