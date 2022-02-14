
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {struct TYPE_12__* home; struct TYPE_12__* name; struct TYPE_12__* state_file; struct TYPE_12__* runtime_path; struct TYPE_12__* slice; struct TYPE_12__* runtime_dir_service; struct TYPE_12__* service; struct TYPE_12__* service_job; int timer_event_source; int uid; TYPE_1__* manager; scalar_t__ sessions; scalar_t__ in_gc_queue; } ;
typedef TYPE_2__ User ;
struct TYPE_11__ {int users; int user_units; int user_gc_queue; } ;


 int FUNC_0 (int ,int ,TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,TYPE_2__*,TYPE_2__*) ;
 TYPE_2__* FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;

User *FUNC_6(User *VAR_1) {
        if (!VAR_1)
                return ((void*)0);

        if (VAR_1->in_gc_queue)
                FUNC_0(VAR_0, VAR_1->manager->user_gc_queue, VAR_1);

        while (VAR_1->sessions)
                FUNC_5(VAR_1->sessions);

        if (VAR_1->service)
                FUNC_2(VAR_1->manager->user_units, VAR_1->service, VAR_1);

        if (VAR_1->runtime_dir_service)
                FUNC_2(VAR_1->manager->user_units, VAR_1->runtime_dir_service, VAR_1);

        if (VAR_1->slice)
                FUNC_2(VAR_1->manager->user_units, VAR_1->slice, VAR_1);

        FUNC_2(VAR_1->manager->users, FUNC_1(VAR_1->uid), VAR_1);

        (void) FUNC_4(VAR_1->timer_event_source);

        VAR_1->service_job = FUNC_3(VAR_1->service_job);

        VAR_1->service = FUNC_3(VAR_1->service);
        VAR_1->runtime_dir_service = FUNC_3(VAR_1->runtime_dir_service);
        VAR_1->slice = FUNC_3(VAR_1->slice);
        VAR_1->runtime_path = FUNC_3(VAR_1->runtime_path);
        VAR_1->state_file = FUNC_3(VAR_1->state_file);
        VAR_1->name = FUNC_3(VAR_1->name);
        VAR_1->home = FUNC_3(VAR_1->home);

        return FUNC_3(VAR_1);
}
