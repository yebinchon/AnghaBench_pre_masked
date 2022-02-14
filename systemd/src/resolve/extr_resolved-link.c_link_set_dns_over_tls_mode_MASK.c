
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ dns_over_tls_mode; } ;
typedef TYPE_1__ Link ;
typedef scalar_t__ DnsOverTlsMode ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*) ;

void FUNC_2(Link *VAR_1, DnsOverTlsMode VAR_2) {

        FUNC_0(VAR_1);


        if (VAR_2 != VAR_0)
                FUNC_1("DNS-over-TLS option for the link cannot be enabled or set to opportunistic when systemd-resolved is built without DNS-over-TLS support. Turning off DNS-over-TLS support.");
        return;


        VAR_1->dns_over_tls_mode = VAR_2;
}
