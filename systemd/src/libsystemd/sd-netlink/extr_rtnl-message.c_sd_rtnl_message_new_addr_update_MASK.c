
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* hdr; } ;
typedef TYPE_2__ sd_netlink_message ;
typedef int sd_netlink ;
struct TYPE_5__ {int nlmsg_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_2__**,int ,int,int) ;

int FUNC_1(sd_netlink *VAR_2, sd_netlink_message **VAR_3,
                             int VAR_4, int VAR_5) {
        int VAR_6;

        VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_1, VAR_4, VAR_5);
        if (VAR_6 < 0)
                return VAR_6;

        (*VAR_3)->hdr->nlmsg_flags |= VAR_0;

        return 0;
}
