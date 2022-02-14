
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int umask; int syslog_priority; int syslog_level_prefix; int ignore_sigpipe; int log_level_max; int numa_policy; scalar_t__ restrict_namespaces; int capability_bounding_set; int timeout_clean_usec; TYPE_1__* directories; int personality; int timer_slack_nsec; int cpu_sched_policy; int ioprio; } ;
struct TYPE_5__ {int mode; } ;
typedef size_t ExecDirectoryType ;
typedef TYPE_2__ ExecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;

void FUNC_4(ExecContext *VAR_11) {
        ExecDirectoryType VAR_12;

        FUNC_1(VAR_11);

        VAR_11->umask = 0022;
        VAR_11->ioprio = FUNC_0(VAR_1, 0);
        VAR_11->cpu_sched_policy = VAR_8;
        VAR_11->syslog_priority = VAR_2|VAR_3;
        VAR_11->syslog_level_prefix = 1;
        VAR_11->ignore_sigpipe = 1;
        VAR_11->timer_slack_nsec = VAR_6;
        VAR_11->personality = VAR_7;
        for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++)
                VAR_11->directories[VAR_12].mode = 0755;
        VAR_11->timeout_clean_usec = VAR_9;
        VAR_11->capability_bounding_set = VAR_0;
        FUNC_2(VAR_5 != VAR_4);
        VAR_11->restrict_namespaces = VAR_5;
        VAR_11->log_level_max = -1;
        FUNC_3(&VAR_11->numa_policy);
}
