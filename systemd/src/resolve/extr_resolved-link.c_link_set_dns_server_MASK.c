
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* unicast_scope; int * current_dns_server; int ifname; } ;
struct TYPE_5__ {int cache; } ;
typedef TYPE_2__ Link ;
typedef int DnsServer ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int ,int ) ;

DnsServer* FUNC_6(Link *VAR_0, DnsServer *VAR_1) {
        FUNC_0(VAR_0);

        if (VAR_0->current_dns_server == VAR_1)
                return VAR_1;

        if (VAR_1)
                FUNC_5("Switching to DNS server %s for interface %s.", FUNC_3(VAR_1), VAR_0->ifname);

        FUNC_4(VAR_0->current_dns_server);
        VAR_0->current_dns_server = FUNC_2(VAR_1);

        if (VAR_0->unicast_scope)
                FUNC_1(&VAR_0->unicast_scope->cache);

        return VAR_1;
}
