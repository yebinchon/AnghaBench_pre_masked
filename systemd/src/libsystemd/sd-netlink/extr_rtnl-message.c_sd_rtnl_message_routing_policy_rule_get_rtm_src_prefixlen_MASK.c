
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct rtmsg {unsigned char rtm_src_len; } ;
struct TYPE_6__ {struct TYPE_6__ const* hdr; int nlmsg_type; } ;
typedef TYPE_1__ sd_netlink_message ;


 int VAR_0 ;
 struct rtmsg* FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (TYPE_1__ const*,int ) ;
 TYPE_1__ const* FUNC_2 (int ) ;

int FUNC_3(const sd_netlink_message *VAR_1, unsigned char *VAR_2) {
        struct rtmsg *VAR_3;

        FUNC_1(VAR_1, -VAR_0);
        FUNC_1(VAR_1->hdr, -VAR_0);
        FUNC_1(FUNC_2(VAR_1->hdr->nlmsg_type), -VAR_0);

        VAR_3 = FUNC_0(VAR_1->hdr);

        *VAR_2 = VAR_3->rtm_src_len;

        return 0;
}
