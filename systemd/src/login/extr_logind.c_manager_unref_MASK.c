
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int User ;
struct TYPE_6__ {int action_job; int wall_message; int scheduled_shutdown_tty; int scheduled_shutdown_type; int kill_exclude_users; int kill_only_users; int reserve_vt_fd; int event; int bus; int polkit_registry; scalar_t__ unlink_nologin; int device_button_monitor; int device_vcsa_monitor; int device_monitor; int device_seat_monitor; int console_active_fd; int utmp_event_source; int lid_switch_ignore_event_source; int console_active_event_source; int wall_message_timeout_source; int nologin_timeout_source; int scheduled_shutdown_timeout_source; int inhibit_timeout_source; int idle_action_event_source; int session_units; int user_units; int brightness_writers; int buttons; int inhibitors; int users; int sessions_by_leader; int sessions; int seats; int devices; } ;
typedef int Session ;
typedef int Seat ;
typedef TYPE_1__ Manager ;
typedef int Inhibitor ;
typedef int Device ;
typedef int Button ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 TYPE_1__* FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static Manager* FUNC_18(Manager *VAR_0) {
        Session *VAR_1;
        User *VAR_2;
        Device *VAR_3;
        Seat *VAR_4;
        Inhibitor *VAR_5;
        Button *VAR_6;

        if (!VAR_0)
                return ((void*)0);

        while ((VAR_1 = FUNC_4(VAR_0->sessions)))
                FUNC_14(VAR_1);

        while ((VAR_2 = FUNC_4(VAR_0->users)))
                FUNC_17(VAR_2);

        while ((VAR_3 = FUNC_4(VAR_0->devices)))
                FUNC_2(VAR_3);

        while ((VAR_4 = FUNC_4(VAR_0->seats)))
                FUNC_13(VAR_4);

        while ((VAR_5 = FUNC_4(VAR_0->inhibitors)))
                FUNC_6(VAR_5);

        while ((VAR_6 = FUNC_4(VAR_0->buttons)))
                FUNC_1(VAR_6);

        FUNC_5(VAR_0->devices);
        FUNC_5(VAR_0->seats);
        FUNC_5(VAR_0->sessions);
        FUNC_5(VAR_0->sessions_by_leader);
        FUNC_5(VAR_0->users);
        FUNC_5(VAR_0->inhibitors);
        FUNC_5(VAR_0->buttons);
        FUNC_5(VAR_0->brightness_writers);

        FUNC_5(VAR_0->user_units);
        FUNC_5(VAR_0->session_units);

        FUNC_11(VAR_0->idle_action_event_source);
        FUNC_11(VAR_0->inhibit_timeout_source);
        FUNC_11(VAR_0->scheduled_shutdown_timeout_source);
        FUNC_11(VAR_0->nologin_timeout_source);
        FUNC_11(VAR_0->wall_message_timeout_source);

        FUNC_11(VAR_0->console_active_event_source);
        FUNC_11(VAR_0->lid_switch_ignore_event_source);





        FUNC_8(VAR_0->console_active_fd);

        FUNC_10(VAR_0->device_seat_monitor);
        FUNC_10(VAR_0->device_monitor);
        FUNC_10(VAR_0->device_vcsa_monitor);
        FUNC_10(VAR_0->device_button_monitor);

        if (VAR_0->unlink_nologin)
                (void) FUNC_16("/run/nologin");

        FUNC_0(VAR_0->polkit_registry);

        FUNC_9(VAR_0->bus);
        FUNC_12(VAR_0->event);

        FUNC_8(VAR_0->reserve_vt_fd);

        FUNC_15(VAR_0->kill_only_users);
        FUNC_15(VAR_0->kill_exclude_users);

        FUNC_3(VAR_0->scheduled_shutdown_type);
        FUNC_3(VAR_0->scheduled_shutdown_tty);
        FUNC_3(VAR_0->wall_message);
        FUNC_3(VAR_0->action_job);

        return FUNC_7(VAR_0);
}
