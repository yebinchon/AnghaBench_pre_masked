
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int rules; int rules_foreign; } ;
typedef int RoutingPolicyRule ;
typedef TYPE_1__ Manager ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *) ;

int FUNC_6(Manager *VAR_2, RoutingPolicyRule *VAR_3) {
        int VAR_4;

        FUNC_0(VAR_2);

        if (FUNC_2(VAR_2->rules_foreign, VAR_3)) {
                FUNC_5(VAR_2->rules_foreign, VAR_3);

                VAR_4 = FUNC_3(&VAR_2->rules, &VAR_1);
                if (VAR_4 < 0)
                        return VAR_4;

                VAR_4 = FUNC_4(VAR_2->rules, VAR_3);
                if (VAR_4 < 0)
                        return VAR_4;
                if (VAR_4 == 0)
                        FUNC_1(VAR_3);
        }

        return -VAR_0;
}
