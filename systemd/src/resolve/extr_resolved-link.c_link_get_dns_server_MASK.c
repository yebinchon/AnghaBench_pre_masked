
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * current_dns_server; int dns_servers; } ;
typedef TYPE_1__ Link ;
typedef int DnsServer ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;

DnsServer *FUNC_2(Link *VAR_0) {
        FUNC_0(VAR_0);

        if (!VAR_0->current_dns_server)
                FUNC_1(VAR_0, VAR_0->dns_servers);

        return VAR_0->current_dns_server;
}
