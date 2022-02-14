
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct nlmsgerr {int error; } ;
struct TYPE_5__ {TYPE_4__* hdr; } ;
typedef TYPE_1__ sd_netlink_message ;
typedef int sd_netlink ;
struct TYPE_6__ {int nlmsg_seq; } ;


 struct nlmsgerr* FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,TYPE_1__**,int ) ;

int FUNC_3(sd_netlink *VAR_1, int VAR_2, uint32_t VAR_3, sd_netlink_message **VAR_4) {
        struct nlmsgerr *VAR_5;
        int VAR_6;

        FUNC_1(VAR_2 <= 0);

        VAR_6 = FUNC_2(VAR_1, VAR_4, VAR_0);
        if (VAR_6 < 0)
                return VAR_6;

        (*VAR_4)->hdr->nlmsg_seq = VAR_3;

        VAR_5 = FUNC_0((*VAR_4)->hdr);

        VAR_5->error = VAR_2;

        return 0;
}
