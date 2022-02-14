
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ possible_feature_level; int packet_bad_opt; int packet_rrsig_missing; scalar_t__ verified_feature_level; scalar_t__ n_failed_tcp; scalar_t__ n_failed_tls; scalar_t__ n_failed_udp; scalar_t__ packet_truncated; } ;
typedef scalar_t__ DnsServerFeatureLevel ;
typedef TYPE_1__ DnsServer ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,int ,int ) ;
 int FUNC_11 (char*,int ,int ) ;

DnsServerFeatureLevel FUNC_12(DnsServer *VAR_12) {
        DnsServerFeatureLevel VAR_13;

        FUNC_1(VAR_12);



        if (FUNC_5(VAR_12) != VAR_0)
                VAR_13 = FUNC_4(VAR_12) == VAR_2 ?
                        VAR_6 :
                        VAR_8;
        else
                VAR_13 = FUNC_4(VAR_12) == VAR_2 ?
                        VAR_5 :
                        VAR_9;



        if (VAR_12->possible_feature_level > VAR_13)
                VAR_12->possible_feature_level = VAR_13;

        if (VAR_12->possible_feature_level < VAR_13 && FUNC_6(VAR_12)) {

                VAR_12->possible_feature_level = VAR_13;

                FUNC_7(VAR_12);

                VAR_12->packet_bad_opt = 0;
                VAR_12->packet_rrsig_missing = 0;

                FUNC_10("Grace period over, resuming full feature set (%s) for DNS server %s.",
                         FUNC_2(VAR_12->possible_feature_level),
                         FUNC_8(VAR_12));

                FUNC_3(VAR_12);

        } else if (VAR_12->possible_feature_level <= VAR_12->verified_feature_level)
                VAR_12->possible_feature_level = VAR_12->verified_feature_level;
        else {
                DnsServerFeatureLevel VAR_14 = VAR_12->possible_feature_level;

                if (VAR_12->n_failed_tcp >= VAR_11 &&
                    VAR_12->possible_feature_level == VAR_7) {



                        FUNC_9("Reached maximum number of failed TCP connection attempts, trying UDP again...");
                        VAR_12->possible_feature_level = VAR_10;
                } else if (VAR_12->n_failed_tls > 0 &&
                           FUNC_0(VAR_12->possible_feature_level) && FUNC_4(VAR_12) != VAR_3) {




                        FUNC_9("Server doesn't support DNS-over-TLS, downgrading protocol...");
                        VAR_12->possible_feature_level--;
                } else if (VAR_12->packet_bad_opt &&
                           VAR_12->possible_feature_level >= VAR_5) {






                        FUNC_9("Server doesn't support EDNS(0) properly, downgrading feature level...");
                        VAR_12->possible_feature_level = VAR_10;

                } else if (VAR_12->packet_rrsig_missing &&
                           VAR_12->possible_feature_level >= VAR_4) {






                        FUNC_9("Detected server responses lack RRSIG records, downgrading feature level...");
                        VAR_12->possible_feature_level = FUNC_0(VAR_12->possible_feature_level) ? VAR_9 : VAR_5;

                } else if (VAR_12->n_failed_udp >= VAR_11 &&
                           VAR_12->possible_feature_level >= (FUNC_5(VAR_12) == VAR_1 ? VAR_6 : VAR_10)) {
                        FUNC_9("Lost too many UDP packets, downgrading feature level...");
                        VAR_12->possible_feature_level--;

                } else if (VAR_12->n_failed_tcp >= VAR_11 &&
                           VAR_12->packet_truncated &&
                           VAR_12->possible_feature_level > (FUNC_5(VAR_12) == VAR_1 ? VAR_6 : VAR_10)) {







                        FUNC_9("Got too many failed TCP connection failures and truncated UDP packets, downgrading feature level...");
                        VAR_12->possible_feature_level--;
                }

                if (VAR_14 != VAR_12->possible_feature_level) {


                        FUNC_7(VAR_12);

                        FUNC_11("Using degraded feature set (%s) for DNS server %s.",
                                    FUNC_2(VAR_12->possible_feature_level),
                                    FUNC_8(VAR_12));
                }
        }

        return VAR_12->possible_feature_level;
}
