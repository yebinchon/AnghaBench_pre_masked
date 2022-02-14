
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ possible_feature_level; scalar_t__ n_failed_tcp; scalar_t__ packet_rrsig_missing; scalar_t__ packet_bad_opt; } ;
typedef TYPE_1__ DnsServer ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;

bool FUNC_1(DnsServer *VAR_2) {
        FUNC_0(VAR_2);



        if (VAR_2->possible_feature_level < VAR_0)
                return 0;

        if (VAR_2->packet_bad_opt)
                return 0;

        if (VAR_2->packet_rrsig_missing)
                return 0;


        if (VAR_2->n_failed_tcp >= VAR_1)
                return 0;

        return 1;
}
