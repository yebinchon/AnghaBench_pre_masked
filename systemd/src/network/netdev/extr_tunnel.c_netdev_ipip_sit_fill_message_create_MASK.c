
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_22__ {int in; } ;
struct TYPE_21__ {int in; } ;
struct TYPE_23__ {scalar_t__ kind; scalar_t__ fou_encap_type; scalar_t__ sixrd_prefixlen; scalar_t__ isatap; int sixrd_prefix; int fou_destination_port; int encap_src_port; scalar_t__ fou_tunnel; int pmtudisc; int ttl; TYPE_2__ remote; TYPE_1__ local; scalar_t__ assign_to_loopback; } ;
typedef TYPE_3__ sd_netlink_message ;
typedef TYPE_3__ Tunnel ;
struct TYPE_24__ {int ifindex; } ;
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
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_1 (scalar_t__,int ,scalar_t__) ;
 TYPE_3__* FUNC_2 (TYPE_3__*) ;
 int VAR_14 ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*,int,char*) ;
 int FUNC_6 (TYPE_3__*,int ,int *) ;
 int FUNC_7 (TYPE_3__*,int ,int *) ;
 int FUNC_8 (TYPE_3__*,int ,scalar_t__) ;
 int FUNC_9 (TYPE_3__*,int ,int ) ;
 int FUNC_10 (TYPE_3__*,int ,int ) ;

__attribute__((used)) static int FUNC_11(NetDev *VAR_15, Link *VAR_16, sd_netlink_message *VAR_17) {
        Tunnel *VAR_18;
        int VAR_19;

        FUNC_3(VAR_15);

        if (VAR_15->kind == VAR_12)
                VAR_18 = FUNC_0(VAR_15);
        else
                VAR_18 = FUNC_2(VAR_15);

        FUNC_3(VAR_17);
        FUNC_3(VAR_18);

        if (VAR_16 || VAR_18->assign_to_loopback) {
                VAR_19 = FUNC_9(VAR_17, VAR_6, VAR_16 ? VAR_16->ifindex : VAR_11);
                if (VAR_19 < 0)
                        return FUNC_5(VAR_15, VAR_19, "Could not append IFLA_IPTUN_LINK attribute: %m");
        }

        VAR_19 = FUNC_7(VAR_17, VAR_7, &VAR_18->local.in);
        if (VAR_19 < 0)
                return FUNC_5(VAR_15, VAR_19, "Could not append IFLA_IPTUN_LOCAL attribute: %m");

        VAR_19 = FUNC_7(VAR_17, VAR_9, &VAR_18->remote.in);
        if (VAR_19 < 0)
                return FUNC_5(VAR_15, VAR_19, "Could not append IFLA_IPTUN_REMOTE attribute: %m");

        VAR_19 = FUNC_10(VAR_17, VAR_10, VAR_18->ttl);
        if (VAR_19 < 0)
                return FUNC_5(VAR_15, VAR_19, "Could not append IFLA_IPTUN_TTL attribute: %m");

        VAR_19 = FUNC_10(VAR_17, VAR_8, VAR_18->pmtudisc);
        if (VAR_19 < 0)
                return FUNC_5(VAR_15, VAR_19, "Could not append IFLA_IPTUN_PMTUDISC attribute: %m");

        if (VAR_18->fou_tunnel) {
                VAR_19 = FUNC_8(VAR_17, VAR_4, VAR_18->fou_encap_type);
                if (VAR_19 < 0)
                        return FUNC_5(VAR_15, VAR_19, "Could not append IFLA_IPTUN_ENCAP_TYPE attribute: %m");

                VAR_19 = FUNC_8(VAR_17, VAR_3, FUNC_4(VAR_18->encap_src_port));
                if (VAR_19 < 0)
                        return FUNC_5(VAR_15, VAR_19, "Could not append IFLA_IPTUN_ENCAP_SPORT attribute: %m");

                VAR_19 = FUNC_8(VAR_17, VAR_2, FUNC_4(VAR_18->fou_destination_port));
                if (VAR_19 < 0)
                        return FUNC_5(VAR_15, VAR_19, "Could not append IFLA_IPTUN_ENCAP_DPORT attribute: %m");
        }

        if (VAR_15->kind == VAR_13) {
                if (VAR_18->sixrd_prefixlen > 0) {
                        VAR_19 = FUNC_6(VAR_17, VAR_0, &VAR_18->sixrd_prefix);
                        if (VAR_19 < 0)
                                return FUNC_5(VAR_15, VAR_19, "Could not append IFLA_IPTUN_6RD_PREFIX attribute: %m");




                        VAR_19 = FUNC_8(VAR_17, VAR_1, VAR_18->sixrd_prefixlen);
                        if (VAR_19 < 0)
                                return FUNC_5(VAR_15, VAR_19, "Could not append IFLA_IPTUN_6RD_PREFIXLEN attribute: %m");
                }

                if (VAR_18->isatap >= 0) {
                        uint16_t VAR_20 = 0;

                        FUNC_1(VAR_20, VAR_14, VAR_18->isatap);

                        VAR_19 = FUNC_8(VAR_17, VAR_5, VAR_20);
                        if (VAR_19 < 0)
                                return FUNC_5(VAR_15, VAR_19, "Could not append IFLA_IPTUN_FLAGS attribute: %m");
                }
        }

        return VAR_19;
}
