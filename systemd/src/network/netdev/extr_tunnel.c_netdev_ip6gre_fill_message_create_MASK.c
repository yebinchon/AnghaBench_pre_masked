
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct TYPE_21__ {int in6; } ;
struct TYPE_20__ {int in6; } ;
struct TYPE_22__ {scalar_t__ kind; scalar_t__ ipv6_flowlabel; scalar_t__ flags; scalar_t__ key; scalar_t__ ikey; scalar_t__ okey; int ttl; TYPE_2__ remote; TYPE_1__ local; scalar_t__ assign_to_loopback; } ;
typedef TYPE_3__ sd_netlink_message ;
typedef TYPE_3__ Tunnel ;
struct TYPE_23__ {scalar_t__ ifindex; } ;
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
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_3__* FUNC_0 (TYPE_3__*) ;
 TYPE_3__* FUNC_1 (TYPE_3__*) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_3__*,int,char*) ;
 int FUNC_5 (TYPE_3__*,int ,int *) ;
 int FUNC_6 (TYPE_3__*,int ,int ) ;
 int FUNC_7 (TYPE_3__*,int ,scalar_t__) ;
 int FUNC_8 (TYPE_3__*,int ,int ) ;

__attribute__((used)) static int FUNC_9(NetDev *VAR_14, Link *VAR_15, sd_netlink_message *VAR_16) {
        uint32_t VAR_17 = 0;
        uint32_t VAR_18 = 0;
        uint16_t VAR_19 = 0;
        uint16_t VAR_20 = 0;
        Tunnel *VAR_21;
        int VAR_22;

        FUNC_2(VAR_14);

        if (VAR_14->kind == VAR_12)
                VAR_21 = FUNC_0(VAR_14);
        else
                VAR_21 = FUNC_1(VAR_14);

        FUNC_2(VAR_21);
        FUNC_2(VAR_16);

        if (VAR_15 || VAR_21->assign_to_loopback) {
                VAR_22 = FUNC_7(VAR_16, VAR_5, VAR_15 ? VAR_15->ifindex : VAR_11);
                if (VAR_22 < 0)
                        return FUNC_4(VAR_14, VAR_22, "Could not append IFLA_GRE_LINK attribute: %m");
        }

        VAR_22 = FUNC_5(VAR_16, VAR_6, &VAR_21->local.in6);
        if (VAR_22 < 0)
                return FUNC_4(VAR_14, VAR_22, "Could not append IFLA_GRE_LOCAL attribute: %m");

        VAR_22 = FUNC_5(VAR_16, VAR_9, &VAR_21->remote.in6);
        if (VAR_22 < 0)
                return FUNC_4(VAR_14, VAR_22, "Could not append IFLA_GRE_REMOTE attribute: %m");

        VAR_22 = FUNC_8(VAR_16, VAR_10, VAR_21->ttl);
        if (VAR_22 < 0)
                return FUNC_4(VAR_14, VAR_22, "Could not append IFLA_GRE_TTL attribute: %m");

        if (VAR_21->ipv6_flowlabel != VAR_13) {
                VAR_22 = FUNC_7(VAR_16, VAR_2, VAR_21->ipv6_flowlabel);
                if (VAR_22 < 0)
                        return FUNC_4(VAR_14, VAR_22, "Could not append IFLA_GRE_FLOWINFO attribute: %m");
        }

        VAR_22 = FUNC_7(VAR_16, VAR_1, VAR_21->flags);
        if (VAR_22 < 0)
                return FUNC_4(VAR_14, VAR_22, "Could not append IFLA_GRE_FLAGS attribute: %m");

        if (VAR_21->key != 0) {
                VAR_17 = VAR_18 = FUNC_3(VAR_21->key);
                VAR_19 |= VAR_0;
                VAR_20 |= VAR_0;
        }

        if (VAR_21->ikey != 0) {
                VAR_17 = FUNC_3(VAR_21->ikey);
                VAR_19 |= VAR_0;
        }

        if (VAR_21->okey != 0) {
                VAR_18 = FUNC_3(VAR_21->okey);
                VAR_20 |= VAR_0;
        }

        VAR_22 = FUNC_7(VAR_16, VAR_4, VAR_17);
        if (VAR_22 < 0)
                return FUNC_4(VAR_14, VAR_22, "Could not append IFLA_GRE_IKEY attribute: %m");

        VAR_22 = FUNC_7(VAR_16, VAR_8, VAR_18);
        if (VAR_22 < 0)
                return FUNC_4(VAR_14, VAR_22, "Could not append IFLA_GRE_OKEY attribute: %m");

        VAR_22 = FUNC_6(VAR_16, VAR_3, VAR_19);
        if (VAR_22 < 0)
                return FUNC_4(VAR_14, VAR_22, "Could not append IFLA_GRE_IFLAGS attribute: %m");

        VAR_22 = FUNC_6(VAR_16, VAR_7, VAR_20);
        if (VAR_22 < 0)
                return FUNC_4(VAR_14, VAR_22, "Could not append IFLA_GRE_OFLAGS, attribute: %m");

        return VAR_22;
}
