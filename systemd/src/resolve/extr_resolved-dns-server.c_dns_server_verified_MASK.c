
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ verified_feature_level; int verified_usec; TYPE_1__* manager; } ;
struct TYPE_6__ {int event; } ;
typedef scalar_t__ DnsServerFeatureLevel ;
typedef TYPE_2__ DnsServer ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (char*,int ,int ) ;
 scalar_t__ FUNC_6 (int ,int ,int *) ;

__attribute__((used)) static void FUNC_7(DnsServer *VAR_0, DnsServerFeatureLevel VAR_1) {
        FUNC_0(VAR_0);

        if (VAR_0->verified_feature_level > VAR_1)
                return;

        if (VAR_0->verified_feature_level != VAR_1) {
                FUNC_5("Verified we get a response at feature level %s from DNS server %s.",
                          FUNC_3(VAR_1),
                          FUNC_4(VAR_0));
                VAR_0->verified_feature_level = VAR_1;
        }

        FUNC_1(FUNC_6(VAR_0->manager->event, FUNC_2(), &VAR_0->verified_usec) >= 0);
}
