
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int in_gc_queue; TYPE_2__* unit; } ;
struct TYPE_9__ {TYPE_1__* manager; } ;
struct TYPE_8__ {int gc_job_queue; } ;
typedef TYPE_3__ Job ;


 int FUNC_0 (int ,int ,TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_3__*) ;

void FUNC_3(Job *VAR_1) {
        FUNC_1(VAR_1);

        if (VAR_1->in_gc_queue)
                return;

        if (!FUNC_2(VAR_1))
                return;

        FUNC_0(VAR_0, VAR_1->unit->manager->gc_job_queue, VAR_1);
        VAR_1->in_gc_queue = 1;
}
