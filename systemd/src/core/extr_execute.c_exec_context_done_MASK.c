
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int log_level_max; void* network_namespace_path; scalar_t__ stdin_data_size; void* stdin_data; scalar_t__ log_ratelimit_burst; scalar_t__ log_ratelimit_interval_usec; TYPE_1__* directories; void* address_families; void* syscall_archs; int syscall_filter; void* smack_process_label; void* apparmor_profile; void* selinux_context; void* utmp_id; int numa_policy; int cpu_set; scalar_t__ n_temporary_filesystems; int * temporary_filesystems; scalar_t__ n_bind_mounts; int * bind_mounts; void* inaccessible_paths; void* read_write_paths; void* read_only_paths; void* pam_name; void* supplementary_groups; void* group; void* user; void* syslog_identifier; void* tty_path; void* root_image; void* root_directory; void* working_directory; void** stdio_file; void** stdio_fdname; int rlimit; void* unset_environment; void* pass_environment; void* environment_files; void* environment; } ;
struct TYPE_6__ {void* paths; } ;
typedef size_t ExecDirectoryType ;
typedef TYPE_2__ ExecContext ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (void*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 void* FUNC_8 (void*) ;
 void* FUNC_9 (void*) ;
 int FUNC_10 (int *,scalar_t__) ;

void FUNC_11(ExecContext *VAR_1) {
        ExecDirectoryType VAR_2;
        size_t VAR_3;

        FUNC_0(VAR_1);

        VAR_1->environment = FUNC_9(VAR_1->environment);
        VAR_1->environment_files = FUNC_9(VAR_1->environment_files);
        VAR_1->pass_environment = FUNC_9(VAR_1->pass_environment);
        VAR_1->unset_environment = FUNC_9(VAR_1->unset_environment);

        FUNC_7(VAR_1->rlimit);

        for (VAR_3 = 0; VAR_3 < 3; VAR_3++) {
                VAR_1->stdio_fdname[VAR_3] = FUNC_5(VAR_1->stdio_fdname[VAR_3]);
                VAR_1->stdio_file[VAR_3] = FUNC_5(VAR_1->stdio_file[VAR_3]);
        }

        VAR_1->working_directory = FUNC_5(VAR_1->working_directory);
        VAR_1->root_directory = FUNC_5(VAR_1->root_directory);
        VAR_1->root_image = FUNC_5(VAR_1->root_image);
        VAR_1->tty_path = FUNC_5(VAR_1->tty_path);
        VAR_1->syslog_identifier = FUNC_5(VAR_1->syslog_identifier);
        VAR_1->user = FUNC_5(VAR_1->user);
        VAR_1->group = FUNC_5(VAR_1->group);

        VAR_1->supplementary_groups = FUNC_9(VAR_1->supplementary_groups);

        VAR_1->pam_name = FUNC_5(VAR_1->pam_name);

        VAR_1->read_only_paths = FUNC_9(VAR_1->read_only_paths);
        VAR_1->read_write_paths = FUNC_9(VAR_1->read_write_paths);
        VAR_1->inaccessible_paths = FUNC_9(VAR_1->inaccessible_paths);

        FUNC_1(VAR_1->bind_mounts, VAR_1->n_bind_mounts);
        VAR_1->bind_mounts = ((void*)0);
        VAR_1->n_bind_mounts = 0;
        FUNC_10(VAR_1->temporary_filesystems, VAR_1->n_temporary_filesystems);
        VAR_1->temporary_filesystems = ((void*)0);
        VAR_1->n_temporary_filesystems = 0;

        FUNC_2(&VAR_1->cpu_set);
        FUNC_6(&VAR_1->numa_policy);

        VAR_1->utmp_id = FUNC_5(VAR_1->utmp_id);
        VAR_1->selinux_context = FUNC_5(VAR_1->selinux_context);
        VAR_1->apparmor_profile = FUNC_5(VAR_1->apparmor_profile);
        VAR_1->smack_process_label = FUNC_5(VAR_1->smack_process_label);

        VAR_1->syscall_filter = FUNC_4(VAR_1->syscall_filter);
        VAR_1->syscall_archs = FUNC_8(VAR_1->syscall_archs);
        VAR_1->address_families = FUNC_8(VAR_1->address_families);

        for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
                VAR_1->directories[VAR_2].paths = FUNC_9(VAR_1->directories[VAR_2].paths);

        VAR_1->log_level_max = -1;

        FUNC_3(VAR_1);

        VAR_1->log_ratelimit_interval_usec = 0;
        VAR_1->log_ratelimit_burst = 0;

        VAR_1->stdin_data = FUNC_5(VAR_1->stdin_data);
        VAR_1->stdin_data_size = 0;

        VAR_1->network_namespace_path = FUNC_5(VAR_1->network_namespace_path);
}
