
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ verified_feature_level; int packet_bad_opt; } ;
typedef scalar_t__ DnsServerFeatureLevel ;
typedef TYPE_1__ DnsServer ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(DnsServer *VAR_1, DnsServerFeatureLevel VAR_2) {
        FUNC_0(VAR_1);

        if (VAR_2 < VAR_0)
                return;


        if (VAR_1->verified_feature_level >= VAR_0)
                VAR_1->verified_feature_level = VAR_0-1;

        VAR_1->packet_bad_opt = 1;
}
