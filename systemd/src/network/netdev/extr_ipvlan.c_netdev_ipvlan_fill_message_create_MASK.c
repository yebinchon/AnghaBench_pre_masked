
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


typedef int sd_netlink_message ;
struct TYPE_12__ {scalar_t__ kind; scalar_t__ mode; scalar_t__ flags; struct TYPE_12__* ifname; } ;
typedef TYPE_1__ NetDev ;
typedef TYPE_1__ Link ;
typedef TYPE_1__ IPVlan ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int,char*) ;
 int FUNC_4 (int *,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(NetDev *VAR_5, Link *VAR_6, sd_netlink_message *VAR_7) {
        IPVlan *VAR_8;
        int VAR_9;

        FUNC_2(VAR_5);
        FUNC_2(VAR_6);
        FUNC_2(VAR_5->ifname);

        if (VAR_5->kind == VAR_2)
                VAR_8 = FUNC_0(VAR_5);
        else
                VAR_8 = FUNC_1(VAR_5);

        FUNC_2(VAR_8);

        if (VAR_8->mode != VAR_4) {
                VAR_9 = FUNC_4(VAR_7, VAR_1, VAR_8->mode);
                if (VAR_9 < 0)
                        return FUNC_3(VAR_5, VAR_9, "Could not append IFLA_IPVLAN_MODE attribute: %m");
        }

        if (VAR_8->flags != VAR_3) {
                VAR_9 = FUNC_4(VAR_7, VAR_0, VAR_8->flags);
                if (VAR_9 < 0)
                        return FUNC_3(VAR_5, VAR_9, "Could not append IFLA_IPVLAN_FLAGS attribute: %m");
        }

        return 0;
}
