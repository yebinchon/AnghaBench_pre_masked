
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int Unit ;
struct TYPE_5__ {int timer_event_source; int dynamic_creds; int * control_command; int exec_command; int exec_runtime; int parameters_fragment; int parameters_proc_self_mountinfo; int where; } ;
typedef TYPE_1__ Mount ;


 TYPE_1__* FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(Unit *VAR_1) {
        Mount *VAR_2 = FUNC_0(VAR_1);

        FUNC_1(VAR_2);

        VAR_2->where = FUNC_5(VAR_2->where);

        FUNC_6(&VAR_2->parameters_proc_self_mountinfo);
        FUNC_6(&VAR_2->parameters_fragment);

        VAR_2->exec_runtime = FUNC_4(VAR_2->exec_runtime, 0);
        FUNC_3(VAR_2->exec_command, VAR_0);
        VAR_2->control_command = ((void*)0);

        FUNC_2(&VAR_2->dynamic_creds);

        FUNC_7(VAR_2);

        VAR_2->timer_event_source = FUNC_8(VAR_2->timer_event_source);
}
