
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ state; scalar_t__ reload_result; int control_command_id; int * control_command; int timer_event_source; } ;
typedef scalar_t__ MountState ;
typedef TYPE_1__ Mount ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,char*,int ,int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ) ;
 int * VAR_3 ;
 int FUNC_8 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_9(Mount *VAR_4, MountState VAR_5) {
        MountState VAR_6;
        FUNC_2(VAR_4);

        if (VAR_4->state != VAR_5)
                FUNC_3(FUNC_1(VAR_4), 0);

        VAR_6 = VAR_4->state;
        VAR_4->state = VAR_5;

        if (!FUNC_0(VAR_5)) {
                VAR_4->timer_event_source = FUNC_7(VAR_4->timer_event_source);
                FUNC_6(VAR_4);
                VAR_4->control_command = ((void*)0);
                VAR_4->control_command_id = VAR_2;
        }

        if (VAR_5 != VAR_6)
                FUNC_4(FUNC_1(VAR_4), "Changed %s -> %s", FUNC_5(VAR_6), FUNC_5(VAR_5));

        FUNC_8(FUNC_1(VAR_4), VAR_3[VAR_6], VAR_3[VAR_5],
                    VAR_4->reload_result == VAR_0 ? 0 : VAR_1);
}
