
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ type; char* ifname; int received_udp_packet_max; int n_failed_udp; char* n_failed_tcp; int packet_bad_opt; int packet_truncated; int packet_rrsig_missing; int possible_feature_level; int verified_feature_level; struct TYPE_7__* link; } ;
typedef int FILE ;
typedef TYPE_1__ DnsServer ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 char* FUNC_4 (TYPE_1__*) ;
 char* FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,char*,int,int,char*,char*,char*,char*) ;
 int FUNC_8 (char,int *) ;
 int FUNC_9 (char*,int *) ;
 int * VAR_1 ;
 char* FUNC_10 (int ) ;
 char* FUNC_11 (int ) ;

void FUNC_12(DnsServer *VAR_2, FILE *VAR_3) {
        FUNC_0(VAR_2);

        if (!VAR_3)
                VAR_3 = VAR_1;

        FUNC_9("[Server ", VAR_3);
        FUNC_9(FUNC_4(VAR_2), VAR_3);
        FUNC_9(" type=", VAR_3);
        FUNC_9(FUNC_5(VAR_2->type), VAR_3);

        if (VAR_2->type == VAR_0) {
                FUNC_0(VAR_2->link);

                FUNC_9(" interface=", VAR_3);
                FUNC_9(VAR_2->link->ifname, VAR_3);
        }

        FUNC_9("]\n", VAR_3);

        FUNC_9("\tVerified feature level: ", VAR_3);
        FUNC_9(FUNC_10(FUNC_2(VAR_2->verified_feature_level)), VAR_3);
        FUNC_8('\n', VAR_3);

        FUNC_9("\tPossible feature level: ", VAR_3);
        FUNC_9(FUNC_10(FUNC_2(VAR_2->possible_feature_level)), VAR_3);
        FUNC_8('\n', VAR_3);

        FUNC_9("\tDNSSEC Mode: ", VAR_3);
        FUNC_9(FUNC_10(FUNC_6(FUNC_3(VAR_2))), VAR_3);
        FUNC_8('\n', VAR_3);

        FUNC_9("\tCan do DNSSEC: ", VAR_3);
        FUNC_9(FUNC_11(FUNC_1(VAR_2)), VAR_3);
        FUNC_8('\n', VAR_3);

        FUNC_7(VAR_3,
                "\tMaximum UDP packet size received: %zu\n"
                "\tFailed UDP attempts: %u\n"
                "\tFailed TCP attempts: %u\n"
                "\tSeen truncated packet: %s\n"
                "\tSeen OPT RR getting lost: %s\n"
                "\tSeen RRSIG RR missing: %s\n",
                VAR_2->received_udp_packet_max,
                VAR_2->n_failed_udp,
                VAR_2->n_failed_tcp,
                FUNC_11(VAR_2->packet_truncated),
                FUNC_11(VAR_2->packet_bad_opt),
                FUNC_11(VAR_2->packet_rrsig_missing));
}
