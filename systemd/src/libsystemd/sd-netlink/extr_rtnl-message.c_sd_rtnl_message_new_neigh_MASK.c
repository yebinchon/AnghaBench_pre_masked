
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct ndmsg {int ndm_family; int ndm_ifindex; } ;
struct TYPE_8__ {TYPE_6__* hdr; } ;
typedef TYPE_1__ sd_netlink_message ;
typedef int sd_netlink ;
struct TYPE_9__ {int nlmsg_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__** FUNC_0 (int,int ,int ,int ,int ) ;
 struct ndmsg* FUNC_1 (TYPE_6__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (TYPE_1__**,int ) ;
 int FUNC_3 (int *,TYPE_1__**,scalar_t__) ;
 TYPE_1__** FUNC_4 (scalar_t__) ;

int FUNC_5(sd_netlink *VAR_8, sd_netlink_message **VAR_9, uint16_t VAR_10, int VAR_11, int VAR_12) {
        struct ndmsg *VAR_13;
        int VAR_14;

        FUNC_2(FUNC_4(VAR_10), -VAR_3);
        FUNC_2(FUNC_0(VAR_12, VAR_2, VAR_0, VAR_1, VAR_6), -VAR_3);
        FUNC_2(VAR_9, -VAR_3);

        VAR_14 = FUNC_3(VAR_8, VAR_9, VAR_10);
        if (VAR_14 < 0)
                return VAR_14;

        if (VAR_10 == VAR_7)
                (*VAR_9)->hdr->nlmsg_flags |= VAR_5 | VAR_4;

        VAR_13 = FUNC_1((*VAR_9)->hdr);

        VAR_13->ndm_family = VAR_12;
        VAR_13->ndm_ifindex = VAR_11;

        return 0;
}
