
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
typedef int sd_event_source ;
struct TYPE_6__ {int fd; int port; int arp_type; int mac_addr_len; int mac_addr; int xid; int link; int ifindex; scalar_t__ attempt; int state; int receive_message; } ;
typedef TYPE_1__ sd_dhcp_client ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int VAR_1 ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (int ,int *,int ,int ,int ,int ,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(sd_event_source *VAR_2, uint64_t VAR_3, void *VAR_4) {
        sd_dhcp_client *VAR_5 = VAR_4;
        FUNC_0(VAR_5);
        int VAR_6;

        FUNC_1(VAR_5);

        VAR_5->receive_message = FUNC_6(VAR_5->receive_message);
        VAR_5->fd = FUNC_2(VAR_5->fd);

        VAR_5->state = VAR_0;
        VAR_5->attempt = 0;

        VAR_6 = FUNC_5(VAR_5->ifindex, &VAR_5->link,
                                         VAR_5->xid, VAR_5->mac_addr,
                                         VAR_5->mac_addr_len, VAR_5->arp_type,
                                         VAR_5->port);
        if (VAR_6 < 0) {
                FUNC_4(VAR_5, VAR_6);
                return 0;
        }
        VAR_5->fd = VAR_6;

        return FUNC_3(VAR_5, VAR_1);
}
