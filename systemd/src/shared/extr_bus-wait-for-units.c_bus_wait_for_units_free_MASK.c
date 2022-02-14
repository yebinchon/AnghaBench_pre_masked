
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int bus; int slot_disconnected; } ;
typedef TYPE_1__ BusWaitForUnits ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

BusWaitForUnits* FUNC_4(BusWaitForUnits *VAR_0) {
        if (!VAR_0)
                return ((void*)0);

        FUNC_0(VAR_0);
        FUNC_2(VAR_0->slot_disconnected);
        FUNC_3(VAR_0->bus);

        return FUNC_1(VAR_0);
}
