
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_17__ ;


struct ifla_vxlan_port_range {void* high; void* low; } ;
struct TYPE_22__ {scalar_t__ low; scalar_t__ high; } ;
struct TYPE_21__ {int in6; int in; } ;
struct TYPE_23__ {scalar_t__ vni; scalar_t__ remote_family; scalar_t__ local_family; int ifindex; scalar_t__ ttl; scalar_t__ tos; scalar_t__ learning; scalar_t__ route_short_circuit; scalar_t__ arp_proxy; scalar_t__ l2miss; scalar_t__ l3miss; int fdb_ageing; int max_fdb; scalar_t__ udpcsum; scalar_t__ udp6zerocsumtx; scalar_t__ udp6zerocsumrx; scalar_t__ remote_csum_tx; scalar_t__ remote_csum_rx; scalar_t__ dest_port; scalar_t__ df; scalar_t__ generic_protocol_extension; scalar_t__ group_policy; int flow_label; TYPE_1__ port_range; scalar_t__ inherit; TYPE_17__ local; TYPE_17__ remote; } ;
typedef TYPE_2__ sd_netlink_message ;
typedef int port_range ;
typedef TYPE_2__ VxLan ;
typedef TYPE_2__ NetDev ;
typedef TYPE_2__ Link ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
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
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 TYPE_2__* FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 int FUNC_1 (TYPE_2__*) ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (scalar_t__,TYPE_17__*) ;
 int FUNC_5 (TYPE_2__*,int,char*) ;
 int FUNC_6 (TYPE_2__*,int ,struct ifla_vxlan_port_range*,int) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (TYPE_2__*,int ,int *) ;
 int FUNC_9 (TYPE_2__*,int ,int *) ;
 int FUNC_10 (TYPE_2__*,int ,void*) ;
 int FUNC_11 (TYPE_2__*,int ,int) ;
 int FUNC_12 (TYPE_2__*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_13(NetDev *VAR_31, Link *VAR_32, sd_netlink_message *VAR_33) {
        VxLan *VAR_34;
        int VAR_35;

        FUNC_1(VAR_31);
        FUNC_1(VAR_32);
        FUNC_1(VAR_33);

        VAR_34 = FUNC_0(VAR_31);

        FUNC_1(VAR_34);

        if (VAR_34->vni <= VAR_29) {
                VAR_35 = FUNC_11(VAR_33, VAR_7, VAR_34->vni);
                if (VAR_35 < 0)
                        return FUNC_5(VAR_31, VAR_35, "Could not append IFLA_VXLAN_ID attribute: %m");
        }

        if (FUNC_4(VAR_34->remote_family, &VAR_34->remote) == 0) {
                if (VAR_34->remote_family == VAR_0)
                        VAR_35 = FUNC_9(VAR_33, VAR_5, &VAR_34->remote.in);
                else
                        VAR_35 = FUNC_8(VAR_33, VAR_6, &VAR_34->remote.in6);
                if (VAR_35 < 0)
                        return FUNC_5(VAR_31, VAR_35, "Could not append IFLA_VXLAN_GROUP attribute: %m");
        }

        if (FUNC_4(VAR_34->local_family, &VAR_34->local) == 0) {
                if (VAR_34->local_family == VAR_0)
                        VAR_35 = FUNC_9(VAR_33, VAR_14, &VAR_34->local.in);
                else
                        VAR_35 = FUNC_8(VAR_33, VAR_15, &VAR_34->local.in6);
                if (VAR_35 < 0)
                        return FUNC_5(VAR_31, VAR_35, "Could not append IFLA_VXLAN_LOCAL attribute: %m");
        }

        VAR_35 = FUNC_11(VAR_33, VAR_13, VAR_32->ifindex);
        if (VAR_35 < 0)
                return FUNC_5(VAR_31, VAR_35, "Could not append IFLA_VXLAN_LINK attribute: %m");

        if (VAR_34->inherit) {
                VAR_35 = FUNC_7(VAR_33, VAR_24);
                if (VAR_35 < 0)
                        return FUNC_5(VAR_31, VAR_35, "Could not append IFLA_VXLAN_TTL_INHERIT attribute: %m");
        } else {
                VAR_35 = FUNC_12(VAR_33, VAR_23, VAR_34->ttl);
                if (VAR_35 < 0)
                        return FUNC_5(VAR_31, VAR_35, "Could not append IFLA_VXLAN_TTL attribute: %m");
        }

        if (VAR_34->tos != 0) {
                VAR_35 = FUNC_12(VAR_33, VAR_22, VAR_34->tos);
                if (VAR_35 < 0)
                        return FUNC_5(VAR_31, VAR_35, "Could not append IFLA_VXLAN_TOS attribute: %m");
        }

        VAR_35 = FUNC_12(VAR_33, VAR_11, VAR_34->learning);
        if (VAR_35 < 0)
                return FUNC_5(VAR_31, VAR_35, "Could not append IFLA_VXLAN_LEARNING attribute: %m");

        VAR_35 = FUNC_12(VAR_33, VAR_21, VAR_34->route_short_circuit);
        if (VAR_35 < 0)
                return FUNC_5(VAR_31, VAR_35, "Could not append IFLA_VXLAN_RSC attribute: %m");

        VAR_35 = FUNC_12(VAR_33, VAR_18, VAR_34->arp_proxy);
        if (VAR_35 < 0)
                return FUNC_5(VAR_31, VAR_35, "Could not append IFLA_VXLAN_PROXY attribute: %m");

        VAR_35 = FUNC_12(VAR_33, VAR_8, VAR_34->l2miss);
        if (VAR_35 < 0)
                return FUNC_5(VAR_31, VAR_35, "Could not append IFLA_VXLAN_L2MISS attribute: %m");

        VAR_35 = FUNC_12(VAR_33, VAR_9, VAR_34->l3miss);
        if (VAR_35 < 0)
                return FUNC_5(VAR_31, VAR_35, "Could not append IFLA_VXLAN_L3MISS attribute: %m");

        if (VAR_34->fdb_ageing != 0) {
                VAR_35 = FUNC_11(VAR_33, VAR_1, VAR_34->fdb_ageing / VAR_28);
                if (VAR_35 < 0)
                        return FUNC_5(VAR_31, VAR_35, "Could not append IFLA_VXLAN_AGEING attribute: %m");
        }

        if (VAR_34->max_fdb != 0) {
                VAR_35 = FUNC_11(VAR_33, VAR_12, VAR_34->max_fdb);
                if (VAR_35 < 0)
                        return FUNC_5(VAR_31, VAR_35, "Could not append IFLA_VXLAN_LIMIT attribute: %m");
        }

        VAR_35 = FUNC_12(VAR_33, VAR_25, VAR_34->udpcsum);
        if (VAR_35 < 0)
                return FUNC_5(VAR_31, VAR_35, "Could not append IFLA_VXLAN_UDP_CSUM attribute: %m");

        VAR_35 = FUNC_12(VAR_33, VAR_27, VAR_34->udp6zerocsumtx);
        if (VAR_35 < 0)
                return FUNC_5(VAR_31, VAR_35, "Could not append IFLA_VXLAN_UDP_ZERO_CSUM6_TX attribute: %m");

        VAR_35 = FUNC_12(VAR_33, VAR_26, VAR_34->udp6zerocsumrx);
        if (VAR_35 < 0)
                return FUNC_5(VAR_31, VAR_35, "Could not append IFLA_VXLAN_UDP_ZERO_CSUM6_RX attribute: %m");

        VAR_35 = FUNC_12(VAR_33, VAR_20, VAR_34->remote_csum_tx);
        if (VAR_35 < 0)
                return FUNC_5(VAR_31, VAR_35, "Could not append IFLA_VXLAN_REMCSUM_TX attribute: %m");

        VAR_35 = FUNC_12(VAR_33, VAR_19, VAR_34->remote_csum_rx);
        if (VAR_35 < 0)
                return FUNC_5(VAR_31, VAR_35, "Could not append IFLA_VXLAN_REMCSUM_RX attribute: %m");

        VAR_35 = FUNC_10(VAR_33, VAR_16, FUNC_2(VAR_34->dest_port));
        if (VAR_35 < 0)
                return FUNC_5(VAR_31, VAR_35, "Could not append IFLA_VXLAN_PORT attribute: %m");

        if (VAR_34->port_range.low != 0 || VAR_34->port_range.high != 0) {
                struct ifla_vxlan_port_range VAR_36;

                VAR_36.low = FUNC_2(VAR_34->port_range.low);
                VAR_36.high = FUNC_2(VAR_34->port_range.high);

                VAR_35 = FUNC_6(VAR_33, VAR_17, &VAR_36, sizeof(VAR_36));
                if (VAR_35 < 0)
                        return FUNC_5(VAR_31, VAR_35, "Could not append IFLA_VXLAN_PORT_RANGE attribute: %m");
        }

        VAR_35 = FUNC_11(VAR_33, VAR_10, FUNC_3(VAR_34->flow_label));
        if (VAR_35 < 0)
                return FUNC_5(VAR_31, VAR_35, "Could not append IFLA_VXLAN_LABEL attribute: %m");

        if (VAR_34->group_policy) {
                VAR_35 = FUNC_7(VAR_33, VAR_3);
                if (VAR_35 < 0)
                        return FUNC_5(VAR_31, VAR_35, "Could not append IFLA_VXLAN_GBP attribute: %m");
        }

        if (VAR_34->generic_protocol_extension) {
                VAR_35 = FUNC_7(VAR_33, VAR_4);
                if (VAR_35 < 0)
                        return FUNC_5(VAR_31, VAR_35, "Could not append IFLA_VXLAN_GPE attribute: %m");
        }

        if (VAR_34->df != VAR_30) {
                VAR_35 = FUNC_12(VAR_33, VAR_2, VAR_34->df);
                if (VAR_35 < 0)
                        return FUNC_5(VAR_31, VAR_35, "Could not append IFLA_VXLAN_DF attribute: %m");
        }

        return VAR_35;
}
