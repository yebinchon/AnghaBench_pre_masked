
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int in_gc_queue; TYPE_1__* manager; scalar_t__ in_cleanup_queue; } ;
typedef TYPE_2__ Unit ;
struct TYPE_7__ {int gc_unit_queue; } ;


 int FUNC_0 (int ,int ,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_2__*) ;

void FUNC_3(Unit *VAR_1) {
        FUNC_1(VAR_1);

        if (VAR_1->in_gc_queue || VAR_1->in_cleanup_queue)
                return;

        if (!FUNC_2(VAR_1))
                return;

        FUNC_0(VAR_0, VAR_1->manager->gc_unit_queue, VAR_1);
        VAR_1->in_gc_queue = 1;
}
