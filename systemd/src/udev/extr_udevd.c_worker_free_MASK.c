
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct worker {int event; int monitor; int pid; TYPE_1__* manager; } ;
struct TYPE_2__ {int workers; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct worker*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct worker *VAR_0) {
        if (!VAR_0)
                return;

        FUNC_1(VAR_0->manager);

        FUNC_4(VAR_0->manager->workers, FUNC_0(VAR_0->pid));
        FUNC_5(VAR_0->monitor);
        FUNC_2(VAR_0->event);

        FUNC_3(VAR_0);
}
