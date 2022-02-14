
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int Unit ;
struct TYPE_6__ {scalar_t__ type; TYPE_1__* manager; scalar_t__ id; } ;
struct TYPE_5__ {int current_job_id; } ;
typedef scalar_t__ JobType ;
typedef TYPE_2__ Job ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (int *) ;

Job* FUNC_2(Unit *VAR_1, JobType VAR_2) {
        Job *VAR_3;

        FUNC_0(VAR_2 < VAR_0);

        VAR_3 = FUNC_1(VAR_1);
        if (!VAR_3)
                return ((void*)0);

        VAR_3->id = VAR_3->manager->current_job_id++;
        VAR_3->type = VAR_2;



        return VAR_3;
}
