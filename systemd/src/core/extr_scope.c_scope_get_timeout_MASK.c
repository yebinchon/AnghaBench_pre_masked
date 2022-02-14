
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ usec_t ;
typedef int Unit ;
struct TYPE_3__ {int timer_event_source; } ;
typedef TYPE_1__ Scope ;


 TYPE_1__* FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,scalar_t__*) ;

__attribute__((used)) static int FUNC_2(Unit *VAR_1, usec_t *VAR_2) {
        Scope *VAR_3 = FUNC_0(VAR_1);
        usec_t VAR_4;
        int VAR_5;

        if (!VAR_3->timer_event_source)
                return 0;

        VAR_5 = FUNC_1(VAR_3->timer_event_source, &VAR_4);
        if (VAR_5 < 0)
                return VAR_5;
        if (VAR_4 == VAR_0)
                return 0;

        *VAR_2 = VAR_4;
        return 1;
}
