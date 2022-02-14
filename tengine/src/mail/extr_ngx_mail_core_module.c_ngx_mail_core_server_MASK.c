
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef size_t ngx_uint_t ;
struct TYPE_16__ {void* (* create_srv_conf ) (TYPE_7__*) ;} ;
typedef TYPE_3__ ngx_mail_module_t ;
struct TYPE_17__ {int line; int file_name; int listen; TYPE_6__* ctx; } ;
typedef TYPE_4__ ngx_mail_core_srv_conf_t ;
struct TYPE_18__ {int servers; } ;
typedef TYPE_5__ ngx_mail_core_main_conf_t ;
struct TYPE_19__ {TYPE_5__** main_conf; TYPE_4__** srv_conf; } ;
typedef TYPE_6__ ngx_mail_conf_ctx_t ;
struct TYPE_20__ {int log; int cmd_type; TYPE_6__* ctx; TYPE_2__* cycle; int pool; } ;
typedef TYPE_7__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_15__ {TYPE_1__** modules; } ;
struct TYPE_14__ {scalar_t__ type; size_t ctx_index; TYPE_3__* ctx; } ;
struct TYPE_13__ {size_t ctx_index; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_4__** FUNC_0 (int *) ;
 char* FUNC_1 (TYPE_7__*,int *) ;
 int FUNC_2 (int ,int ,int ,char*,int ,int ) ;
 TYPE_10__ VAR_5 ;
 int VAR_6 ;
 void* FUNC_3 (int ,int) ;
 void* FUNC_4 (TYPE_7__*) ;

__attribute__((used)) static char *
FUNC_5(ngx_conf_t *VAR_7, ngx_command_t *VAR_8, void *VAR_9)
{
    char *VAR_10;
    void *VAR_11;
    ngx_uint_t VAR_12;
    ngx_conf_t VAR_13;
    ngx_mail_module_t *VAR_14;
    ngx_mail_conf_ctx_t *VAR_15, *VAR_16;
    ngx_mail_core_srv_conf_t *VAR_17, **VAR_18;
    ngx_mail_core_main_conf_t *VAR_19;

    VAR_15 = FUNC_3(VAR_7->pool, sizeof(ngx_mail_conf_ctx_t));
    if (VAR_15 == ((void*)0)) {
        return VAR_0;
    }

    VAR_16 = VAR_7->ctx;
    VAR_15->main_conf = VAR_16->main_conf;



    VAR_15->srv_conf = FUNC_3(VAR_7->pool, sizeof(void *) * VAR_6);
    if (VAR_15->srv_conf == ((void*)0)) {
        return VAR_0;
    }

    for (VAR_12 = 0; VAR_7->cycle->modules[VAR_12]; VAR_12++) {
        if (VAR_7->cycle->modules[VAR_12]->type != VAR_3) {
            continue;
        }

        VAR_14 = VAR_7->cycle->modules[VAR_12]->ctx;

        if (VAR_14->create_srv_conf) {
            VAR_11 = VAR_14->create_srv_conf(VAR_7);
            if (VAR_11 == ((void*)0)) {
                return VAR_0;
            }

            VAR_15->srv_conf[VAR_7->cycle->modules[VAR_12]->ctx_index] = VAR_11;
        }
    }



    VAR_17 = VAR_15->srv_conf[VAR_5.ctx_index];
    VAR_17->ctx = VAR_15;

    VAR_19 = VAR_15->main_conf[VAR_5.ctx_index];

    VAR_18 = FUNC_0(&VAR_19->servers);
    if (VAR_18 == ((void*)0)) {
        return VAR_0;
    }

    *VAR_18 = VAR_17;




    VAR_13 = *VAR_7;
    VAR_7->ctx = VAR_15;
    VAR_7->cmd_type = VAR_4;

    VAR_10 = FUNC_1(VAR_7, ((void*)0));

    *VAR_7 = VAR_13;

    if (VAR_10 == VAR_1 && !VAR_17->listen) {
        FUNC_2(VAR_2, VAR_7->log, 0,
                      "no \"listen\" is defined for server in %s:%ui",
                      VAR_17->file_name, VAR_17->line);
        return VAR_0;
    }

    return VAR_10;
}
