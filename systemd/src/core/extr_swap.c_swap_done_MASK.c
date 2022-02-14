
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int Unit ;
struct TYPE_8__ {void* options; void* what; } ;
struct TYPE_9__ {int timer_event_source; int dynamic_creds; int * control_command; int exec_command; int exec_runtime; TYPE_1__ parameters_fragment; void* what; } ;
typedef TYPE_2__ Swap ;


 TYPE_2__* FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int) ;
 void* FUNC_5 (void*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*,int *) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_10(Unit *VAR_1) {
        Swap *VAR_2 = FUNC_0(VAR_1);

        FUNC_1(VAR_2);

        FUNC_8(VAR_2);
        FUNC_7(VAR_2, ((void*)0));

        VAR_2->what = FUNC_5(VAR_2->what);
        VAR_2->parameters_fragment.what = FUNC_5(VAR_2->parameters_fragment.what);
        VAR_2->parameters_fragment.options = FUNC_5(VAR_2->parameters_fragment.options);

        VAR_2->exec_runtime = FUNC_4(VAR_2->exec_runtime, 0);
        FUNC_3(VAR_2->exec_command, VAR_0);
        VAR_2->control_command = ((void*)0);

        FUNC_2(&VAR_2->dynamic_creds);

        FUNC_9(VAR_2);

        VAR_2->timer_event_source = FUNC_6(VAR_2->timer_event_source);
}
