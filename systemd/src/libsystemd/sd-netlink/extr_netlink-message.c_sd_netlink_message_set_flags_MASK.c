
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_2__* uint16_t ;
struct TYPE_8__ {TYPE_1__* hdr; } ;
typedef TYPE_2__ sd_netlink_message ;
struct TYPE_7__ {TYPE_2__* nlmsg_flags; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;

int FUNC_1(sd_netlink_message *VAR_1, uint16_t VAR_2) {
        FUNC_0(VAR_1, -VAR_0);
        FUNC_0(VAR_2, -VAR_0);

        VAR_1->hdr->nlmsg_flags = VAR_2;

        return 0;
}
