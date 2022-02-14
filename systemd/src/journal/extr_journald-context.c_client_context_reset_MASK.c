
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int log_level_max; int ratelimit_burst; int log_ratelimit_burst; int ratelimit_interval; int log_ratelimit_interval; int extra_fields_mtime; void* extra_fields_data; scalar_t__ extra_fields_n_iovec; void* extra_fields_iovec; scalar_t__ label_size; void* label; int invocation_id; void* user_slice; void* slice; void* user_unit; void* unit; void* owner_uid; void* session; void* cgroup; void* loginuid; int auditid; void* capeff; void* cmdline; void* exe; void* comm; int gid; void* uid; int timestamp; } ;
typedef TYPE_1__ Server ;
typedef TYPE_1__ ClientContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*) ;
 void* FUNC_1 (void*) ;

__attribute__((used)) static void FUNC_2(Server *VAR_6, ClientContext *VAR_7) {
        FUNC_0(VAR_6);
        FUNC_0(VAR_7);

        VAR_7->timestamp = VAR_5;

        VAR_7->uid = VAR_4;
        VAR_7->gid = VAR_1;

        VAR_7->comm = FUNC_1(VAR_7->comm);
        VAR_7->exe = FUNC_1(VAR_7->exe);
        VAR_7->cmdline = FUNC_1(VAR_7->cmdline);
        VAR_7->capeff = FUNC_1(VAR_7->capeff);

        VAR_7->auditid = VAR_0;
        VAR_7->loginuid = VAR_4;

        VAR_7->cgroup = FUNC_1(VAR_7->cgroup);
        VAR_7->session = FUNC_1(VAR_7->session);
        VAR_7->owner_uid = VAR_4;
        VAR_7->unit = FUNC_1(VAR_7->unit);
        VAR_7->user_unit = FUNC_1(VAR_7->user_unit);
        VAR_7->slice = FUNC_1(VAR_7->slice);
        VAR_7->user_slice = FUNC_1(VAR_7->user_slice);

        VAR_7->invocation_id = VAR_3;

        VAR_7->label = FUNC_1(VAR_7->label);
        VAR_7->label_size = 0;

        VAR_7->extra_fields_iovec = FUNC_1(VAR_7->extra_fields_iovec);
        VAR_7->extra_fields_n_iovec = 0;
        VAR_7->extra_fields_data = FUNC_1(VAR_7->extra_fields_data);
        VAR_7->extra_fields_mtime = VAR_2;

        VAR_7->log_level_max = -1;

        VAR_7->log_ratelimit_interval = VAR_6->ratelimit_interval;
        VAR_7->log_ratelimit_burst = VAR_6->ratelimit_burst;
}
