
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef size_t UnitType ;
struct TYPE_17__ {int (* shutdown ) (TYPE_1__*) ;} ;
struct TYPE_16__ {struct TYPE_16__** prefix; int gid_refs; int uid_refs; int units_requiring_mounts_for; int rlimit; int switch_root_init; int switch_root; int cgroup_unit; int client_environment; int transient_environment; int lookup_paths; int notify_socket; int event; int user_lookup_fds; int time_change_fd; int cgroups_agent_fd; int notify_fd; int signal_fd; int sync_bus_names_event_source; int user_lookup_event_source; int run_queue_event_source; int jobs_in_progress_event_source; int timezone_change_event_source; int time_change_event_source; int cgroups_agent_event_source; int notify_event_source; int sigchld_event_source; int signal_event_source; int failed_units; int startup_units; int run_queue; int watch_bus; int watch_pids; int jobs; int units_by_invocation_id; int units; int dynamic_users; int exec_runtime_by_id; int objective; } ;
typedef TYPE_1__ Manager ;
typedef size_t ExecDirectoryType ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (TYPE_1__*) ;
 TYPE_2__** VAR_7 ;

Manager* FUNC_25(Manager *VAR_8) {
        ExecDirectoryType VAR_9;
        UnitType VAR_10;

        if (!VAR_8)
                return ((void*)0);

        FUNC_10(VAR_8);

        for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++)
                if (VAR_7[VAR_10]->shutdown)
                        VAR_7[VAR_10]->shutdown(VAR_8);


        FUNC_14(VAR_8, FUNC_0(VAR_8->objective, VAR_0, VAR_4, VAR_3, VAR_1, VAR_2));

        FUNC_8(&VAR_8->lookup_paths);

        FUNC_2(VAR_8);

        FUNC_4(VAR_8);
        FUNC_6(VAR_8->exec_runtime_by_id);

        FUNC_3(VAR_8, 0);
        FUNC_6(VAR_8->dynamic_users);

        FUNC_6(VAR_8->units);
        FUNC_6(VAR_8->units_by_invocation_id);
        FUNC_6(VAR_8->jobs);
        FUNC_6(VAR_8->watch_pids);
        FUNC_6(VAR_8->watch_bus);

        FUNC_16(VAR_8->run_queue);

        FUNC_22(VAR_8->startup_units);
        FUNC_22(VAR_8->failed_units);

        FUNC_20(VAR_8->signal_event_source);
        FUNC_20(VAR_8->sigchld_event_source);
        FUNC_20(VAR_8->notify_event_source);
        FUNC_20(VAR_8->cgroups_agent_event_source);
        FUNC_20(VAR_8->time_change_event_source);
        FUNC_20(VAR_8->timezone_change_event_source);
        FUNC_20(VAR_8->jobs_in_progress_event_source);
        FUNC_20(VAR_8->run_queue_event_source);
        FUNC_20(VAR_8->user_lookup_event_source);
        FUNC_20(VAR_8->sync_bus_names_event_source);

        FUNC_18(VAR_8->signal_fd);
        FUNC_18(VAR_8->notify_fd);
        FUNC_18(VAR_8->cgroups_agent_fd);
        FUNC_18(VAR_8->time_change_fd);
        FUNC_19(VAR_8->user_lookup_fds);

        FUNC_11(VAR_8);

        FUNC_12(VAR_8);

        FUNC_21(VAR_8->event);

        FUNC_5(VAR_8->notify_socket);

        FUNC_9(&VAR_8->lookup_paths);
        FUNC_23(VAR_8->transient_environment);
        FUNC_23(VAR_8->client_environment);

        FUNC_6(VAR_8->cgroup_unit);
        FUNC_13(VAR_8);

        FUNC_5(VAR_8->switch_root);
        FUNC_5(VAR_8->switch_root_init);

        FUNC_17(VAR_8->rlimit);

        FUNC_1(FUNC_7(VAR_8->units_requiring_mounts_for));
        FUNC_6(VAR_8->units_requiring_mounts_for);

        FUNC_6(VAR_8->uid_refs);
        FUNC_6(VAR_8->gid_refs);

        for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++)
                VAR_8->prefix[VAR_9] = FUNC_15(VAR_8->prefix[VAR_9]);

        return FUNC_15(VAR_8);
}
