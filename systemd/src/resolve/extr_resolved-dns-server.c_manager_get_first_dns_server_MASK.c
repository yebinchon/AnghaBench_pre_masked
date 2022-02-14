
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * fallback_dns_servers; int * dns_servers; } ;
typedef TYPE_1__ Manager ;
typedef int DnsServerType ;
typedef int DnsServer ;




 int FUNC_0 (TYPE_1__*) ;

DnsServer *FUNC_1(Manager *VAR_0, DnsServerType VAR_1) {
        FUNC_0(VAR_0);

        switch (VAR_1) {

        case 128:
                return VAR_0->dns_servers;

        case 129:
                return VAR_0->fallback_dns_servers;

        default:
                return ((void*)0);
        }
}
