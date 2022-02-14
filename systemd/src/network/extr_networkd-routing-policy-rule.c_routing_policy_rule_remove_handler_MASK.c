
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int state; int routing_policy_rule_remove_messages; struct TYPE_8__* ifname; } ;
typedef TYPE_1__ sd_netlink_message ;
typedef int sd_netlink ;
typedef TYPE_1__ Link ;


 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int,char*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(sd_netlink *VAR_2, sd_netlink_message *VAR_3, Link *VAR_4) {
        int VAR_5;

        FUNC_1(VAR_3);
        FUNC_1(VAR_4);
        FUNC_1(VAR_4->ifname);

        VAR_4->routing_policy_rule_remove_messages--;

        if (FUNC_0(VAR_4->state, VAR_0, VAR_1))
                return 1;

        VAR_5 = FUNC_3(VAR_3);
        if (VAR_5 < 0)
                FUNC_2(VAR_4, VAR_5, "Could not drop routing policy rule: %m");

        return 1;
}
