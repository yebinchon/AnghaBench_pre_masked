
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int in_gc_queue; TYPE_1__* manager; } ;
struct TYPE_6__ {int machine_gc_queue; } ;
typedef TYPE_2__ Machine ;


 int FUNC_0 (int ,int ,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;

void FUNC_2(Machine *VAR_1) {
        FUNC_1(VAR_1);

        if (VAR_1->in_gc_queue)
                return;

        FUNC_0(VAR_0, VAR_1->manager->machine_gc_queue, VAR_1);
        VAR_1->in_gc_queue = 1;
}
