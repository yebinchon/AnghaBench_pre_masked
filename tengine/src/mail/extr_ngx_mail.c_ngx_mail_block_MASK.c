
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_19__ ;
typedef struct TYPE_21__ TYPE_16__ ;


typedef size_t ngx_uint_t ;
struct TYPE_26__ {char* (* init_main_conf ) (TYPE_8__*,TYPE_6__*) ;char* (* merge_srv_conf ) (TYPE_8__*,int *,int *) ;int * (* create_srv_conf ) (TYPE_8__*) ;TYPE_6__* (* create_main_conf ) (TYPE_8__*) ;} ;
typedef TYPE_4__ ngx_mail_module_t ;
typedef int ngx_mail_listen_t ;
struct TYPE_27__ {TYPE_7__* ctx; } ;
typedef TYPE_5__ ngx_mail_core_srv_conf_t ;
struct TYPE_25__ {size_t nelts; int * elts; } ;
struct TYPE_24__ {size_t nelts; TYPE_5__** elts; } ;
struct TYPE_28__ {TYPE_3__ listen; TYPE_2__ servers; } ;
typedef TYPE_6__ ngx_mail_core_main_conf_t ;
typedef int ngx_mail_conf_port_t ;
struct TYPE_29__ {int ** srv_conf; TYPE_6__** main_conf; } ;
typedef TYPE_7__ ngx_mail_conf_ctx_t ;
struct TYPE_30__ {int temp_pool; TYPE_7__* ctx; TYPE_19__* cycle; int cmd_type; scalar_t__ module_type; int pool; } ;
typedef TYPE_8__ ngx_conf_t ;
typedef int ngx_command_t ;
typedef int ngx_array_t ;
struct TYPE_23__ {scalar_t__ type; size_t ctx_index; TYPE_4__* ctx; } ;
struct TYPE_22__ {TYPE_1__** modules; } ;
struct TYPE_21__ {size_t ctx_index; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int *,int ,int,int) ;
 char* FUNC_1 (TYPE_8__*,int *) ;
 int FUNC_2 (TYPE_19__*,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_8__*,int *,int *) ;
 TYPE_16__ VAR_5 ;
 int VAR_6 ;
 char* FUNC_4 (TYPE_8__*,int *) ;
 void* FUNC_5 (int ,int) ;
 TYPE_6__* FUNC_6 (TYPE_8__*) ;
 int * FUNC_7 (TYPE_8__*) ;
 char* FUNC_8 (TYPE_8__*,TYPE_6__*) ;
 char* FUNC_9 (TYPE_8__*,int *,int *) ;

__attribute__((used)) static char *
FUNC_10(ngx_conf_t *VAR_7, ngx_command_t *VAR_8, void *VAR_9)
{
    char *VAR_10;
    ngx_uint_t VAR_11, VAR_12, VAR_13, VAR_14;
    ngx_conf_t VAR_15;
    ngx_array_t VAR_16;
    ngx_mail_listen_t *VAR_17;
    ngx_mail_module_t *VAR_18;
    ngx_mail_conf_ctx_t *VAR_19;
    ngx_mail_core_srv_conf_t **VAR_20;
    ngx_mail_core_main_conf_t *VAR_21;

    if (*(ngx_mail_conf_ctx_t **) VAR_9) {
        return "is duplicate";
    }



    VAR_19 = FUNC_5(VAR_7->pool, sizeof(ngx_mail_conf_ctx_t));
    if (VAR_19 == ((void*)0)) {
        return VAR_0;
    }

    *(ngx_mail_conf_ctx_t **) VAR_9 = VAR_19;



    VAR_6 = FUNC_2(VAR_7->cycle, VAR_3);




    VAR_19->main_conf = FUNC_5(VAR_7->pool,
                                 sizeof(void *) * VAR_6);
    if (VAR_19->main_conf == ((void*)0)) {
        return VAR_0;
    }







    VAR_19->srv_conf = FUNC_5(VAR_7->pool, sizeof(void *) * VAR_6);
    if (VAR_19->srv_conf == ((void*)0)) {
        return VAR_0;
    }






    for (VAR_12 = 0; VAR_7->cycle->modules[VAR_12]; VAR_12++) {
        if (VAR_7->cycle->modules[VAR_12]->type != VAR_3) {
            continue;
        }

        VAR_18 = VAR_7->cycle->modules[VAR_12]->ctx;
        VAR_13 = VAR_7->cycle->modules[VAR_12]->ctx_index;

        if (VAR_18->create_main_conf) {
            VAR_19->main_conf[VAR_13] = VAR_18->create_main_conf(VAR_7);
            if (VAR_19->main_conf[VAR_13] == ((void*)0)) {
                return VAR_0;
            }
        }

        if (VAR_18->create_srv_conf) {
            VAR_19->srv_conf[VAR_13] = VAR_18->create_srv_conf(VAR_7);
            if (VAR_19->srv_conf[VAR_13] == ((void*)0)) {
                return VAR_0;
            }
        }
    }




    VAR_15 = *VAR_7;
    VAR_7->ctx = VAR_19;

    VAR_7->module_type = VAR_3;
    VAR_7->cmd_type = VAR_2;
    VAR_10 = FUNC_1(VAR_7, ((void*)0));

    if (VAR_10 != VAR_1) {
        *VAR_7 = VAR_15;
        return VAR_10;
    }




    VAR_21 = VAR_19->main_conf[VAR_5.ctx_index];
    VAR_20 = VAR_21->servers.elts;

    for (VAR_12 = 0; VAR_7->cycle->modules[VAR_12]; VAR_12++) {
        if (VAR_7->cycle->modules[VAR_12]->type != VAR_3) {
            continue;
        }

        VAR_18 = VAR_7->cycle->modules[VAR_12]->ctx;
        VAR_13 = VAR_7->cycle->modules[VAR_12]->ctx_index;



        VAR_7->ctx = VAR_19;

        if (VAR_18->init_main_conf) {
            VAR_10 = VAR_18->init_main_conf(VAR_7, VAR_19->main_conf[VAR_13]);
            if (VAR_10 != VAR_1) {
                *VAR_7 = VAR_15;
                return VAR_10;
            }
        }

        for (VAR_14 = 0; VAR_14 < VAR_21->servers.nelts; VAR_14++) {



            VAR_7->ctx = VAR_20[VAR_14]->ctx;

            if (VAR_18->merge_srv_conf) {
                VAR_10 = VAR_18->merge_srv_conf(VAR_7,
                                            VAR_19->srv_conf[VAR_13],
                                            VAR_20[VAR_14]->ctx->srv_conf[VAR_13]);
                if (VAR_10 != VAR_1) {
                    *VAR_7 = VAR_15;
                    return VAR_10;
                }
            }
        }
    }

    *VAR_7 = VAR_15;


    if (FUNC_0(&VAR_16, VAR_7->temp_pool, 4, sizeof(ngx_mail_conf_port_t))
        != VAR_4)
    {
        return VAR_0;
    }

    VAR_17 = VAR_21->listen.elts;

    for (VAR_11 = 0; VAR_11 < VAR_21->listen.nelts; VAR_11++) {
        if (FUNC_3(VAR_7, &VAR_16, &VAR_17[VAR_11]) != VAR_4) {
            return VAR_0;
        }
    }

    return FUNC_4(VAR_7, &VAR_16);
}
