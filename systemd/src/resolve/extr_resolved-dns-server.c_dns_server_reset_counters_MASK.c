
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int packet_truncated; scalar_t__ verified_usec; scalar_t__ n_failed_tls; scalar_t__ n_failed_tcp; scalar_t__ n_failed_udp; } ;
typedef TYPE_1__ DnsServer ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(DnsServer *VAR_0) {
        FUNC_0(VAR_0);

        VAR_0->n_failed_udp = 0;
        VAR_0->n_failed_tcp = 0;
        VAR_0->n_failed_tls = 0;
        VAR_0->packet_truncated = 0;
        VAR_0->verified_usec = 0;
}
