
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_10__ {char* (* init_conf ) (TYPE_4__*,void*) ;void* (* create_conf ) (TYPE_4__*) ;} ;
typedef TYPE_2__ ngx_event_module_t ;
struct TYPE_11__ {void*** ctx; TYPE_4__* cycle; int cmd_type; scalar_t__ module_type; int pool; } ;
typedef TYPE_3__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_12__ {TYPE_1__** modules; } ;
struct TYPE_9__ {scalar_t__ type; size_t ctx_index; TYPE_2__* ctx; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 char* FUNC_0 (TYPE_3__*,int *) ;
 int FUNC_1 (TYPE_4__*,scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_2 (int ,int) ;
 void* FUNC_3 (TYPE_4__*) ;
 char* FUNC_4 (TYPE_4__*,void*) ;

__attribute__((used)) static char *
FUNC_5(ngx_conf_t *VAR_7, ngx_command_t *VAR_8, void *VAR_9)
{
    char *VAR_10;
    void ***VAR_11;
    ngx_uint_t VAR_12;
    ngx_conf_t VAR_13;
    ngx_event_module_t *VAR_14;

    if (*(void **) VAR_9) {
        return "is duplicate";
    }



    VAR_5 = FUNC_1(VAR_7->cycle, VAR_3);

    VAR_11 = FUNC_2(VAR_7->pool, sizeof(void *));
    if (VAR_11 == ((void*)0)) {
        return VAR_0;
    }

    *VAR_11 = FUNC_2(VAR_7->pool, VAR_5 * sizeof(void *));
    if (*VAR_11 == ((void*)0)) {
        return VAR_0;
    }

    *(void **) VAR_9 = VAR_11;

    for (VAR_12 = 0; VAR_7->cycle->modules[VAR_12]; VAR_12++) {
        if (VAR_7->cycle->modules[VAR_12]->type != VAR_3) {
            continue;
        }

        VAR_14 = VAR_7->cycle->modules[VAR_12]->ctx;

        if (VAR_14->create_conf) {
            (*VAR_11)[VAR_7->cycle->modules[VAR_12]->ctx_index] =
                                                     VAR_14->create_conf(VAR_7->cycle);
            if ((*VAR_11)[VAR_7->cycle->modules[VAR_12]->ctx_index] == ((void*)0)) {
                return VAR_0;
            }
        }
    }





    VAR_13 = *VAR_7;
    VAR_7->ctx = VAR_11;
    VAR_7->module_type = VAR_3;
    VAR_7->cmd_type = VAR_2;

    VAR_10 = FUNC_0(VAR_7, ((void*)0));

    *VAR_7 = VAR_13;

    if (VAR_10 != VAR_1) {
        return VAR_10;
    }

    for (VAR_12 = 0; VAR_7->cycle->modules[VAR_12]; VAR_12++) {
        if (VAR_7->cycle->modules[VAR_12]->type != VAR_3) {
            continue;
        }

        VAR_14 = VAR_7->cycle->modules[VAR_12]->ctx;

        if (VAR_14->init_conf) {
            VAR_10 = VAR_14->init_conf(VAR_7->cycle,
                              (*VAR_11)[VAR_7->cycle->modules[VAR_12]->ctx_index]);
            if (VAR_10 != VAR_1) {
                return VAR_10;
            }
        }
    }

    return VAR_1;
}
