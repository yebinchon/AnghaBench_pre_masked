
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int nlmsg_seq; struct TYPE_4__* hdr; } ;
typedef TYPE_1__ sd_netlink_message ;


 int FUNC_0 (TYPE_1__*) ;

uint32_t FUNC_1(sd_netlink_message *VAR_0) {
        FUNC_0(VAR_0);
        FUNC_0(VAR_0->hdr);

        return VAR_0->hdr->nlmsg_seq;
}
