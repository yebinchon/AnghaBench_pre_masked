
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_23__ {int in; } ;
struct TYPE_22__ {int in; } ;
struct TYPE_24__ {int kind; scalar_t__ key; scalar_t__ ikey; scalar_t__ okey; scalar_t__ gre_erspan_sequence; int fou_destination_port; int encap_src_port; int fou_encap_type; scalar_t__ fou_tunnel; int pmtudisc; int tos; int ttl; TYPE_2__ remote; TYPE_1__ local; int erspan_index; scalar_t__ assign_to_loopback; } ;
typedef TYPE_3__ sd_netlink_message ;
typedef TYPE_3__ Tunnel ;
struct TYPE_25__ {int ifindex; } ;
typedef TYPE_3__ NetDev ;
typedef TYPE_6__ Link ;


 TYPE_3__* FUNC_0 (TYPE_3__*) ;
 TYPE_3__* FUNC_1 (TYPE_3__*) ;
 TYPE_3__* FUNC_2 (TYPE_3__*) ;
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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;



 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (TYPE_3__*,int,char*) ;
 int FUNC_8 (TYPE_3__*,int ,int *) ;
 int FUNC_9 (TYPE_3__*,int ,int ) ;
 int FUNC_10 (TYPE_3__*,int ,int ) ;
 int FUNC_11 (TYPE_3__*,int ,int ) ;

__attribute__((used)) static int FUNC_12(NetDev *VAR_17, Link *VAR_18, sd_netlink_message *VAR_19) {
        uint32_t VAR_20 = 0;
        uint32_t VAR_21 = 0;
        uint16_t VAR_22 = 0;
        uint16_t VAR_23 = 0;
        Tunnel *VAR_24;
        int VAR_25;

        FUNC_3(VAR_17);
        FUNC_3(VAR_19);

        switch (VAR_17->kind) {
        case 129:
                VAR_24 = FUNC_1(VAR_17);
                break;
        case 130:
                VAR_24 = FUNC_0(VAR_17);
                break;
        case 128:
                VAR_24 = FUNC_2(VAR_17);
                break;
        default:
                FUNC_4("invalid netdev kind");
        }

        FUNC_3(VAR_24);

        if (VAR_18 || VAR_24->assign_to_loopback) {
                VAR_25 = FUNC_10(VAR_19, VAR_8, VAR_18 ? VAR_18->ifindex : VAR_16);
                if (VAR_25 < 0)
                        return FUNC_7(VAR_17, VAR_25, "Could not append IFLA_GRE_LINK attribute: %m");
        }

        if (VAR_17->kind == 130) {
                VAR_25 = FUNC_10(VAR_19, VAR_5, VAR_24->erspan_index);
                if (VAR_25 < 0)
                        return FUNC_7(VAR_17, VAR_25, "Could not append IFLA_GRE_ERSPAN_INDEX attribute: %m");
        }

        VAR_25 = FUNC_8(VAR_19, VAR_9, &VAR_24->local.in);
        if (VAR_25 < 0)
                return FUNC_7(VAR_17, VAR_25, "Could not append IFLA_GRE_LOCAL attribute: %m");

        VAR_25 = FUNC_8(VAR_19, VAR_13, &VAR_24->remote.in);
        if (VAR_25 < 0)
                return FUNC_7(VAR_17, VAR_25, "Could not append IFLA_GRE_REMOTE attribute: %m");

        VAR_25 = FUNC_11(VAR_19, VAR_15, VAR_24->ttl);
        if (VAR_25 < 0)
                return FUNC_7(VAR_17, VAR_25, "Could not append IFLA_GRE_TTL attribute: %m");

        VAR_25 = FUNC_11(VAR_19, VAR_14, VAR_24->tos);
        if (VAR_25 < 0)
                return FUNC_7(VAR_17, VAR_25, "Could not append IFLA_GRE_TOS attribute: %m");

        VAR_25 = FUNC_11(VAR_19, VAR_12, VAR_24->pmtudisc);
        if (VAR_25 < 0)
                return FUNC_7(VAR_17, VAR_25, "Could not append IFLA_GRE_PMTUDISC attribute: %m");

        if (VAR_24->key != 0) {
                VAR_20 = VAR_21 = FUNC_6(VAR_24->key);
                VAR_22 |= VAR_0;
                VAR_23 |= VAR_0;
        }

        if (VAR_24->ikey != 0) {
                VAR_20 = FUNC_6(VAR_24->ikey);
                VAR_22 |= VAR_0;
        }

        if (VAR_24->okey != 0) {
                VAR_21 = FUNC_6(VAR_24->okey);
                VAR_23 |= VAR_0;
        }

        if (VAR_24->gre_erspan_sequence > 0) {
                VAR_22 |= VAR_1;
                VAR_23 |= VAR_1;
        } else if (VAR_24->gre_erspan_sequence == 0) {
                VAR_22 &= ~VAR_1;
                VAR_23 &= ~VAR_1;
        }

        VAR_25 = FUNC_10(VAR_19, VAR_7, VAR_20);
        if (VAR_25 < 0)
                return FUNC_7(VAR_17, VAR_25, "Could not append IFLA_GRE_IKEY attribute: %m");

        VAR_25 = FUNC_10(VAR_19, VAR_11, VAR_21);
        if (VAR_25 < 0)
                return FUNC_7(VAR_17, VAR_25, "Could not append IFLA_GRE_OKEY attribute: %m");

        VAR_25 = FUNC_9(VAR_19, VAR_6, VAR_22);
        if (VAR_25 < 0)
                return FUNC_7(VAR_17, VAR_25, "Could not append IFLA_GRE_IFLAGS attribute: %m");

        VAR_25 = FUNC_9(VAR_19, VAR_10, VAR_23);
        if (VAR_25 < 0)
                return FUNC_7(VAR_17, VAR_25, "Could not append IFLA_GRE_OFLAGS, attribute: %m");

        if (VAR_24->fou_tunnel) {
                VAR_25 = FUNC_9(VAR_19, VAR_4, VAR_24->fou_encap_type);
                if (VAR_25 < 0)
                        return FUNC_7(VAR_17, VAR_25, "Could not append IFLA_GRE_ENCAP_TYPE attribute: %m");

                VAR_25 = FUNC_9(VAR_19, VAR_3, FUNC_5(VAR_24->encap_src_port));
                if (VAR_25 < 0)
                        return FUNC_7(VAR_17, VAR_25, "Could not append IFLA_GRE_ENCAP_SPORT attribute: %m");

                VAR_25 = FUNC_9(VAR_19, VAR_2, FUNC_5(VAR_24->fou_destination_port));
                if (VAR_25 < 0)
                        return FUNC_7(VAR_17, VAR_25, "Could not append IFLA_GRE_ENCAP_DPORT attribute: %m");
        }

        return VAR_25;
}
