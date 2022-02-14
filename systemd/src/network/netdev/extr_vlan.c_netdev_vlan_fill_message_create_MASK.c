
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_1__ ;


struct ifla_vlan_flags {int flags; int mask; } ;
struct TYPE_14__ {int gvrp; int mvrp; int reorder_hdr; int loose_binding; int id; } ;
typedef TYPE_1__ sd_netlink_message ;
typedef TYPE_1__ VLan ;
typedef TYPE_1__ NetDev ;
typedef TYPE_1__ Link ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int,char*) ;
 int FUNC_4 (TYPE_1__*,int ,struct ifla_vlan_flags*,int) ;
 int FUNC_5 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static int FUNC_6(NetDev *VAR_6, Link *VAR_7, sd_netlink_message *VAR_8) {
        struct ifla_vlan_flags VAR_9 = {};
        VLan *VAR_10;
        int VAR_11;

        FUNC_2(VAR_6);
        FUNC_2(VAR_7);
        FUNC_2(VAR_8);

        VAR_10 = FUNC_1(VAR_6);

        FUNC_2(VAR_10);

        VAR_11 = FUNC_5(VAR_8, VAR_1, VAR_10->id);
        if (VAR_11 < 0)
                return FUNC_3(VAR_6, VAR_11, "Could not append IFLA_VLAN_ID attribute: %m");

        if (VAR_10->gvrp != -1) {
                VAR_9.mask |= VAR_2;
                FUNC_0(VAR_9.flags, VAR_2, VAR_10->gvrp);
        }

        if (VAR_10->mvrp != -1) {
                VAR_9.mask |= VAR_4;
                FUNC_0(VAR_9.flags, VAR_4, VAR_10->mvrp);
        }

        if (VAR_10->reorder_hdr != -1) {
                VAR_9.mask |= VAR_5;
                FUNC_0(VAR_9.flags, VAR_5, VAR_10->reorder_hdr);
        }

        if (VAR_10->loose_binding != -1) {
                VAR_9.mask |= VAR_3;
                FUNC_0(VAR_9.flags, VAR_3, VAR_10->loose_binding);
        }

        VAR_11 = FUNC_4(VAR_8, VAR_0, &VAR_9, sizeof(struct ifla_vlan_flags));
        if (VAR_11 < 0)
                return FUNC_3(VAR_6, VAR_11, "Could not append IFLA_VLAN_FLAGS attribute: %m");

        return 0;
}
