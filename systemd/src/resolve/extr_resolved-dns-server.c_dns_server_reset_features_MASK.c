
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int packet_bad_opt; int packet_rrsig_missing; int warned_downgrade; int features_grace_period_usec; int received_udp_packet_max; int possible_feature_level; int verified_feature_level; } ;
typedef TYPE_1__ DnsServer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(DnsServer *VAR_4) {
        FUNC_0(VAR_4);

        VAR_4->verified_feature_level = VAR_3;
        VAR_4->possible_feature_level = VAR_2;

        VAR_4->received_udp_packet_max = VAR_0;

        VAR_4->packet_bad_opt = 0;
        VAR_4->packet_rrsig_missing = 0;

        VAR_4->features_grace_period_usec = VAR_1;

        VAR_4->warned_downgrade = 0;

        FUNC_1(VAR_4);


        FUNC_2(VAR_4);
}
