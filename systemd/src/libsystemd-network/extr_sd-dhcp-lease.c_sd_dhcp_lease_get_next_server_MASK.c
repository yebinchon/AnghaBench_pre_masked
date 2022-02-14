
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {scalar_t__ next_server; scalar_t__ s_addr; } ;
typedef struct in_addr sd_dhcp_lease ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct in_addr*,int ) ;

int FUNC_1(sd_dhcp_lease *VAR_2, struct in_addr *VAR_3) {
        FUNC_0(VAR_2, -VAR_0);
        FUNC_0(VAR_3, -VAR_0);

        if (VAR_2->next_server == 0)
                return -VAR_1;

        VAR_3->s_addr = VAR_2->next_server;
        return 0;
}
