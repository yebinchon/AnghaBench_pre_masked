
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int Unit ;
struct TYPE_4__ {scalar_t__ state; scalar_t__ will_auto_restart; } ;
typedef TYPE_1__ Service ;


 TYPE_1__* FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static bool FUNC_3(Unit *VAR_1) {
        Service *VAR_2 = FUNC_0(VAR_1);

        FUNC_1(VAR_2);

        if (VAR_2->will_auto_restart)
                return 1;
        if (VAR_2->state == VAR_0)
                return 1;

        return FUNC_2(VAR_1);
}
