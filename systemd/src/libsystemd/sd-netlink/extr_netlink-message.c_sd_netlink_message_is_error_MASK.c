
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ nlmsg_type; struct TYPE_4__ const* hdr; } ;
typedef TYPE_1__ sd_netlink_message ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__ const*,int ) ;

int FUNC_1(const sd_netlink_message *VAR_1) {
        FUNC_0(VAR_1, 0);
        FUNC_0(VAR_1->hdr, 0);

        return VAR_1->hdr->nlmsg_type == VAR_0;
}
