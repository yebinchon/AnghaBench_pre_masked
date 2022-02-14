
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ verified_feature_level; scalar_t__ possible_feature_level; } ;
typedef scalar_t__ DnsServerFeatureLevel ;
typedef TYPE_1__ DnsServer ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*,int ) ;

void FUNC_4(DnsServer *VAR_0, DnsServerFeatureLevel VAR_1) {
        FUNC_0(VAR_0);





        if (VAR_0->verified_feature_level > VAR_1)
                VAR_0->verified_feature_level = VAR_1;

        if (VAR_0->possible_feature_level > VAR_1) {
                VAR_0->possible_feature_level = VAR_1;
                FUNC_1(VAR_0);
        }

        FUNC_3("Downgrading transaction feature level fixed an RCODE error, downgrading server %s too.", FUNC_2(VAR_0));
}
