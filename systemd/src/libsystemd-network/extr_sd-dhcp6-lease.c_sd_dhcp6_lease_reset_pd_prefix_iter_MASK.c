
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int addresses; } ;
struct TYPE_5__ {TYPE_1__ pd; int prefix_iter; } ;
typedef TYPE_2__ sd_dhcp6_lease ;



void FUNC_0(sd_dhcp6_lease *VAR_0) {
        if (VAR_0)
                VAR_0->prefix_iter = VAR_0->pd.addresses;
}
