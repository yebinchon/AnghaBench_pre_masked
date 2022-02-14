
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int sd_netlink_message ;
typedef int sd_netlink ;
struct TYPE_6__ {int state; } ;
typedef TYPE_1__ Link ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int,char*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(sd_netlink *VAR_3, sd_netlink_message *VAR_4, Link *VAR_5) {
        int VAR_6;

        FUNC_1(VAR_5);

        if (FUNC_0(VAR_5->state, VAR_1, VAR_2))
                return 1;

        VAR_6 = FUNC_4(VAR_4);
        if (VAR_6 < 0 && VAR_6 != -VAR_0) {
                FUNC_3(VAR_5, VAR_6, "Received error adding DHCPv6 Prefix Delegation route: %m");
                FUNC_2(VAR_5);
                return 1;
        }

        return 1;
}
