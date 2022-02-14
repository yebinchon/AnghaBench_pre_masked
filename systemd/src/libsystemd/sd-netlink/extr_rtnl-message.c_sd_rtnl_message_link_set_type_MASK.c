
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct ifinfomsg {unsigned int ifi_type; } ;
struct TYPE_6__ {struct TYPE_6__* hdr; int nlmsg_type; } ;
typedef TYPE_1__ sd_netlink_message ;


 int VAR_0 ;
 struct ifinfomsg* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_2 (int ) ;

int FUNC_3(sd_netlink_message *VAR_1, unsigned VAR_2) {
        struct ifinfomsg *VAR_3;

        FUNC_1(VAR_1, -VAR_0);
        FUNC_1(VAR_1->hdr, -VAR_0);
        FUNC_1(FUNC_2(VAR_1->hdr->nlmsg_type), -VAR_0);

        VAR_3 = FUNC_0(VAR_1->hdr);

        VAR_3->ifi_type = VAR_2;

        return 0;
}
