
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct sigaction {int sa_mask; int sa_handler; } ;
struct TYPE_9__ {int signo; int signame; } ;
typedef TYPE_2__ ngx_signal_t ;
struct TYPE_10__ {TYPE_1__* file; } ;
typedef TYPE_3__ ngx_log_t ;
struct TYPE_11__ {int max_stack_size; TYPE_3__* log; } ;
typedef TYPE_4__ ngx_backtrace_conf_t ;
struct TYPE_12__ {int pool; TYPE_3__* log; int conf_ctx; } ;
struct TYPE_8__ {int fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_0 (void*,int) ;
 int FUNC_1 (void*,size_t,int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 TYPE_6__* VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,TYPE_3__*,int ,char*,int,...) ;
 int FUNC_6 (struct sigaction*,int) ;
 void* FUNC_7 (int ,int) ;
 int FUNC_8 (int,struct sigaction*,int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void
FUNC_10(int VAR_8)
{
    void *VAR_9;
    size_t VAR_10;
    ngx_log_t *VAR_11;
    ngx_signal_t *VAR_12;
    struct sigaction VAR_13;
    ngx_backtrace_conf_t *VAR_14;

    for (VAR_12 = VAR_5; VAR_12->signo != 0; VAR_12++) {
        if (VAR_12->signo == VAR_8) {
            break;
        }
    }

    VAR_14 = (ngx_backtrace_conf_t *) FUNC_3(VAR_6->conf_ctx,
                                                VAR_4);

    VAR_11 = VAR_14->log ? VAR_14->log : VAR_6->log;
    FUNC_5(VAR_2, VAR_11, 0,
                  "nginx coredump by signal %d (%s)", VAR_8, VAR_12->signame);

    FUNC_6(&VAR_13, sizeof(struct sigaction));
    VAR_13.sa_handler = VAR_3;
    FUNC_9(&VAR_13.sa_mask);
    if (FUNC_8(VAR_8, &VAR_13, ((void*)0)) == -1) {
        FUNC_5(VAR_2, VAR_11, VAR_7,
                      "sigaction(%s) failed", VAR_12->signame);
    }

    if (VAR_14->max_stack_size == VAR_1) {
        VAR_14->max_stack_size = VAR_0;
    }

    VAR_9 = FUNC_7(VAR_6->pool, sizeof(void *) * VAR_14->max_stack_size);
    if (VAR_9 == ((void*)0)) {
        goto invalid;
    }

    VAR_10 = FUNC_0(VAR_9, VAR_14->max_stack_size);
    FUNC_1(VAR_9, VAR_10, VAR_11->file->fd);

invalid:

    FUNC_2(FUNC_4(), VAR_8);
}
