
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ usec_t ;
typedef int Unit ;
struct TYPE_6__ {scalar_t__ realtime; } ;
struct TYPE_7__ {scalar_t__ state; scalar_t__ on_clock_change; TYPE_1__ last_trigger; } ;
typedef TYPE_2__ Timer ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_6(Unit *VAR_2) {
        Timer *VAR_3 = FUNC_0(VAR_2);
        usec_t VAR_4;

        FUNC_1(VAR_2);

        if (VAR_3->state != VAR_1)
                return;





        VAR_4 = FUNC_3(VAR_0);
        if (VAR_3->last_trigger.realtime > VAR_4)
                VAR_3->last_trigger.realtime = VAR_4;

        if (VAR_3->on_clock_change) {
                FUNC_2(VAR_2, "Time change, triggering activation.");
                FUNC_4(VAR_3);
        } else {
                FUNC_2(VAR_2, "Time change, recalculating next elapse.");
                FUNC_5(VAR_3, 1);
        }
}
