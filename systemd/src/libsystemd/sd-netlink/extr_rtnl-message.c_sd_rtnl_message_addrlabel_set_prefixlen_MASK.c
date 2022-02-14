
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct ifaddrlblmsg {unsigned char ifal_prefixlen; } ;
struct TYPE_6__ {struct TYPE_6__* hdr; int nlmsg_type; } ;
typedef TYPE_1__ sd_netlink_message ;


 int VAR_0 ;
 int VAR_1 ;
 struct ifaddrlblmsg* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_2 (int ) ;

int FUNC_3(sd_netlink_message *VAR_2, unsigned char VAR_3) {
        struct ifaddrlblmsg *VAR_4;

        FUNC_1(VAR_2, -VAR_0);
        FUNC_1(VAR_2->hdr, -VAR_0);
        FUNC_1(FUNC_2(VAR_2->hdr->nlmsg_type), -VAR_0);

        VAR_4 = FUNC_0(VAR_2->hdr);

        if (VAR_3 > 128)
                return -VAR_1;

        VAR_4->ifal_prefixlen = VAR_3;

        return 0;
}
