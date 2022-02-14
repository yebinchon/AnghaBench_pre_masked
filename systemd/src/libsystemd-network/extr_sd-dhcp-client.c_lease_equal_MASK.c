
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ address; scalar_t__ subnet_mask; scalar_t__ router_size; TYPE_1__* router; } ;
typedef TYPE_2__ sd_dhcp_lease ;
struct TYPE_5__ {scalar_t__ s_addr; } ;



__attribute__((used)) static bool FUNC_0(const sd_dhcp_lease *VAR_0, const sd_dhcp_lease *VAR_1) {
        if (VAR_0->address != VAR_1->address)
                return 0;

        if (VAR_0->subnet_mask != VAR_1->subnet_mask)
                return 0;

        if (VAR_0->router_size != VAR_1->router_size)
                return 0;

        for (size_t VAR_2 = 0; VAR_2 < VAR_0->router_size; VAR_2++)
                if (VAR_0->router[VAR_2].s_addr != VAR_1->router[VAR_2].s_addr)
                        return 0;

        return 1;
}
