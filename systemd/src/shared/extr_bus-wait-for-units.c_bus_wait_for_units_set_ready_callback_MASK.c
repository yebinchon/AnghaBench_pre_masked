
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int bus_wait_for_units_ready_callback ;
struct TYPE_4__ {void* userdata; int ready_callback; } ;
typedef TYPE_1__ BusWaitForUnits ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(BusWaitForUnits *VAR_0, bus_wait_for_units_ready_callback VAR_1, void *VAR_2) {
        FUNC_0(VAR_0);

        VAR_0->ready_callback = VAR_1;
        VAR_0->userdata = VAR_2;
}
