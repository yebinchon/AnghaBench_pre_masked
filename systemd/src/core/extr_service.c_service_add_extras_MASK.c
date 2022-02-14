
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_17__ {TYPE_1__* manager; } ;
struct TYPE_15__ {int memory_oom_group; scalar_t__ delegate; } ;
struct TYPE_16__ {scalar_t__ type; scalar_t__ notify_access; scalar_t__ watchdog_usec; scalar_t__ n_fd_store_max; scalar_t__ oom_policy; TYPE_2__ cgroup_context; int exec_context; int timeout_start_usec; int start_timeout_defined; scalar_t__* exec_command; scalar_t__ bus_name; } ;
struct TYPE_14__ {scalar_t__ default_oom_policy; } ;
typedef TYPE_3__ Service ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 TYPE_4__* FUNC_0 (TYPE_3__*) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_4__*,int *) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_8(Service *VAR_11) {
        int VAR_12;

        FUNC_1(VAR_11);

        if (VAR_11->type == VAR_10) {

                if (VAR_11->bus_name)
                        VAR_11->type = VAR_4;
                else if (VAR_11->exec_command[VAR_5])
                        VAR_11->type = VAR_8;
                else
                        VAR_11->type = VAR_7;
        }


        if (VAR_11->type == VAR_7 && !VAR_11->start_timeout_defined)
                VAR_11->timeout_start_usec = VAR_9;

        FUNC_3(VAR_11);

        VAR_12 = FUNC_6(FUNC_0(VAR_11));
        if (VAR_12 < 0)
                return VAR_12;

        VAR_12 = FUNC_5(FUNC_0(VAR_11), &VAR_11->exec_context);
        if (VAR_12 < 0)
                return VAR_12;

        VAR_12 = FUNC_7(FUNC_0(VAR_11));
        if (VAR_12 < 0)
                return VAR_12;


        if (VAR_11->notify_access == VAR_1 &&
            (VAR_11->type == VAR_6 || VAR_11->watchdog_usec > 0 || VAR_11->n_fd_store_max > 0))
                VAR_11->notify_access = VAR_0;




        if (VAR_11->oom_policy < 0)
                VAR_11->oom_policy = VAR_11->cgroup_context.delegate ? VAR_2 : FUNC_0(VAR_11)->manager->default_oom_policy;


        VAR_11->cgroup_context.memory_oom_group = VAR_11->oom_policy == VAR_3;

        VAR_12 = FUNC_2(VAR_11);
        if (VAR_12 < 0)
                return VAR_12;

        VAR_12 = FUNC_4(VAR_11);
        if (VAR_12 < 0)
                return VAR_12;

        return 0;
}
