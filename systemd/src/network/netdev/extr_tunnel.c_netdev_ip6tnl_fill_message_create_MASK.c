
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_18__ {int in6; } ;
struct TYPE_17__ {int in6; } ;
struct TYPE_19__ {scalar_t__ ttl; scalar_t__ ipv6_flowlabel; scalar_t__ flags; scalar_t__ allow_localremote; scalar_t__ encap_limit; int ip6tnl_mode; scalar_t__ copy_dscp; TYPE_2__ remote; TYPE_1__ local; scalar_t__ assign_to_loopback; } ;
typedef TYPE_3__ sd_netlink_message ;
typedef TYPE_3__ Tunnel ;
struct TYPE_20__ {scalar_t__ ifindex; } ;
typedef TYPE_3__ NetDev ;
typedef TYPE_6__ Link ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_3__* FUNC_0 (TYPE_3__*) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;



 int FUNC_1 (scalar_t__,int ,scalar_t__) ;
 scalar_t__ VAR_14 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int,char*) ;
 int FUNC_4 (TYPE_3__*,int ,int *) ;
 int FUNC_5 (TYPE_3__*,int ,scalar_t__) ;
 int FUNC_6 (TYPE_3__*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_7(NetDev *VAR_15, Link *VAR_16, sd_netlink_message *VAR_17) {
        Tunnel *VAR_18 = FUNC_0(VAR_15);
        uint8_t VAR_19;
        int VAR_20;

        FUNC_2(VAR_15);
        FUNC_2(VAR_17);
        FUNC_2(VAR_18);

        if (VAR_16 || VAR_18->assign_to_loopback) {
                VAR_20 = FUNC_5(VAR_17, VAR_3, VAR_16 ? VAR_16->ifindex : VAR_13);
                if (VAR_20 < 0)
                        return FUNC_3(VAR_15, VAR_20, "Could not append IFLA_IPTUN_LINK attribute: %m");
        }

        VAR_20 = FUNC_4(VAR_17, VAR_4, &VAR_18->local.in6);
        if (VAR_20 < 0)
                return FUNC_3(VAR_15, VAR_20, "Could not append IFLA_IPTUN_LOCAL attribute: %m");

        VAR_20 = FUNC_4(VAR_17, VAR_6, &VAR_18->remote.in6);
        if (VAR_20 < 0)
                return FUNC_3(VAR_15, VAR_20, "Could not append IFLA_IPTUN_REMOTE attribute: %m");

        VAR_20 = FUNC_6(VAR_17, VAR_7, VAR_18->ttl);
        if (VAR_20 < 0)
                return FUNC_3(VAR_15, VAR_20, "Could not append IFLA_IPTUN_TTL attribute: %m");

        if (VAR_18->ipv6_flowlabel != VAR_14) {
                VAR_20 = FUNC_5(VAR_17, VAR_2, VAR_18->ipv6_flowlabel);
                if (VAR_20 < 0)
                        return FUNC_3(VAR_15, VAR_20, "Could not append IFLA_IPTUN_FLOWINFO attribute: %m");
        }

        if (VAR_18->copy_dscp)
                VAR_18->flags |= VAR_9;

        if (VAR_18->allow_localremote >= 0)
                FUNC_1(VAR_18->flags, VAR_8, VAR_18->allow_localremote);

        if (VAR_18->encap_limit != VAR_12) {
                VAR_20 = FUNC_6(VAR_17, VAR_0, VAR_18->encap_limit);
                if (VAR_20 < 0)
                        return FUNC_3(VAR_15, VAR_20, "Could not append IFLA_IPTUN_ENCAP_LIMIT attribute: %m");
        }

        VAR_20 = FUNC_5(VAR_17, VAR_1, VAR_18->flags);
        if (VAR_20 < 0)
                return FUNC_3(VAR_15, VAR_20, "Could not append IFLA_IPTUN_FLAGS attribute: %m");

        switch (VAR_18->ip6tnl_mode) {
        case 129:
                VAR_19 = VAR_11;
                break;
        case 128:
                VAR_19 = VAR_10;
                break;
        case 130:
        default:
                VAR_19 = 0;
                break;
        }

        VAR_20 = FUNC_6(VAR_17, VAR_5, VAR_19);
        if (VAR_20 < 0)
                return FUNC_3(VAR_15, VAR_20, "Could not append IFLA_IPTUN_PROTO attribute: %m");

        return VAR_20;
}
