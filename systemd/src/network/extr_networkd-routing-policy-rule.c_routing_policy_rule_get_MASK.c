
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int rules_foreign; int rules; } ;
typedef int RoutingPolicyRule ;
typedef TYPE_1__ Manager ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int * FUNC_1 (int ,int *) ;

int FUNC_2(Manager *VAR_1, RoutingPolicyRule *VAR_2, RoutingPolicyRule **VAR_3) {

        RoutingPolicyRule *VAR_4;

        FUNC_0(VAR_1);

        VAR_4 = FUNC_1(VAR_1->rules, VAR_2);
        if (VAR_4) {
                if (VAR_3)
                        *VAR_3 = VAR_4;
                return 1;
        }

        VAR_4 = FUNC_1(VAR_1->rules_foreign, VAR_2);
        if (VAR_4) {
                if (VAR_3)
                        *VAR_3 = VAR_4;
                return 0;
        }

        return -VAR_0;
}
