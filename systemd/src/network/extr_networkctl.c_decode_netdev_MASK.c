
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_18__ {int in6; int in; } ;
struct TYPE_17__ {int in6; int in; } ;
struct TYPE_19__ {int dest_port; int link; void* local_family; TYPE_2__ local; void* group_family; TYPE_1__ group; int vni; } ;
struct TYPE_20__ {int netdev_kind; TYPE_3__ vxlan_info; int mcast_igmp_version; int priority; int stp_state; int ageing_time; int max_age; int hello_time; int forward_delay; } ;
typedef TYPE_4__ sd_netlink_message ;
typedef TYPE_4__ LinkInfo ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,int ,int *) ;
 int FUNC_4 (TYPE_4__*,int ,int *) ;
 int FUNC_5 (TYPE_4__*,int ,char const**) ;
 int FUNC_6 (TYPE_4__*,int ,int *) ;
 int FUNC_7 (TYPE_4__*,int ,int *) ;
 int FUNC_8 (TYPE_4__*,int ,int *) ;
 scalar_t__ FUNC_9 (char const*,char*) ;
 int FUNC_10 (int ,char const*,int ) ;

__attribute__((used)) static int FUNC_11(sd_netlink_message *VAR_20, LinkInfo *VAR_21) {
        const char *VAR_22;
        int VAR_23;

        FUNC_0(VAR_20);
        FUNC_0(VAR_21);

        VAR_23 = FUNC_1(VAR_20, VAR_11);
        if (VAR_23 < 0)
                return VAR_23;

        VAR_23 = FUNC_5(VAR_20, VAR_10, &VAR_22);
        if (VAR_23 < 0)
                return VAR_23;

        VAR_23 = FUNC_1(VAR_20, VAR_9);
        if (VAR_23 < 0)
                return VAR_23;

        if (FUNC_9(VAR_22, "bridge")) {
                (void) FUNC_7(VAR_20, VAR_3, &VAR_21->forward_delay);
                (void) FUNC_7(VAR_20, VAR_4, &VAR_21->hello_time);
                (void) FUNC_7(VAR_20, VAR_5, &VAR_21->max_age);
                (void) FUNC_7(VAR_20, VAR_2, &VAR_21->ageing_time);
                (void) FUNC_7(VAR_20, VAR_8, &VAR_21->stp_state);
                (void) FUNC_6(VAR_20, VAR_7, &VAR_21->priority);
                (void) FUNC_8(VAR_20, VAR_6, &VAR_21->mcast_igmp_version);

        } else if (FUNC_9(VAR_22, "vxlan")) {
                (void) FUNC_7(VAR_20, VAR_14, &VAR_21->vxlan_info.vni);

                VAR_23 = FUNC_4(VAR_20, VAR_12, &VAR_21->vxlan_info.group.in);
                if (VAR_23 >= 0)
                        VAR_21->vxlan_info.group_family = VAR_0;
                else {
                        VAR_23 = FUNC_3(VAR_20, VAR_13, &VAR_21->vxlan_info.group.in6);
                        if (VAR_23 >= 0)
                                VAR_21->vxlan_info.group_family = VAR_1;
                }

                VAR_23 = FUNC_4(VAR_20, VAR_16, &VAR_21->vxlan_info.local.in);
                if (VAR_23 >= 0)
                        VAR_21->vxlan_info.local_family = VAR_0;
                else {
                        VAR_23 = FUNC_3(VAR_20, VAR_17, &VAR_21->vxlan_info.local.in6);
                        if (VAR_23 >= 0)
                                VAR_21->vxlan_info.local_family = VAR_1;
                }

                (void) FUNC_7(VAR_20, VAR_15, &VAR_21->vxlan_info.link);
                (void) FUNC_6(VAR_20, VAR_18, &VAR_21->vxlan_info.dest_port);
        }

        FUNC_10(VAR_21->netdev_kind, VAR_22, VAR_19);

        (void) FUNC_2(VAR_20);
        (void) FUNC_2(VAR_20);

        return 0;
}
