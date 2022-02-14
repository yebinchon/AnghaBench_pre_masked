
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* network; } ;
struct TYPE_6__ {scalar_t__ n_ipv6_proxy_ndp_addresses; int ipv6_proxy_ndp_addresses; } ;
typedef TYPE_2__ IPv6ProxyNDPAddress ;


 int FUNC_0 (int ,int ,TYPE_2__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_0 ;

void FUNC_3(IPv6ProxyNDPAddress *VAR_1) {
        if (!VAR_1)
                return;

        if (VAR_1->network) {
                FUNC_0(VAR_0, VAR_1->network->ipv6_proxy_ndp_addresses,
                            VAR_1);

                FUNC_1(VAR_1->network->n_ipv6_proxy_ndp_addresses > 0);
                VAR_1->network->n_ipv6_proxy_ndp_addresses--;
        }

        FUNC_2(VAR_1);
}
