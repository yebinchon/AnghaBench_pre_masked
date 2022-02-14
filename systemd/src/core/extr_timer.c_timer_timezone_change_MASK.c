
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int Unit ;
struct TYPE_5__ {scalar_t__ state; scalar_t__ on_timezone_change; } ;
typedef TYPE_1__ Timer ;


 TYPE_1__* FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_5(Unit *VAR_1) {
        Timer *VAR_2 = FUNC_0(VAR_1);

        FUNC_1(VAR_1);

        if (VAR_2->state != VAR_0)
                return;

        if (VAR_2->on_timezone_change) {
                FUNC_2(VAR_1, "Timezone change, triggering activation.");
                FUNC_3(VAR_2);
        } else {
                FUNC_2(VAR_1, "Timezone change, recalculating next elapse.");
                FUNC_4(VAR_2, 0);
        }
}
