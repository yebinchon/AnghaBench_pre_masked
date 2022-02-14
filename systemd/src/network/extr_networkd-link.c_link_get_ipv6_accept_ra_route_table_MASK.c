
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {TYPE_1__* network; } ;
struct TYPE_5__ {int ipv6_accept_ra_route_table; scalar_t__ ipv6_accept_ra_route_table_set; } ;
typedef TYPE_2__ Link ;


 int FUNC_0 (TYPE_2__*) ;

uint32_t FUNC_1(Link *VAR_0) {
        if (VAR_0->network->ipv6_accept_ra_route_table_set)
                return VAR_0->network->ipv6_accept_ra_route_table;
        return FUNC_0(VAR_0);
}
