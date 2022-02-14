
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_17__ ;
typedef struct TYPE_19__ TYPE_16__ ;


typedef size_t ngx_uint_t ;
struct TYPE_23__ {int data; } ;
struct TYPE_24__ {char* (* init_main_conf ) (TYPE_8__*,TYPE_5__*) ;char* (* merge_proc_conf ) (TYPE_8__*,int *,int *) ;TYPE_3__ name; int * (* create_proc_conf ) (TYPE_8__*) ;TYPE_5__* (* create_main_conf ) (TYPE_8__*) ;} ;
typedef TYPE_4__ ngx_proc_module_t ;
struct TYPE_21__ {size_t nelts; TYPE_6__** elts; } ;
struct TYPE_25__ {TYPE_1__ processes; } ;
typedef TYPE_5__ ngx_proc_main_conf_t ;
struct TYPE_22__ {char* data; } ;
struct TYPE_26__ {TYPE_7__* ctx; TYPE_2__ name; } ;
typedef TYPE_6__ ngx_proc_conf_t ;
struct TYPE_27__ {int ** proc_conf; TYPE_5__** main_conf; } ;
typedef TYPE_7__ ngx_proc_conf_ctx_t ;
struct TYPE_28__ {TYPE_7__* ctx; int cmd_type; scalar_t__ module_type; int pool; } ;
typedef TYPE_8__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_20__ {scalar_t__ type; size_t ctx_index; TYPE_4__* ctx; } ;
struct TYPE_19__ {size_t ctx_index; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 char* FUNC_0 (TYPE_8__*,int *) ;
 TYPE_17__** VAR_4 ;
 void* FUNC_1 (int ,int) ;
 TYPE_16__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int ,char*) ;
 TYPE_5__* FUNC_3 (TYPE_8__*) ;
 int * FUNC_4 (TYPE_8__*) ;
 char* FUNC_5 (TYPE_8__*,TYPE_5__*) ;
 char* FUNC_6 (TYPE_8__*,int *,int *) ;

__attribute__((used)) static char *
FUNC_7(ngx_conf_t *VAR_7, ngx_command_t *VAR_8, void *VAR_9)
{
    char *VAR_10;
    ngx_uint_t VAR_11, VAR_12, VAR_13;
    ngx_conf_t VAR_14;
    ngx_proc_conf_t **VAR_15;
    ngx_proc_module_t *VAR_16;
    ngx_proc_conf_ctx_t *VAR_17;
    ngx_proc_main_conf_t *VAR_18;


    VAR_17 = FUNC_1(VAR_7->pool, sizeof(ngx_proc_conf_ctx_t));
    if (VAR_17 == ((void*)0)) {
        return VAR_0;
    }

    *(ngx_proc_conf_ctx_t **) VAR_9 = VAR_17;

    VAR_6 = 0;

    for (VAR_11 = 0; VAR_4[VAR_11]; VAR_11++) {
        if (VAR_4[VAR_11]->type != VAR_3) {
            continue;
        }

        VAR_4[VAR_11]->ctx_index = VAR_6++;
    }

    VAR_17->main_conf = FUNC_1(VAR_7->pool,
                                 VAR_6 * sizeof(void *));
    if (VAR_17->main_conf == ((void*)0)) {
        return VAR_0;
    }

    VAR_17->proc_conf = FUNC_1(VAR_7->pool,
                                 sizeof(void *) * VAR_6);
    if (VAR_17->proc_conf == ((void*)0)) {
        return VAR_0;
    }



    for (VAR_11 = 0; VAR_4[VAR_11]; VAR_11++) {
        if (VAR_4[VAR_11]->type != VAR_3) {
            continue;
        }

        VAR_16 = VAR_4[VAR_11]->ctx;
        VAR_12 = VAR_4[VAR_11]->ctx_index;

        if (VAR_16->create_main_conf) {

            VAR_17->main_conf[VAR_12] = VAR_16->create_main_conf(VAR_7);

            if (VAR_17->main_conf[VAR_12] == ((void*)0)) {
                return VAR_0;
            }
        }

        if (VAR_16->create_proc_conf) {
            VAR_17->proc_conf[VAR_12] = VAR_16->create_proc_conf(VAR_7);

            if (VAR_17->proc_conf[VAR_12] == ((void*)0)) {
                return VAR_0;
            }
        }
    }


    VAR_14 = *VAR_7;
    VAR_7->ctx = VAR_17;


    VAR_7->module_type = VAR_3;
    VAR_7->cmd_type = VAR_2;

    VAR_10 = FUNC_0(VAR_7, ((void*)0));

    if (VAR_10 != VAR_1) {
        *VAR_7 = VAR_14;
        return VAR_10;
    }

    VAR_18 = VAR_17->main_conf[VAR_5.ctx_index];
    VAR_15 = VAR_18->processes.elts;

    for (VAR_11 = 0; VAR_4[VAR_11]; VAR_11++) {

        if (VAR_4[VAR_11]->type != VAR_3) {
            continue;
        }

        VAR_16 = VAR_4[VAR_11]->ctx;
        VAR_12 = VAR_4[VAR_11]->ctx_index;

        VAR_7->ctx = VAR_17;

        if (VAR_16->init_main_conf) {
            VAR_10 = VAR_16->init_main_conf(VAR_7,VAR_17->main_conf[VAR_12]);
            if (VAR_10 != VAR_1) {
                *VAR_7 = VAR_14;
                return VAR_10;
            }
        }

        for (VAR_13 = 0; VAR_13 < VAR_18->processes.nelts; VAR_13++) {

            VAR_7->ctx = VAR_15[VAR_13]->ctx;

            if (FUNC_2(VAR_16->name.data, VAR_15[VAR_13]->name.data) == 0
                || FUNC_2(VAR_16->name.data, "proc_core") == 0)
            {
                if (VAR_16->merge_proc_conf) {
                    VAR_10 = VAR_16->merge_proc_conf(VAR_7, VAR_17->proc_conf[VAR_12],
                                                 VAR_15[VAR_13]->ctx->proc_conf[VAR_12]);

                    if (VAR_10 != VAR_1) {
                        *VAR_7 = VAR_14;
                        return VAR_10;
                    }


                    VAR_17->proc_conf[VAR_12] = VAR_15[VAR_13]->ctx->proc_conf[VAR_12];
                }
            }
        }
    }

    *VAR_7 = VAR_14;

    return VAR_1;
}
