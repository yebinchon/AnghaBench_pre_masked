
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int sd_netlink_message ;
typedef int sd_netlink ;
struct TYPE_5__ {int name; struct TYPE_5__* tunnel; } ;
typedef int NetDev ;
typedef TYPE_1__ L2tpSession ;


 int VAR_0 ;
 int * FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *,int,char*,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(sd_netlink *VAR_1, sd_netlink_message *VAR_2, L2tpSession *VAR_3) {
        NetDev *VAR_4;
        int VAR_5;

        FUNC_1(VAR_3);
        FUNC_1(VAR_3->tunnel);

        VAR_4 = FUNC_0(VAR_3->tunnel);

        VAR_5 = FUNC_5(VAR_2);
        if (VAR_5 == -VAR_0)
                FUNC_3(VAR_4, "L2TP session %s exists, using existing without changing its parameters",
                                VAR_3->name);
        else if (VAR_5 < 0) {
                FUNC_4(VAR_4, VAR_5, "L2TP session %s could not be created: %m", VAR_3->name);
                return 1;
        }

        FUNC_2(VAR_4, "L2TP session %s created", VAR_3->name);
        return 1;
}
