
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int UnitActiveState ;
struct TYPE_18__ {int manager; scalar_t__ job; } ;
struct TYPE_17__ {size_t state; scalar_t__ type; scalar_t__ reload_result; scalar_t__ result; scalar_t__ will_auto_restart; void* exec_fd_event_source; int control_command_id; int * control_command; int * main_command; void* timer_event_source; } ;
typedef size_t ServiceState ;
typedef TYPE_1__ Service ;


 scalar_t__ FUNC_0 (size_t,size_t,size_t,size_t,...) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 TYPE_2__* FUNC_2 (TYPE_1__*) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (TYPE_2__*,char*,int ,int ) ;
 void* FUNC_6 (void*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (size_t) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int * VAR_25 ;
 int * VAR_26 ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*,int const,int const,int) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_17(Service *VAR_27, ServiceState VAR_28) {
        ServiceState VAR_29;
        const UnitActiveState *VAR_30;

        FUNC_3(VAR_27);

        if (VAR_27->state != VAR_28)
                FUNC_4(FUNC_2(VAR_27), 0);

        VAR_30 = VAR_27->type == VAR_8 ? VAR_26 : VAR_25;

        VAR_29 = VAR_27->state;
        VAR_27->state = VAR_28;

        FUNC_12(VAR_27);

        if (!FUNC_0(VAR_28,
                    VAR_2, VAR_14, VAR_12, VAR_13,
                    VAR_10,
                    VAR_9,
                    VAR_15, VAR_19, VAR_18, VAR_17, VAR_16,
                    VAR_7, VAR_6,
                    VAR_0,
                    VAR_1))
                VAR_27->timer_event_source = FUNC_6(VAR_27->timer_event_source);

        if (!FUNC_0(VAR_28,
                    VAR_12, VAR_13,
                    VAR_10, VAR_9,
                    VAR_15, VAR_19, VAR_18, VAR_17, VAR_16,
                    VAR_7, VAR_6)) {
                FUNC_11(VAR_27);
                VAR_27->main_command = ((void*)0);
        }

        if (!FUNC_0(VAR_28,
                    VAR_2, VAR_14, VAR_12, VAR_13,
                    VAR_9,
                    VAR_15, VAR_19, VAR_18, VAR_17, VAR_16,
                    VAR_7, VAR_6,
                    VAR_1)) {
                FUNC_10(VAR_27);
                VAR_27->control_command = ((void*)0);
                VAR_27->control_command_id = VAR_24;
        }

        if (FUNC_0(VAR_28, VAR_3, VAR_5, VAR_0)) {
                FUNC_16(FUNC_2(VAR_27));
                FUNC_13(FUNC_2(VAR_27));
        }

        if (!FUNC_0(VAR_28,
                    VAR_2, VAR_14, VAR_12, VAR_13,
                    VAR_10, VAR_9,
                    VAR_15, VAR_19, VAR_18, VAR_17, VAR_16,
                    VAR_7, VAR_6) &&
            !(VAR_28 == VAR_3 && FUNC_2(VAR_27)->job))
                FUNC_7(VAR_27);

        if (VAR_28 != VAR_12)
                VAR_27->exec_fd_event_source = FUNC_6(VAR_27->exec_fd_event_source);

        if (!FUNC_0(VAR_28, VAR_13, VAR_10, VAR_9))
                FUNC_9(VAR_27);



        if (VAR_28 == VAR_4 && !FUNC_1(FUNC_2(VAR_27)->manager))
                FUNC_15(FUNC_2(VAR_27));

        if (VAR_29 != VAR_28)
                FUNC_5(FUNC_2(VAR_27), "Changed %s -> %s", FUNC_8(VAR_29), FUNC_8(VAR_28));

        FUNC_14(FUNC_2(VAR_27), VAR_30[VAR_29], VAR_30[VAR_28],
                    (VAR_27->reload_result == VAR_20 ? 0 : VAR_21) |
                    (VAR_27->will_auto_restart ? VAR_23 : 0) |
                    (VAR_27->result == VAR_11 ? VAR_22 : 0));
}
