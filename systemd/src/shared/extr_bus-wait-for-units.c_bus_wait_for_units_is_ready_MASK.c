
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int items; int bus; } ;
typedef TYPE_1__ BusWaitForUnits ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(BusWaitForUnits *VAR_0) {
        FUNC_0(VAR_0);

        if (!VAR_0->bus)
                return 1;

        return FUNC_1(VAR_0->items);
}
