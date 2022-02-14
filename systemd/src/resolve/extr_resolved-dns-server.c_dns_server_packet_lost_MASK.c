
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ possible_feature_level; int n_failed_tcp; int n_failed_tls; int n_failed_udp; struct TYPE_4__* manager; } ;
typedef scalar_t__ DnsServerFeatureLevel ;
typedef TYPE_1__ DnsServer ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(DnsServer *VAR_2, int VAR_3, DnsServerFeatureLevel VAR_4) {
        FUNC_1(VAR_2);
        FUNC_1(VAR_2->manager);

        if (VAR_2->possible_feature_level == VAR_4) {
                if (VAR_3 == VAR_1)
                        VAR_2->n_failed_udp++;
                else if (VAR_3 == VAR_0) {
                        if (FUNC_0(VAR_4))
                                VAR_2->n_failed_tls++;
                        else
                                VAR_2->n_failed_tcp++;
                }
        }
}
