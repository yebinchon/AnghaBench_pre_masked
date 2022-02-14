
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ load_state; struct TYPE_6__* merged_into; } ;
typedef TYPE_1__ Unit ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

Unit* FUNC_2(Unit *VAR_1) {
        FUNC_0(VAR_1);

        while (VAR_1->load_state == VAR_0)
                FUNC_1(VAR_1 = VAR_1->merged_into);

        return VAR_1;
}
