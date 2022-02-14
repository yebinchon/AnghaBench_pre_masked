
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int Unit ;
struct TYPE_9__ {void* exec_fd_event_source; void* timer_event_source; int accept_socket; int peer; void* usb_function_strings; void* usb_function_descriptors; void* bus_name_owner; void* bus_name; int success_status; int restart_force_status; int restart_prevent_status; int dynamic_creds; int * main_command; int * control_command; int exec_command; int exec_runtime; void* status_text; void* pid_file; } ;
typedef TYPE_1__ Service ;


 TYPE_1__* FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int *) ;
 void* FUNC_6 (void*) ;
 void* FUNC_7 (void*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,void*) ;

__attribute__((used)) static void FUNC_17(Unit *VAR_1) {
        Service *VAR_2 = FUNC_0(VAR_1);

        FUNC_1(VAR_2);

        VAR_2->pid_file = FUNC_6(VAR_2->pid_file);
        VAR_2->status_text = FUNC_6(VAR_2->status_text);

        VAR_2->exec_runtime = FUNC_4(VAR_2->exec_runtime, 0);
        FUNC_3(VAR_2->exec_command, VAR_0);
        VAR_2->control_command = ((void*)0);
        VAR_2->main_command = ((void*)0);

        FUNC_2(&VAR_2->dynamic_creds);

        FUNC_5(&VAR_2->restart_prevent_status);
        FUNC_5(&VAR_2->restart_force_status);
        FUNC_5(&VAR_2->success_status);



        FUNC_12(VAR_2);
        FUNC_11(VAR_2);
        FUNC_13(VAR_2);

        if (VAR_2->bus_name) {
                FUNC_16(VAR_1, VAR_2->bus_name);
                VAR_2->bus_name = FUNC_6(VAR_2->bus_name);
        }

        VAR_2->bus_name_owner = FUNC_6(VAR_2->bus_name_owner);

        VAR_2->usb_function_descriptors = FUNC_6(VAR_2->usb_function_descriptors);
        VAR_2->usb_function_strings = FUNC_6(VAR_2->usb_function_strings);

        FUNC_8(VAR_2);
        VAR_2->peer = FUNC_14(VAR_2->peer);

        FUNC_15(&VAR_2->accept_socket);

        FUNC_10(VAR_2);

        VAR_2->timer_event_source = FUNC_7(VAR_2->timer_event_source);
        VAR_2->exec_fd_event_source = FUNC_7(VAR_2->exec_fd_event_source);

        FUNC_9(VAR_1);
}
