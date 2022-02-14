
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int reset_accounting; } ;
typedef TYPE_1__ Unit ;
struct TYPE_13__ {scalar_t__ state; int main_pid_known; int main_pid_alien; int forbid_restart; int watchdog_override_enable; int flush_n_restarts; scalar_t__ n_restarts; int main_exec_status; int exec_command; int watchdog_override_usec; int watchdog_usec; int watchdog_original_usec; int notify_state; scalar_t__ status_errno; int status_text; void* reload_result; void* result; } ;
typedef TYPE_2__ Service ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (scalar_t__,int ,int ,...) ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 void* VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int ,int) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_10(Unit *VAR_21) {
        Service *VAR_22 = FUNC_1(VAR_21);
        int VAR_23;

        FUNC_2(VAR_22);



        if (FUNC_0(VAR_22->state,
                   VAR_13, VAR_17, VAR_16, VAR_15, VAR_14,
                   VAR_9, VAR_8, VAR_3))
                return -VAR_0;


        if (FUNC_0(VAR_22->state, VAR_4, VAR_12, VAR_10, VAR_11))
                return 0;
        if (VAR_22->state == VAR_2)
                return -VAR_0;

        FUNC_2(FUNC_0(VAR_22->state, VAR_5, VAR_6));


        VAR_23 = FUNC_9(VAR_21);
        if (VAR_23 < 0) {
                FUNC_7(VAR_22, VAR_7, 0);
                return VAR_23;
        }

        VAR_23 = FUNC_8(VAR_21);
        if (VAR_23 < 0)
                return VAR_23;

        VAR_22->result = VAR_18;
        VAR_22->reload_result = VAR_18;
        VAR_22->main_pid_known = 0;
        VAR_22->main_pid_alien = 0;
        VAR_22->forbid_restart = 0;

        VAR_22->status_text = FUNC_5(VAR_22->status_text);
        VAR_22->status_errno = 0;

        VAR_22->notify_state = VAR_1;

        VAR_22->watchdog_original_usec = VAR_22->watchdog_usec;
        VAR_22->watchdog_override_enable = 0;
        VAR_22->watchdog_override_usec = VAR_19;

        FUNC_3(VAR_22->exec_command, VAR_20);
        FUNC_4(&VAR_22->main_exec_status);


        if (VAR_22->flush_n_restarts) {
                VAR_22->n_restarts = 0;
                VAR_22->flush_n_restarts = 0;
        }

        VAR_21->reset_accounting = 1;

        FUNC_6(VAR_22);
        return 1;
}
