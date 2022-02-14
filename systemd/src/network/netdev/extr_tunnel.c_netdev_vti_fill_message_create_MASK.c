
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_16__ {scalar_t__ kind; scalar_t__ key; scalar_t__ ikey; scalar_t__ okey; int remote; int family; int local; scalar_t__ assign_to_loopback; } ;
typedef TYPE_1__ sd_netlink_message ;
typedef TYPE_1__ Tunnel ;
struct TYPE_17__ {int ifindex; } ;
typedef TYPE_1__ NetDev ;
typedef TYPE_4__ Link ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_1__*,int,char*) ;
 int FUNC_5 (TYPE_1__*,int ,int ,int *) ;
 int FUNC_6 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static int FUNC_7(NetDev *VAR_7, Link *VAR_8, sd_netlink_message *VAR_9) {
        uint32_t VAR_10, VAR_11;
        Tunnel *VAR_12;
        int VAR_13;

        FUNC_2(VAR_7);
        FUNC_2(VAR_9);

        if (VAR_7->kind == VAR_6)
                VAR_12 = FUNC_0(VAR_7);
        else
                VAR_12 = FUNC_1(VAR_7);

        FUNC_2(VAR_12);

        if (VAR_8 || VAR_12->assign_to_loopback) {
                VAR_13 = FUNC_6(VAR_9, VAR_1, VAR_8 ? VAR_8->ifindex : VAR_5);
                if (VAR_13 < 0)
                        return FUNC_4(VAR_7, VAR_13, "Could not append IFLA_VTI_LINK attribute: %m");
        }

        if (VAR_12->key != 0)
                VAR_10 = VAR_11 = FUNC_3(VAR_12->key);
        else {
                VAR_10 = FUNC_3(VAR_12->ikey);
                VAR_11 = FUNC_3(VAR_12->okey);
        }

        VAR_13 = FUNC_6(VAR_9, VAR_0, VAR_10);
        if (VAR_13 < 0)
                return FUNC_4(VAR_7, VAR_13, "Could not append IFLA_VTI_IKEY attribute: %m");

        VAR_13 = FUNC_6(VAR_9, VAR_3, VAR_11);
        if (VAR_13 < 0)
                return FUNC_4(VAR_7, VAR_13, "Could not append IFLA_VTI_OKEY attribute: %m");

        VAR_13 = FUNC_5(VAR_9, VAR_2, VAR_12->family, &VAR_12->local);
        if (VAR_13 < 0)
                return FUNC_4(VAR_7, VAR_13, "Could not append IFLA_VTI_LOCAL attribute: %m");

        VAR_13 = FUNC_5(VAR_9, VAR_4, VAR_12->family, &VAR_12->remote);
        if (VAR_13 < 0)
                return FUNC_4(VAR_7, VAR_13, "Could not append IFLA_VTI_REMOTE attribute: %m");

        return VAR_13;
}
