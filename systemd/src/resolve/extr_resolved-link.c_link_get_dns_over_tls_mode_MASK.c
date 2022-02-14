
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ dns_over_tls_mode; int manager; } ;
typedef TYPE_1__ Link ;
typedef scalar_t__ DnsOverTlsMode ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ) ;

DnsOverTlsMode FUNC_2(Link *VAR_1) {
        FUNC_0(VAR_1);

        if (VAR_1->dns_over_tls_mode != VAR_0)
                return VAR_1->dns_over_tls_mode;

        return FUNC_1(VAR_1->manager);
}
