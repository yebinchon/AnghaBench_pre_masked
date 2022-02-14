
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct tcmsg {int tcm_parent; } ;
struct TYPE_4__ {TYPE_3__* hdr; } ;
typedef TYPE_1__ sd_netlink_message ;
struct TYPE_5__ {int nlmsg_type; } ;


 int VAR_0 ;
 struct tcmsg* FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

int FUNC_3(sd_netlink_message *VAR_1, uint32_t VAR_2) {
        struct tcmsg *VAR_3;

        FUNC_1(FUNC_2(VAR_1->hdr->nlmsg_type), -VAR_0);

        VAR_3 = FUNC_0(VAR_1->hdr);
        VAR_3->tcm_parent = VAR_2;

        return 0;
}
