
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int UnitActiveState ;
struct TYPE_9__ {scalar_t__ load_state; } ;
typedef TYPE_1__ Unit ;
struct TYPE_10__ {int (* active_state ) (TYPE_1__*) ;} ;


 scalar_t__ VAR_0 ;
 TYPE_7__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (TYPE_1__*) ;

UnitActiveState FUNC_4(Unit *VAR_1) {
        FUNC_1(VAR_1);

        if (VAR_1->load_state == VAR_0)
                return FUNC_4(FUNC_3(VAR_1));





        return FUNC_0(VAR_1)->active_state(VAR_1);
}
