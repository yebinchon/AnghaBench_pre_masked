
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int nlmsg_flags; struct TYPE_5__* hdr; int nlmsg_type; } ;
typedef TYPE_1__ sd_netlink_message ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (TYPE_1__*,int ) ;

int FUNC_3(sd_netlink_message *VAR_9, int VAR_10) {
        FUNC_2(VAR_9, -VAR_0);
        FUNC_2(VAR_9->hdr, -VAR_0);

        FUNC_2(FUNC_0(VAR_9->hdr->nlmsg_type, VAR_4, VAR_2, VAR_7, VAR_5,
                             VAR_8, VAR_3, VAR_6), -VAR_0);

        FUNC_1(VAR_9->hdr->nlmsg_flags, VAR_1, VAR_10);

        return 0;
}
