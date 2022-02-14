
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct in_addr {scalar_t__ s_addr; } ;
struct TYPE_4__ {scalar_t__ address; scalar_t__ subnet_mask; int have_subnet_mask; } ;
typedef TYPE_1__ sd_dhcp_lease ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct in_addr*,struct in_addr*) ;

int FUNC_2(sd_dhcp_lease *VAR_1) {
        struct in_addr VAR_2, VAR_3;
        int VAR_4;

        FUNC_0(VAR_1);

        if (VAR_1->address == 0)
                return -VAR_0;

        VAR_2.s_addr = VAR_1->address;


        VAR_4 = FUNC_1(&VAR_2, &VAR_3);
        if (VAR_4 < 0)
                return VAR_4;

        VAR_1->subnet_mask = VAR_3.s_addr;
        VAR_1->have_subnet_mask = 1;

        return 0;
}
