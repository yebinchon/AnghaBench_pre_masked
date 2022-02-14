
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int userdata; int bus_path; int (* unit_callback ) (TYPE_2__*,int ,int,int ) ;} ;
typedef TYPE_1__ WaitForItem ;
struct TYPE_9__ {int items; TYPE_1__* current; int bus; int slot_disconnected; } ;
typedef TYPE_2__ BusWaitForUnits ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*,int ,int,int ) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_7(BusWaitForUnits *VAR_0) {
        WaitForItem *VAR_1;

        FUNC_0(VAR_0);

        VAR_0->slot_disconnected = FUNC_3(VAR_0->slot_disconnected);
        VAR_0->bus = FUNC_4(VAR_0->bus);

        while ((VAR_1 = FUNC_1(VAR_0->items))) {
                VAR_0->current = VAR_1;

                VAR_1->unit_callback(VAR_0, VAR_1->bus_path, 0, VAR_1->userdata);
                FUNC_6(VAR_1);
        }

        VAR_0->items = FUNC_2(VAR_0->items);
}
