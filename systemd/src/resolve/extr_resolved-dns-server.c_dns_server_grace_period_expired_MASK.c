
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ usec_t ;
struct TYPE_4__ {scalar_t__ verified_usec; int features_grace_period_usec; int event; struct TYPE_4__* manager; } ;
typedef TYPE_1__ DnsServer ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,int ,scalar_t__*) ;

__attribute__((used)) static bool FUNC_5(DnsServer *VAR_1) {
        usec_t VAR_2;

        FUNC_1(VAR_1);
        FUNC_1(VAR_1->manager);

        if (VAR_1->verified_usec == 0)
                return 0;

        FUNC_2(FUNC_4(VAR_1->manager->event, FUNC_3(), &VAR_2) >= 0);

        if (VAR_1->verified_usec + VAR_1->features_grace_period_usec > VAR_2)
                return 0;

        VAR_1->features_grace_period_usec = FUNC_0(VAR_1->features_grace_period_usec * 2, VAR_0);

        return 1;
}
