
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ unit; TYPE_1__* manager; } ;
struct TYPE_5__ {int machine_units; } ;
typedef TYPE_2__ Machine ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

void FUNC_3(Machine *VAR_0) {
        FUNC_0(VAR_0);

        if (!VAR_0->unit)
                return;

        (void) FUNC_1(VAR_0->manager->machine_units, VAR_0->unit);
        VAR_0->unit = FUNC_2(VAR_0->unit);
}
