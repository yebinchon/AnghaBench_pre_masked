
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef scalar_t__ ngx_uint_t ;
struct TYPE_18__ {scalar_t__ data; } ;
struct TYPE_19__ {int (* loop ) (TYPE_6__*) ;TYPE_1__ name; } ;
typedef TYPE_2__ ngx_proc_module_t ;
struct TYPE_20__ {int priority; int delay_start; } ;
typedef TYPE_3__ ngx_proc_conf_t ;
struct TYPE_21__ {TYPE_3__* proc_conf; TYPE_5__* module; } ;
typedef TYPE_4__ ngx_proc_args_t ;
struct TYPE_22__ {TYPE_2__* ctx; } ;
typedef TYPE_5__ ngx_module_t ;
typedef int ngx_int_t ;
struct TYPE_23__ {scalar_t__ connection_n; int log; TYPE_7__* connections; } ;
typedef TYPE_6__ ngx_cycle_t ;
struct TYPE_24__ {int fd; int close; TYPE_9__* read; scalar_t__ idle; } ;
typedef TYPE_7__ ngx_connection_t ;
struct TYPE_25__ {int (* handler ) (TYPE_9__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_6__*) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ,char*,...) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (TYPE_6__*,TYPE_2__*) ;
 int FUNC_5 (TYPE_6__*,TYPE_2__*,int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (TYPE_6__*,int) ;
 int FUNC_7 (char*) ;
 scalar_t__ VAR_7 ;
 int FUNC_8 () ;
 scalar_t__ VAR_8 ;
 int FUNC_9 (TYPE_9__*) ;
 int FUNC_10 (TYPE_6__*) ;

__attribute__((used)) static void
FUNC_11(ngx_cycle_t *VAR_9, void *VAR_10)
{
    ngx_int_t VAR_11;
    ngx_uint_t VAR_12;
    ngx_module_t *VAR_13;
    ngx_proc_args_t *VAR_14;
    ngx_proc_conf_t *VAR_15;
    ngx_connection_t *VAR_16;
    ngx_proc_module_t *VAR_17;

    VAR_14 = VAR_10;
    VAR_13 = VAR_14->module;
    VAR_15 = VAR_14->proc_conf;
    VAR_17 = VAR_13->ctx;
    VAR_4 = VAR_2;

    FUNC_7((char *) VAR_17->name.data);
    FUNC_2(VAR_15->delay_start);

    FUNC_5(VAR_9, VAR_17, VAR_15->priority);
    FUNC_0(VAR_9);
    VAR_8 = 0;

    for ( ;; ) {
        if (VAR_3 || VAR_5) {
            VAR_3 = 1;
            FUNC_1(VAR_0, VAR_9->log, 0,
                          "process %V gracefully shutting down", &VAR_17->name);
            FUNC_7("processes are shutting down");

            VAR_16 = VAR_9->connections;

            for (VAR_12 = 0; VAR_12 < VAR_9->connection_n; VAR_12++) {
                if (VAR_16[VAR_12].fd != -1 && VAR_16[VAR_12].idle) {
                    VAR_16[VAR_12].close = 1;
                    VAR_16[VAR_12].read->handler(VAR_16[VAR_12].read);
                }
            }

            FUNC_4(VAR_9, VAR_17);
        }

        if (VAR_7) {
            FUNC_1(VAR_0, VAR_9->log, 0, "process %V exiting",
                          &VAR_17->name);

            FUNC_4(VAR_9, VAR_17);
        }

        if (VAR_6) {
            VAR_6 = 0;
            FUNC_1(VAR_0, VAR_9->log, 0, "reopening logs");
            FUNC_6(VAR_9, -1);
        }

        if (VAR_17->loop) {
            VAR_11 = VAR_17->loop(VAR_9);
            if (VAR_11 != VAR_1) {
                break;
            }
        }

        FUNC_8();

        FUNC_3(VAR_9);
    }

    FUNC_4(VAR_9, VAR_17);
}
