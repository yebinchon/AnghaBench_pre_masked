
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int in_stop_when_unneeded_queue; TYPE_1__* manager; int stop_when_unneeded; } ;
typedef TYPE_2__ Unit ;
struct TYPE_7__ {int stop_when_unneeded_queue; } ;


 int FUNC_0 (int ,int ,TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_2__*) ;

void FUNC_4(Unit *VAR_1) {
        FUNC_2(VAR_1);

        if (VAR_1->in_stop_when_unneeded_queue)
                return;

        if (!VAR_1->stop_when_unneeded)
                return;

        if (!FUNC_1(FUNC_3(VAR_1)))
                return;

        FUNC_0(VAR_0, VAR_1->manager->stop_when_unneeded_queue, VAR_1);
        VAR_1->in_stop_when_unneeded_queue = 1;
}
