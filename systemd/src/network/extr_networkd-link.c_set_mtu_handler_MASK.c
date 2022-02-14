
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int setting_mtu; scalar_t__ state; struct TYPE_11__* ifname; } ;
typedef TYPE_1__ sd_netlink_message ;
typedef int sd_netlink ;
typedef TYPE_1__ Link ;


 scalar_t__ FUNC_0 (scalar_t__,int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (TYPE_1__*,int,char*) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_7(sd_netlink *VAR_3, sd_netlink_message *VAR_4, Link *VAR_5) {
        int VAR_6;

        FUNC_1(VAR_4);
        FUNC_1(VAR_5);
        FUNC_1(VAR_5->ifname);

        VAR_5->setting_mtu = 0;

        if (FUNC_0(VAR_5->state, VAR_0, VAR_2))
                return 1;

        VAR_6 = FUNC_6(VAR_4);
        if (VAR_6 < 0)
                FUNC_5(VAR_5, VAR_6, "Could not set MTU, ignoring: %m");
        else
                FUNC_4(VAR_5, "Setting MTU done.");

        if (VAR_5->state == VAR_1) {
                VAR_6 = FUNC_2(VAR_5);
                if (VAR_6 < 0)
                        FUNC_3(VAR_5);
        }

        return 1;
}
