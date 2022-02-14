
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_8__ {int path; } ;
struct TYPE_7__ {int path; } ;
struct TYPE_9__ {int mmap; TYPE_2__ system_storage; TYPE_1__ runtime_storage; int hostname_field; int cgroup_root; int tty_path; int buffer; scalar_t__ kernel_seqnum; scalar_t__ ratelimit; int notify_fd; int hostname_fd; int audit_fd; int dev_kmsg_fd; int stdout_fd; int native_fd; int syslog_fd; int event; int watchdog_event_source; int notify_event_source; int hostname_event_source; int sigrtmin1_event_source; int sigint_event_source; int sigterm_event_source; int sigusr2_event_source; int sigusr1_event_source; int sync_event_source; int audit_event_source; int dev_kmsg_event_source; int stdout_event_source; int native_event_source; int syslog_event_source; int varlink_server; int user_journals; int runtime_journal; int system_journal; scalar_t__ stdout_streams; int deferred_closes; } ;
typedef TYPE_3__ Server ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__,int) ;
 int FUNC_7 (int ,int (*) (int )) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int (*) (int )) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (int ) ;

void FUNC_14(Server *VAR_0) {
        FUNC_0(VAR_0);

        FUNC_11(VAR_0->deferred_closes, FUNC_3);

        while (VAR_0->stdout_streams)
                FUNC_12(VAR_0->stdout_streams);

        FUNC_1(VAR_0);

        (void) FUNC_3(VAR_0->system_journal);
        (void) FUNC_3(VAR_0->runtime_journal);

        FUNC_7(VAR_0->user_journals, FUNC_3);

        FUNC_13(VAR_0->varlink_server);

        FUNC_9(VAR_0->syslog_event_source);
        FUNC_9(VAR_0->native_event_source);
        FUNC_9(VAR_0->stdout_event_source);
        FUNC_9(VAR_0->dev_kmsg_event_source);
        FUNC_9(VAR_0->audit_event_source);
        FUNC_9(VAR_0->sync_event_source);
        FUNC_9(VAR_0->sigusr1_event_source);
        FUNC_9(VAR_0->sigusr2_event_source);
        FUNC_9(VAR_0->sigterm_event_source);
        FUNC_9(VAR_0->sigint_event_source);
        FUNC_9(VAR_0->sigrtmin1_event_source);
        FUNC_9(VAR_0->hostname_event_source);
        FUNC_9(VAR_0->notify_event_source);
        FUNC_9(VAR_0->watchdog_event_source);
        FUNC_10(VAR_0->event);

        FUNC_8(VAR_0->syslog_fd);
        FUNC_8(VAR_0->native_fd);
        FUNC_8(VAR_0->stdout_fd);
        FUNC_8(VAR_0->dev_kmsg_fd);
        FUNC_8(VAR_0->audit_fd);
        FUNC_8(VAR_0->hostname_fd);
        FUNC_8(VAR_0->notify_fd);

        if (VAR_0->ratelimit)
                FUNC_4(VAR_0->ratelimit);

        if (VAR_0->kernel_seqnum)
                FUNC_6(VAR_0->kernel_seqnum, sizeof(uint64_t));

        FUNC_2(VAR_0->buffer);
        FUNC_2(VAR_0->tty_path);
        FUNC_2(VAR_0->cgroup_root);
        FUNC_2(VAR_0->hostname_field);
        FUNC_2(VAR_0->runtime_storage.path);
        FUNC_2(VAR_0->system_storage.path);

        FUNC_5(VAR_0->mmap);
}
