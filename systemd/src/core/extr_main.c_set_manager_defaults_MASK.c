
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int default_oom_policy; int default_tasks_max; int default_tasks_accounting; int default_memory_accounting; int default_blockio_accounting; int default_ip_accounting; int default_io_accounting; scalar_t__ default_cpu_accounting; int default_start_limit_burst; int default_start_limit_interval; int default_restart_usec; int default_timeout_abort_set; int default_timeout_abort_usec; int default_timeout_stop_usec; int default_timeout_start_usec; int default_std_error; int default_std_output; int default_timer_accuracy_usec; } ;
typedef TYPE_1__ Manager ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
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
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_5(Manager *VAR_20) {

        FUNC_0(VAR_20);





        VAR_20->default_timer_accuracy_usec = VAR_19;
        VAR_20->default_std_output = VAR_12;
        VAR_20->default_std_error = VAR_11;
        VAR_20->default_timeout_start_usec = VAR_17;
        VAR_20->default_timeout_stop_usec = VAR_18;
        VAR_20->default_timeout_abort_usec = VAR_16;
        VAR_20->default_timeout_abort_set = VAR_15;
        VAR_20->default_restart_usec = VAR_7;
        VAR_20->default_start_limit_interval = VAR_10;
        VAR_20->default_start_limit_burst = VAR_9;



        if (VAR_1 >= 0)
                VAR_20->default_cpu_accounting = VAR_1;
        else
                VAR_20->default_cpu_accounting = FUNC_1();

        VAR_20->default_io_accounting = VAR_3;
        VAR_20->default_ip_accounting = VAR_4;
        VAR_20->default_blockio_accounting = VAR_0;
        VAR_20->default_memory_accounting = VAR_5;
        VAR_20->default_tasks_accounting = VAR_13;
        VAR_20->default_tasks_max = VAR_14;
        VAR_20->default_oom_policy = VAR_6;

        (void) FUNC_3(VAR_20, VAR_8);

        (void) FUNC_2(VAR_20);
        (void) FUNC_4(VAR_20, VAR_2);
}
