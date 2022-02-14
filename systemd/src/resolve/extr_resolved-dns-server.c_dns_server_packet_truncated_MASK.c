
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ possible_feature_level; int packet_truncated; } ;
typedef scalar_t__ DnsServerFeatureLevel ;
typedef TYPE_1__ DnsServer ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(DnsServer *VAR_0, DnsServerFeatureLevel VAR_1) {
        FUNC_0(VAR_0);



        if (VAR_0->possible_feature_level != VAR_1)
                return;

        VAR_0->packet_truncated = 1;
}
