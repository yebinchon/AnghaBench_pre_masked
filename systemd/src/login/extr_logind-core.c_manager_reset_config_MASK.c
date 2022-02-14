
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int n_autovts; int reserve_vt; int remove_ipc; int inhibit_delay_max; int user_stop_delay; int power_key_ignore_inhibited; int suspend_key_ignore_inhibited; int hibernate_key_ignore_inhibited; int lid_switch_ignore_inhibited; int holdoff_timeout_usec; int idle_action_usec; int sessions_max; int inhibitors_max; void* kill_exclude_users; void* kill_only_users; int kill_user_processes; int user_tasks_max; int runtime_dir_size; void* idle_action; void* handle_lid_switch_docked; int handle_lid_switch_ep; void* handle_lid_switch; int handle_hibernate_key; void* handle_suspend_key; int handle_power_key; } ;
typedef TYPE_1__ Manager ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (unsigned int,unsigned int) ;
 void* FUNC_2 (void*) ;
 int FUNC_3 (int ,unsigned int) ;

void FUNC_4(Manager *VAR_9) {
        FUNC_0(VAR_9);

        VAR_9->n_autovts = 6;
        VAR_9->reserve_vt = 6;
        VAR_9->remove_ipc = 1;
        VAR_9->inhibit_delay_max = 5 * VAR_7;
        VAR_9->user_stop_delay = 10 * VAR_7;

        VAR_9->handle_power_key = VAR_3;
        VAR_9->handle_suspend_key = VAR_4;
        VAR_9->handle_hibernate_key = VAR_1;
        VAR_9->handle_lid_switch = VAR_4;
        VAR_9->handle_lid_switch_ep = VAR_8;
        VAR_9->handle_lid_switch_docked = VAR_2;
        VAR_9->power_key_ignore_inhibited = 0;
        VAR_9->suspend_key_ignore_inhibited = 0;
        VAR_9->hibernate_key_ignore_inhibited = 0;
        VAR_9->lid_switch_ignore_inhibited = 1;

        VAR_9->holdoff_timeout_usec = 30 * VAR_7;

        VAR_9->idle_action_usec = 30 * VAR_6;
        VAR_9->idle_action = VAR_2;

        VAR_9->runtime_dir_size = FUNC_1(10U, 100U);
        VAR_9->user_tasks_max = FUNC_3(VAR_0, 100U);
        VAR_9->sessions_max = 8192;
        VAR_9->inhibitors_max = 8192;

        VAR_9->kill_user_processes = VAR_5;

        VAR_9->kill_only_users = FUNC_2(VAR_9->kill_only_users);
        VAR_9->kill_exclude_users = FUNC_2(VAR_9->kill_exclude_users);
}
