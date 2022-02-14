
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct ifaddrlblmsg {int ifal_family; int ifal_index; } ;
struct TYPE_7__ {TYPE_6__* hdr; } ;
typedef TYPE_1__ sd_netlink_message ;
typedef int sd_netlink ;
struct TYPE_8__ {int nlmsg_flags; } ;


 int VAR_0 ;
 struct ifaddrlblmsg* FUNC_0 (TYPE_6__*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_1__**,int ) ;
 int FUNC_2 (int *,TYPE_1__**,scalar_t__) ;
 TYPE_1__** FUNC_3 (scalar_t__) ;

int FUNC_4(sd_netlink *VAR_4, sd_netlink_message **VAR_5, uint16_t VAR_6, int VAR_7, int VAR_8) {
        struct ifaddrlblmsg *VAR_9;
        int VAR_10;

        FUNC_1(FUNC_3(VAR_6), -VAR_0);
        FUNC_1(VAR_5, -VAR_0);

        VAR_10 = FUNC_2(VAR_4, VAR_5, VAR_6);
        if (VAR_10 < 0)
                return VAR_10;

        if (VAR_6 == VAR_3)
                (*VAR_5)->hdr->nlmsg_flags |= VAR_1 | VAR_2;

        VAR_9 = FUNC_0((*VAR_5)->hdr);

        VAR_9->ifal_family = VAR_8;
        VAR_9->ifal_index = VAR_7;

        return 0;
}
