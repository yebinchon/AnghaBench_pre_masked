
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct rtmsg {int rtm_family; int rtm_type; int rtm_scope; int rtm_protocol; } ;
struct TYPE_7__ {TYPE_6__* hdr; } ;
typedef TYPE_1__ sd_netlink_message ;
typedef int sd_netlink ;
struct TYPE_8__ {int nlmsg_flags; } ;


 int VAR_0 ;
 struct rtmsg* FUNC_0 (TYPE_6__*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_1__**,int ) ;
 int FUNC_2 (int *,TYPE_1__**,scalar_t__) ;
 TYPE_1__** FUNC_3 (scalar_t__) ;

int FUNC_4(sd_netlink *VAR_7, sd_netlink_message **VAR_8, uint16_t VAR_9, int VAR_10) {
        struct rtmsg *VAR_11;
        int VAR_12;

        FUNC_1(FUNC_3(VAR_9), -VAR_0);
        FUNC_1(VAR_8, -VAR_0);

        VAR_12 = FUNC_2(VAR_7, VAR_8, VAR_9);
        if (VAR_12 < 0)
                return VAR_12;

        if (VAR_9 == VAR_3)
                (*VAR_8)->hdr->nlmsg_flags |= VAR_1 | VAR_2;

        VAR_11 = FUNC_0((*VAR_8)->hdr);
        VAR_11->rtm_family = VAR_10;
        VAR_11->rtm_protocol = VAR_5;
        VAR_11->rtm_scope = VAR_6;
        VAR_11->rtm_type = VAR_4;

        return 0;
}
