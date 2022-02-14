
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_16__ ;
typedef struct TYPE_18__ TYPE_12__ ;
typedef struct TYPE_17__ TYPE_11__ ;


typedef size_t ngx_uint_t ;
struct TYPE_22__ {int data; } ;
typedef TYPE_3__ ngx_str_t ;
struct TYPE_21__ {int data; } ;
struct TYPE_23__ {void* (* create_proc_conf ) (TYPE_8__*) ;TYPE_2__ name; } ;
typedef TYPE_4__ ngx_proc_module_t ;
struct TYPE_19__ {size_t nelts; TYPE_6__** elts; } ;
struct TYPE_24__ {TYPE_16__ processes; } ;
typedef TYPE_5__ ngx_proc_main_conf_t ;
struct TYPE_25__ {TYPE_3__ name; TYPE_7__* ctx; } ;
typedef TYPE_6__ ngx_proc_conf_t ;
struct TYPE_26__ {TYPE_5__** main_conf; TYPE_6__** proc_conf; } ;
typedef TYPE_7__ ngx_proc_conf_ctx_t ;
typedef size_t ngx_int_t ;
typedef int ngx_flag_t ;
struct TYPE_27__ {int cmd_type; TYPE_7__* ctx; int pool; TYPE_1__* args; } ;
typedef TYPE_8__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_20__ {TYPE_3__* elts; } ;
struct TYPE_18__ {scalar_t__ type; size_t ctx_index; TYPE_4__* ctx; } ;
struct TYPE_17__ {size_t ctx_index; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_6__** FUNC_0 (TYPE_16__*) ;
 int FUNC_1 (int ,TYPE_8__*,int ,char*,...) ;
 char* FUNC_2 (TYPE_8__*,int *) ;
 TYPE_12__** VAR_4 ;
 void* FUNC_3 (int ,int) ;
 TYPE_11__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (int ,int ) ;
 void* FUNC_5 (TYPE_8__*) ;

__attribute__((used)) static char *
FUNC_6(ngx_conf_t *VAR_7, ngx_command_t *VAR_8, void *VAR_9)
{
    char *VAR_10;
    void *VAR_11;
    ngx_int_t VAR_12;
    ngx_str_t *VAR_13;
    ngx_flag_t VAR_14;
    ngx_conf_t VAR_15;
    ngx_uint_t VAR_16;
    ngx_proc_conf_t *VAR_17, **VAR_18;
    ngx_proc_module_t *VAR_19;
    ngx_proc_conf_ctx_t *VAR_20, *VAR_21;
    ngx_proc_main_conf_t *VAR_22;

    VAR_13 = VAR_7->args->elts;
    VAR_14 = 0;

    for (VAR_16 = 0; VAR_4[VAR_16]; VAR_16++) {
        if (VAR_4[VAR_16]->type != VAR_3) {
            continue;
        }
        VAR_19 = VAR_4[VAR_16]->ctx;

        if (FUNC_4(VAR_19->name.data, VAR_13[1].data) == 0) {
            VAR_14 = 1;
            break;
        }
    }

    if (VAR_14 == 0) {
        FUNC_1(VAR_1, VAR_7, 0,
                           "no %V process module", &VAR_13[1]);
        return VAR_0;
    }


    VAR_20 = FUNC_3(VAR_7->pool, sizeof(ngx_proc_conf_ctx_t));
    if (VAR_20 == ((void*)0)) {
        return VAR_0;
    }

    VAR_21 = VAR_7->ctx;
    VAR_20->main_conf = VAR_21->main_conf;



    VAR_20->proc_conf = FUNC_3(VAR_7->pool,
                                 sizeof(void *) * VAR_6);
    if (VAR_20->proc_conf == ((void*)0)) {
        return VAR_0;
    }

    for (VAR_16 = 0; VAR_4[VAR_16]; VAR_16++) {
        if (VAR_4[VAR_16]->type != VAR_3) {
            continue;
        }

        VAR_19 = VAR_4[VAR_16]->ctx;

        if (VAR_19->create_proc_conf) {
            VAR_11 = VAR_19->create_proc_conf(VAR_7);

            if (VAR_11 == ((void*)0)) {
                return VAR_0;
            }


            VAR_20->proc_conf[VAR_4[VAR_16]->ctx_index] = VAR_11;
        }
    }



    VAR_17 = VAR_20->proc_conf[VAR_5.ctx_index];
    VAR_17->ctx = VAR_20;
    VAR_17->name = VAR_13[1];

    VAR_22 = VAR_20->main_conf[VAR_5.ctx_index];

    VAR_18 = FUNC_0(&VAR_22->processes);
    if (VAR_18 == ((void*)0)) {
        return VAR_0;
    }

    *VAR_18 = VAR_17;


    VAR_18 = VAR_22->processes.elts;
    for (VAR_12 = VAR_22->processes.nelts - 2; VAR_12 >= 0 ; VAR_12--) {
        if (FUNC_4(VAR_18[VAR_12]->name.data, VAR_17->name.data) == 0) {
            FUNC_1(VAR_1, VAR_7, 0, "process repeat");
            return VAR_0;
        }
    }



    VAR_15 = *VAR_7;
    VAR_7->ctx = VAR_20;
    VAR_7->cmd_type = VAR_2;

    VAR_10 = FUNC_2(VAR_7, ((void*)0));

    *VAR_7 = VAR_15;

    return VAR_10;
}
