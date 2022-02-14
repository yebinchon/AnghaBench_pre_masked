
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


typedef int sd_netlink_message ;
struct TYPE_12__ {scalar_t__ kind; scalar_t__ mode; struct TYPE_12__* ifname; } ;
typedef TYPE_1__ NetDev ;
typedef TYPE_1__ MacVlan ;
typedef TYPE_1__ Link ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int,char*) ;
 int FUNC_4 (int *,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(NetDev *VAR_3, Link *VAR_4, sd_netlink_message *VAR_5) {
        MacVlan *VAR_6;
        int VAR_7;

        FUNC_2(VAR_3);
        FUNC_2(VAR_4);
        FUNC_2(VAR_3->ifname);

        if (VAR_3->kind == VAR_1)
                VAR_6 = FUNC_0(VAR_3);
        else
                VAR_6 = FUNC_1(VAR_3);

        FUNC_2(VAR_6);

        if (VAR_6->mode != VAR_2) {
                VAR_7 = FUNC_4(VAR_5, VAR_0, VAR_6->mode);
                if (VAR_7 < 0)
                        return FUNC_3(VAR_3, VAR_7, "Could not append IFLA_MACVLAN_MODE attribute: %m");
        }

        return 0;
}
