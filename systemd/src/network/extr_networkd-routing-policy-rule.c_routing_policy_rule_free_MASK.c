
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {struct TYPE_12__* oif; struct TYPE_12__* iif; scalar_t__ section; TYPE_2__* manager; TYPE_1__* network; } ;
struct TYPE_11__ {int rules_foreign; int rules; } ;
struct TYPE_10__ {scalar_t__ n_rules; int rules_by_section; int rules; } ;
typedef TYPE_3__ RoutingPolicyRule ;


 int FUNC_0 (int ,int ,TYPE_3__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_0 ;
 TYPE_3__* FUNC_5 (int ,TYPE_3__*) ;
 int FUNC_6 (int ,TYPE_3__*) ;

void FUNC_7(RoutingPolicyRule *VAR_1) {

        if (!VAR_1)
                return;

        if (VAR_1->network) {
                FUNC_0(VAR_0, VAR_1->network->rules, VAR_1);
                FUNC_1(VAR_1->network->n_rules > 0);
                VAR_1->network->n_rules--;

                if (VAR_1->section)
                        FUNC_3(VAR_1->network->rules_by_section, VAR_1->section);
        }

        if (VAR_1->manager) {
                if (FUNC_5(VAR_1->manager->rules, VAR_1) == VAR_1)
                        FUNC_6(VAR_1->manager->rules, VAR_1);
                if (FUNC_5(VAR_1->manager->rules_foreign, VAR_1) == VAR_1)
                        FUNC_6(VAR_1->manager->rules_foreign, VAR_1);
        }

        FUNC_4(VAR_1->section);
        FUNC_2(VAR_1->iif);
        FUNC_2(VAR_1->oif);
        FUNC_2(VAR_1);
}
