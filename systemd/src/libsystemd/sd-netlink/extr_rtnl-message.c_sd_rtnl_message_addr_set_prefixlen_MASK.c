
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct ifaddrmsg {scalar_t__ ifa_family; unsigned char ifa_prefixlen; } ;
struct TYPE_6__ {struct TYPE_6__* hdr; int nlmsg_type; } ;
typedef TYPE_1__ sd_netlink_message ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ifaddrmsg* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_2 (int ) ;

int FUNC_3(sd_netlink_message *VAR_4, unsigned char VAR_5) {
        struct ifaddrmsg *VAR_6;

        FUNC_1(VAR_4, -VAR_2);
        FUNC_1(VAR_4->hdr, -VAR_2);
        FUNC_1(FUNC_2(VAR_4->hdr->nlmsg_type), -VAR_2);

        VAR_6 = FUNC_0(VAR_4->hdr);

        if ((VAR_6->ifa_family == VAR_0 && VAR_5 > 32) ||
            (VAR_6->ifa_family == VAR_1 && VAR_5 > 128))
                return -VAR_3;

        VAR_6->ifa_prefixlen = VAR_5;

        return 0;
}
