
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int link; int fd; int ip_service_type; int port; } ;
typedef TYPE_1__ sd_dhcp_client ;
typedef int DHCPPacket ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,int *,size_t) ;
 int FUNC_1 (int *,int ,int ,int ,int ,size_t,int ) ;

__attribute__((used)) static int FUNC_2(
                sd_dhcp_client *VAR_3,
                DHCPPacket *VAR_4,
                size_t VAR_5) {

        FUNC_1(VAR_4, VAR_1, VAR_3->port,
                                      VAR_2, VAR_0, VAR_5, VAR_3->ip_service_type);

        return FUNC_0(VAR_3->fd, &VAR_3->link,
                                            VAR_4, VAR_5);
}
