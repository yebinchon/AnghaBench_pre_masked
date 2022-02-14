
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_8__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int jobs; } ;
struct TYPE_10__ {TYPE_1__* job; TYPE_1__* nop_job; } ;
struct TYPE_9__ {int installed; scalar_t__ type; int id; TYPE_8__* manager; TYPE_2__* unit; } ;
typedef TYPE_1__ Job ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_8__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int ,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;

void FUNC_8(Job *VAR_2) {
        Job **VAR_3;

        FUNC_2(VAR_2->installed);

        FUNC_5(VAR_2, VAR_1);

        VAR_3 = (VAR_2->type == VAR_0) ? &VAR_2->unit->nop_job : &VAR_2->unit->job;
        FUNC_2(*VAR_3 == VAR_2);




        if (!FUNC_0(VAR_2->manager))
                FUNC_3(VAR_2);

        *VAR_3 = ((void*)0);

        FUNC_7(VAR_2->unit);

        FUNC_6(VAR_2->unit);

        FUNC_4(VAR_2->manager->jobs, FUNC_1(VAR_2->id), VAR_2);
        VAR_2->installed = 0;
}
