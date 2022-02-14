
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int link_netlink_message_handler_t ;
struct TYPE_8__ {struct TYPE_8__* rtnl; struct TYPE_8__* manager; } ;
typedef TYPE_1__ NetDev ;
typedef int Link ;





 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*,int *,int ) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__*,int *,int ) ;
 int FUNC_5 (TYPE_1__*) ;

int FUNC_6(NetDev *VAR_0, Link *VAR_1, link_netlink_message_handler_t VAR_2) {
        int VAR_3;

        FUNC_0(VAR_0);
        FUNC_0(VAR_0->manager);
        FUNC_0(VAR_0->manager->rtnl);

        switch (FUNC_5(VAR_0)) {
        case 129:
                VAR_3 = FUNC_4(VAR_0, VAR_1, VAR_2);
                if (VAR_3 < 0)
                        return VAR_3;

                break;
        case 128:
                VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2);
                if (VAR_3 < 0)
                        return VAR_3;

                break;
        case 130:
                VAR_3 = FUNC_3(VAR_0, VAR_1);
                if (VAR_3 < 0)
                        return VAR_3;
                break;
        default:
                FUNC_1("Can not join independent netdev");
        }

        return 0;
}
