
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t received_udp_packet_max; scalar_t__ packet_bad_opt; scalar_t__ packet_rrsig_missing; scalar_t__ n_failed_tcp; scalar_t__ possible_feature_level; scalar_t__ n_failed_tls; scalar_t__ n_failed_udp; } ;
typedef scalar_t__ DnsServerFeatureLevel ;
typedef TYPE_1__ DnsServer ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;

void FUNC_3(DnsServer *VAR_7, int VAR_8, DnsServerFeatureLevel VAR_9, size_t VAR_10) {
        FUNC_1(VAR_7);

        if (VAR_8 == VAR_6) {
                if (VAR_7->possible_feature_level == VAR_9)
                        VAR_7->n_failed_udp = 0;
        } else if (VAR_8 == VAR_5) {
                if (FUNC_0(VAR_9)) {
                        if (VAR_7->possible_feature_level == VAR_9)
                                VAR_7->n_failed_tls = 0;
                } else {
                        if (VAR_7->possible_feature_level == VAR_9)
                                VAR_7->n_failed_tcp = 0;


                        VAR_9 = VAR_3;
                }
        }


        if (VAR_7->packet_rrsig_missing && VAR_9 >= VAR_0)
                VAR_9 = FUNC_0(VAR_9) ? VAR_4 : VAR_1;


        if (VAR_7->packet_bad_opt && VAR_9 >= VAR_1)
                VAR_9 = VAR_1 - 1;



        if (VAR_9 == VAR_2)
                VAR_9 = VAR_2 - 1;

        FUNC_2(VAR_7, VAR_9);




        if (VAR_8 == VAR_6 && VAR_7->received_udp_packet_max < VAR_10)
                VAR_7->received_udp_packet_max = VAR_10;
}
