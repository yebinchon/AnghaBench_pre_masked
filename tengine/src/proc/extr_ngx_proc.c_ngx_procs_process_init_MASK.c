
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_13__ ;
typedef struct TYPE_15__ TYPE_12__ ;


struct rlimit {void* rlim_max; void* rlim_cur; } ;
typedef int sigset_t ;
typedef void* rlim_t ;
typedef size_t ngx_uint_t ;
struct TYPE_19__ {scalar_t__ (* init ) (TYPE_5__*) ;int name; } ;
typedef TYPE_3__ ngx_proc_module_t ;
struct TYPE_20__ {int * previous; } ;
typedef TYPE_4__ ngx_listening_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_18__ {size_t nelts; TYPE_4__* elts; } ;
struct TYPE_21__ {int log; TYPE_2__ listening; int conf_ctx; } ;
typedef TYPE_5__ ngx_cycle_t ;
struct TYPE_17__ {scalar_t__ data; scalar_t__ len; } ;
struct TYPE_22__ {scalar_t__ rlimit_nofile; scalar_t__ rlimit_core; TYPE_1__ working_directory; int user; int group; int username; } ;
typedef TYPE_6__ ngx_core_conf_t ;
struct TYPE_16__ {scalar_t__ (* init_process ) (TYPE_5__*) ;} ;
struct TYPE_15__ {int pid; int* channel; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (TYPE_5__*,int ,int ,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 TYPE_13__ VAR_15 ;
 scalar_t__ FUNC_6 (int ,int ) ;
 scalar_t__ VAR_16 ;
 int FUNC_7 (int ,int ,int ,char*,int *,...) ;
 scalar_t__ VAR_17 ;
 TYPE_12__* VAR_18 ;
 int VAR_19 ;
 int * FUNC_8 (TYPE_5__*,int *) ;
 int FUNC_9 (int ,int,int ,int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ,int) ;
 int FUNC_12 (int ,struct rlimit*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ,int *,int *) ;
 scalar_t__ FUNC_16 (TYPE_5__*) ;
 scalar_t__ FUNC_17 (TYPE_5__*) ;

__attribute__((used)) static void
FUNC_18(ngx_cycle_t *VAR_20, ngx_proc_module_t *VAR_21,
    ngx_int_t VAR_22)
{
    sigset_t VAR_23;
    ngx_int_t VAR_24;
    ngx_uint_t VAR_25;
    struct rlimit VAR_26;
    ngx_core_conf_t *VAR_27;
    ngx_listening_t *VAR_28;

    if (FUNC_8(VAR_20, ((void*)0)) == ((void*)0)) {

        FUNC_2(2);
    }

    VAR_27 = (ngx_core_conf_t *) FUNC_6(VAR_20->conf_ctx, VAR_13);

    if (VAR_22 != 0) {
        if (FUNC_11(VAR_7, 0, (int) VAR_22) == -1) {
            FUNC_7(VAR_2, VAR_20->log, VAR_14,
                          "process %V setpriority(%i) failed", &VAR_21->name,
                          VAR_22);
        }
    }

    if (VAR_27->rlimit_nofile != VAR_0) {
        VAR_26.rlim_cur = (rlim_t) VAR_27->rlimit_nofile;
        VAR_26.rlim_max = (rlim_t) VAR_27->rlimit_nofile;

        if (FUNC_12(VAR_10, &VAR_26) == -1) {
            FUNC_7(VAR_2, VAR_20->log, VAR_14,
                          "process %V setrlimit(RLIMIT_NOFILE, %i) failed",
                          &VAR_21->name, VAR_27->rlimit_nofile);
        }
    }

    if (VAR_27->rlimit_core != VAR_0) {
        VAR_26.rlim_cur = (rlim_t) VAR_27->rlimit_core;
        VAR_26.rlim_max = (rlim_t) VAR_27->rlimit_core;

        if (FUNC_12(VAR_9, &VAR_26) == -1) {
            FUNC_7(VAR_2, VAR_20->log, VAR_14,
                          "process %V setrlimit(RLIMIT_CORE, %O) failed",
                          &VAR_21->name, VAR_27->rlimit_core);
        }
    }

    if (FUNC_3() == 0) {
        if (FUNC_10(VAR_27->group) == -1) {
            FUNC_7(VAR_3, VAR_20->log, VAR_14,
                          "process %V setgid(%d) failed", &VAR_21->name,
                          VAR_27->group);

            FUNC_2(2);
        }

        if (FUNC_4(VAR_27->username, VAR_27->group) == -1) {
            FUNC_7(VAR_3, VAR_20->log, VAR_14,
                          "process %V initgroups(%s, %d) failed", &VAR_21->name,
                          VAR_27->username, VAR_27->group);
        }

        if (FUNC_13(VAR_27->user) == -1) {
            FUNC_7(VAR_3, VAR_20->log, VAR_14,
                          "process %V setuid(%d) failed", &VAR_21->name,
                          VAR_27->user);

            FUNC_2(2);
        }
    }
    if (VAR_27->working_directory.len) {
        if (FUNC_0((char *) VAR_27->working_directory.data) == -1) {
            FUNC_7(VAR_2, VAR_20->log, VAR_14,
                          "process %V chdir(\"%s\") failed", &VAR_21->name,
                          VAR_27->working_directory.data);

            FUNC_2(2);
        }
    }

    FUNC_14(&VAR_23);

    if (FUNC_15(VAR_11, &VAR_23, ((void*)0)) == -1) {
        FUNC_7(VAR_2, VAR_20->log, VAR_14,
                      "process %V sigprocmask() failed", &VAR_21->name);
    }





    VAR_28 = VAR_20->listening.elts;

    for (VAR_25 = 0; VAR_25 < VAR_20->listening.nelts; VAR_25++) {
        VAR_28[VAR_25].previous = ((void*)0);
    }

    if (VAR_15.init_process(VAR_20) != VAR_5) {
        FUNC_7(VAR_4, VAR_20->log, 0,
                      "process %V init event error", &VAR_21->name);
        FUNC_2(2);
    }

    if (VAR_21->init) {
        if (VAR_21->init(VAR_20) != VAR_5) {
            FUNC_7(VAR_4, VAR_20->log, 0,
                          "process %V process init error", &VAR_21->name);
            FUNC_2(2);
        }
    }


    for (VAR_24 = 0; VAR_24 < VAR_16; VAR_24++) {

        if (VAR_18[VAR_24].pid == -1) {
            continue;
        }

        if (VAR_24 == VAR_17) {
            continue;
        }

        if (VAR_18[VAR_24].channel[1] == -1) {
            continue;
        }

        if (FUNC_1(VAR_18[VAR_24].channel[1]) == -1) {
            FUNC_7(VAR_2, VAR_20->log, VAR_14,
                          "process %V close() channel failed", &VAR_21->name);
        }
    }

    if (FUNC_1(VAR_18[VAR_17].channel[0]) == -1) {
        FUNC_7(VAR_2, VAR_20->log, VAR_14,
                      "process %V close() channel failed", &VAR_21->name);
    }





    if (FUNC_5(VAR_20, VAR_12, VAR_6,
                              VAR_19)
        == VAR_1)
    {

        FUNC_2(2);
    }
}
