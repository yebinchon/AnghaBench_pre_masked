
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int swaps_by_devnode; int proc_swaps; int swap_event_source; } ;
typedef TYPE_1__ Manager ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(Manager *VAR_0) {
        FUNC_0(VAR_0);

        VAR_0->swap_event_source = FUNC_3(VAR_0->swap_event_source);
        VAR_0->proc_swaps = FUNC_2(VAR_0->proc_swaps);
        VAR_0->swaps_by_devnode = FUNC_1(VAR_0->swaps_by_devnode);
}
