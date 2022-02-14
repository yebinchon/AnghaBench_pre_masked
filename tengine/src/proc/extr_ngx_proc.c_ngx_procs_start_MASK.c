
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_18__ ;
typedef struct TYPE_19__ TYPE_16__ ;


typedef size_t ngx_uint_t ;
struct TYPE_22__ {int data; } ;
struct TYPE_24__ {int (* prepare ) (TYPE_8__*) ;TYPE_2__ name; } ;
typedef TYPE_4__ ngx_proc_module_t ;
struct TYPE_21__ {int nelts; TYPE_6__** elts; } ;
struct TYPE_25__ {TYPE_1__ processes; } ;
typedef TYPE_5__ ngx_proc_main_conf_t ;
struct TYPE_23__ {scalar_t__ data; } ;
struct TYPE_26__ {size_t count; TYPE_3__ name; scalar_t__ respawn; } ;
typedef TYPE_6__ ngx_proc_conf_t ;
struct TYPE_27__ {TYPE_6__* proc_conf; TYPE_18__* module; } ;
typedef TYPE_7__ ngx_proc_args_t ;
typedef int ngx_int_t ;
struct TYPE_28__ {int log; int pool; int conf_ctx; } ;
typedef TYPE_8__ ngx_cycle_t ;
struct TYPE_29__ {size_t slot; int fd; int pid; int command; } ;
typedef TYPE_9__ ngx_channel_t ;
struct TYPE_20__ {scalar_t__ type; TYPE_4__* ctx; } ;
struct TYPE_19__ {int * channel; int pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int * FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ,char*,...) ;
 TYPE_18__** VAR_8 ;
 void* FUNC_2 (int ,int) ;
 int VAR_9 ;
 TYPE_5__* FUNC_3 (int ,int ) ;
 size_t VAR_10 ;
 TYPE_16__* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (TYPE_8__*,TYPE_9__*) ;
 int FUNC_5 (TYPE_8__*,int ,TYPE_7__*,char*,int) ;
 scalar_t__ FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (TYPE_8__*) ;

ngx_int_t
FUNC_8(ngx_cycle_t *VAR_14, ngx_int_t VAR_15)
{
    ngx_int_t VAR_16, VAR_17;
    ngx_uint_t VAR_18, VAR_19, VAR_20;
    ngx_channel_t VAR_21;
    ngx_proc_args_t **VAR_22;
    ngx_proc_conf_t **VAR_23;
    ngx_proc_module_t *VAR_24;
    ngx_proc_main_conf_t *VAR_25;

    FUNC_1(VAR_2, VAR_14->log, 0, "start procs processes");

    if (FUNC_0(VAR_14->conf_ctx, VAR_13) == ((void*)0)) {
        return VAR_3;
    }

    VAR_21.command = VAR_0;
    VAR_25 = FUNC_3(VAR_14->conf_ctx, VAR_9);

    VAR_23 = VAR_25->processes.elts;
    VAR_22 = FUNC_2(VAR_14->pool,
                       sizeof(ngx_proc_args_t *) * VAR_25->processes.nelts);
    if (VAR_22 == ((void*)0)) {
        return VAR_1;
    }

    for (VAR_19 = 0; VAR_19< VAR_25->processes.nelts; VAR_19++) {
        VAR_22[VAR_19] = FUNC_2(VAR_14->pool, sizeof(ngx_proc_args_t));
        if (VAR_22[VAR_19] == ((void*)0)) {
            return VAR_1;
        }
    }

    VAR_17 = VAR_15 ? VAR_4 : VAR_6;

    for (VAR_18 = 0; VAR_8[VAR_18]; VAR_18++) {

        if (VAR_8[VAR_18]->type != VAR_7) {
            continue;
        }

        VAR_24 = VAR_8[VAR_18]->ctx;

        for (VAR_19 = 0; VAR_19 < VAR_25->processes.nelts; VAR_19++) {
            if (FUNC_6(VAR_23[VAR_19]->name.data, VAR_24->name.data) == 0) {

                if (VAR_24->prepare) {
                    VAR_16 = VAR_24->prepare(VAR_14);
                    if (VAR_16 != VAR_3) {
                        break;
                    }
                }

                if (VAR_15 == 1) {
                    if (VAR_23[VAR_19]->respawn) {
                        VAR_17 = VAR_4;
                    }
                } else {
                    if (VAR_23[VAR_19]->respawn) {
                        VAR_17 = VAR_6;
                    } else {
                        VAR_17 = VAR_5;
                    }
                }


                for (VAR_20 = 0; VAR_20 < VAR_23[VAR_19]->count; VAR_20++) {
                    VAR_22[VAR_19]->module = VAR_8[VAR_18];
                    VAR_22[VAR_19]->proc_conf = VAR_23[VAR_19];

                    FUNC_1(VAR_2, VAR_14->log, 0,
                                  "start process %V", &VAR_23[VAR_19]->name);

                    FUNC_5(VAR_14, VAR_12, VAR_22[VAR_19],
                                      (char *) VAR_23[VAR_19]->name.data, VAR_17);

                    VAR_21.pid = VAR_11[VAR_10].pid;
                    VAR_21.slot = VAR_10;
                    VAR_21.fd = VAR_11[VAR_10].channel[0];

                    FUNC_4(VAR_14, &VAR_21);
                }
            }
        }
    }

    return VAR_3;
}
