
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u_char ;
typedef int sigset_t ;
typedef scalar_t__ ngx_pid_t ;
struct TYPE_15__ {int* pfd; int type; TYPE_3__* argv; TYPE_2__* open_fd; scalar_t__ pid; } ;
typedef TYPE_4__ ngx_open_pipe_t ;
typedef int ngx_int_t ;
struct TYPE_16__ {int log; int conf_ctx; } ;
typedef TYPE_5__ ngx_cycle_t ;
struct TYPE_17__ {int user; int group; int username; } ;
typedef TYPE_6__ ngx_core_conf_t ;
struct TYPE_14__ {int ** elts; } ;
struct TYPE_12__ {int data; } ;
struct TYPE_13__ {scalar_t__ fd; TYPE_1__ name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char const*,char* const*) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (TYPE_5__*) ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ,int ,char*,...) ;
 int FUNC_10 (char*,int ,int ,int ) ;
 int FUNC_11 (TYPE_5__*,TYPE_4__*) ;
 int VAR_15 ;
 scalar_t__ FUNC_12 (int *,char*,int) ;
 scalar_t__ FUNC_13 (int*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int ,int *,int *) ;

__attribute__((used)) static ngx_int_t
FUNC_18(ngx_cycle_t *VAR_16, ngx_open_pipe_t *VAR_17)
{
    int VAR_18;
    u_char **VAR_19;
    ngx_pid_t VAR_20;
    sigset_t VAR_21;






    if (FUNC_13(VAR_17->pfd) < 0) {
        return VAR_0;
    }

    VAR_19 = VAR_17->argv->elts;

    if ((VAR_20 = FUNC_4()) < 0) {
        goto err;
    } else if (VAR_20 > 0) {
        VAR_17->pid = VAR_20;

        if (VAR_17->open_fd->fd != VAR_4) {
            if (FUNC_0(VAR_17->open_fd->fd) == VAR_1) {
                FUNC_9(VAR_5, VAR_16->log, VAR_14,
                              "close \"%s\" failed",
                              VAR_17->open_fd->name.data);
            }
        }

        if (VAR_17->type == VAR_7) {
            VAR_17->open_fd->fd = VAR_17->pfd[1];
            FUNC_0(VAR_17->pfd[0]);
        } else {
            VAR_17->open_fd->fd = VAR_17->pfd[0];
            FUNC_0(VAR_17->pfd[1]);
        }
    } else {





        VAR_15 = VAR_8;
        FUNC_7(VAR_16);

        if (VAR_17->type == 1) {
            FUNC_0(VAR_17->pfd[1]);
            if (VAR_17->pfd[0] != VAR_11) {
                FUNC_1(VAR_17->pfd[0], VAR_11);
                FUNC_0(VAR_17->pfd[0]);
            }
        } else {
            FUNC_0(VAR_17->pfd[0]);
            if (VAR_17->pfd[1] != VAR_12) {
                FUNC_1(VAR_17->pfd[1], VAR_12);
                FUNC_0(VAR_17->pfd[1]);
            }
        }
        VAR_18 = FUNC_10("/dev/null", VAR_3, VAR_2, 0);
        if (VAR_18 == -1) {
            FUNC_9(VAR_5, VAR_16->log, VAR_14,
                          "open(\"/dev/null\") failed");
            FUNC_3(2);
        }

        if (FUNC_1(VAR_18, VAR_10) == -1) {
            FUNC_9(VAR_5, VAR_16->log, VAR_14,
                          "dup2(STDERR) failed");
            FUNC_3(2);
        }

        if (VAR_18 > VAR_10 && FUNC_0(VAR_18) == -1) {
            FUNC_9(VAR_5, VAR_16->log, VAR_14,
                          "close() failed");
            FUNC_3(2);
        }

        FUNC_16(&VAR_21);

        if (FUNC_17(VAR_9, &VAR_21, ((void*)0)) == -1) {
            FUNC_9(VAR_5, VAR_16->log, VAR_14,
                          "sigprocmask() failed");
            FUNC_3(2);
        }

        if (FUNC_12(VAR_19[0], "rollback", sizeof("rollback") - 1) == 0) {
            FUNC_11(VAR_16, VAR_17);
            FUNC_3(0);

        } else {
            FUNC_2((const char *) VAR_19[0], (char *const *) VAR_17->argv->elts);
            FUNC_3(0);
        }
    }

    return VAR_6;

err:

    FUNC_0(VAR_17->pfd[0]);
    FUNC_0(VAR_17->pfd[1]);

    return VAR_0;
}
