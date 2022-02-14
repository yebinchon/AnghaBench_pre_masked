
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ verified_feature_level; int packet_rrsig_missing; } ;
typedef scalar_t__ DnsServerFeatureLevel ;
typedef TYPE_1__ DnsServer ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(DnsServer *VAR_3, DnsServerFeatureLevel VAR_4) {
        FUNC_1(VAR_3);

        if (VAR_4 < VAR_0)
                return;


        if (VAR_3->verified_feature_level >= VAR_0)
                VAR_3->verified_feature_level = FUNC_0(VAR_4) ? VAR_2 : VAR_1;

        VAR_3->packet_rrsig_missing = 1;
}
