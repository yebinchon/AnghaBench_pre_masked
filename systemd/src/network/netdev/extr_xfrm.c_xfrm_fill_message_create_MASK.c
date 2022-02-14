
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sd_netlink_message ;
struct TYPE_5__ {int if_id; scalar_t__ independent; } ;
typedef TYPE_1__ Xfrm ;
struct TYPE_6__ {int ifindex; } ;
typedef int NetDev ;
typedef TYPE_2__ Link ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int,char*) ;
 int FUNC_3 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_4(NetDev *VAR_3, Link *VAR_4, sd_netlink_message *VAR_5) {
        Xfrm *VAR_6;
        int VAR_7;

        FUNC_1(*VAR_3);
        FUNC_1(*VAR_5);

        VAR_6 = FUNC_0(VAR_3);

        FUNC_1(VAR_4 || VAR_6->independent);

        VAR_7 = FUNC_3(VAR_5, VAR_1, VAR_4 ? VAR_4->ifindex : VAR_2);
        if (VAR_7 < 0)
                return FUNC_2(VAR_3, VAR_7, "Could not append IFLA_XFRM_LINK: %m");

        VAR_7 = FUNC_3(VAR_5, VAR_0, VAR_6->if_id);
        if (VAR_7 < 0)
                return FUNC_2(VAR_3, VAR_7, "Could not append IFLA_XFRM_IF_ID: %m");

        return 0;
}
