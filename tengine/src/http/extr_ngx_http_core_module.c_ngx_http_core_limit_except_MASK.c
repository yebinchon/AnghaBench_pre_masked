
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_12__ ;


typedef int uint32_t ;
typedef size_t ngx_uint_t ;
struct TYPE_23__ {int data; } ;
typedef TYPE_4__ ngx_str_t ;
struct TYPE_24__ {void* (* create_loc_conf ) (TYPE_9__*) ;} ;
typedef TYPE_5__ ngx_http_module_t ;
struct TYPE_25__ {int method; scalar_t__ name; } ;
typedef TYPE_6__ ngx_http_method_name_t ;
struct TYPE_26__ {int limit_except; int noname; int lmt_excpt; int locations; int name; struct TYPE_26__** loc_conf; struct TYPE_26__** limit_except_loc_conf; } ;
typedef TYPE_7__ ngx_http_core_loc_conf_t ;
struct TYPE_27__ {TYPE_7__** loc_conf; int srv_conf; int main_conf; } ;
typedef TYPE_8__ ngx_http_conf_ctx_t ;
struct TYPE_28__ {int cmd_type; TYPE_8__* ctx; TYPE_3__* cycle; int pool; TYPE_1__* args; } ;
typedef TYPE_9__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_22__ {TYPE_2__** modules; } ;
struct TYPE_21__ {scalar_t__ type; size_t ctx_index; TYPE_5__* ctx; } ;
struct TYPE_20__ {size_t nelts; TYPE_4__* elts; } ;
struct TYPE_19__ {size_t ctx_index; } ;


 char* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,TYPE_9__*,int ,char*,TYPE_4__*) ;
 char* FUNC_1 (TYPE_9__*,int *) ;
 scalar_t__ FUNC_2 (TYPE_9__*,int *,TYPE_7__*) ;
 TYPE_12__ VAR_7 ;
 int VAR_8 ;
 TYPE_6__* VAR_9 ;
 void* FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int ,scalar_t__) ;
 void* FUNC_5 (TYPE_9__*) ;

__attribute__((used)) static char *
FUNC_6(ngx_conf_t *VAR_10, ngx_command_t *VAR_11, void *VAR_12)
{
    ngx_http_core_loc_conf_t *VAR_13 = VAR_12;

    char *VAR_14;
    void *VAR_15;
    ngx_str_t *VAR_16;
    ngx_uint_t VAR_17;
    ngx_conf_t VAR_18;
    ngx_http_module_t *VAR_19;
    ngx_http_conf_ctx_t *VAR_20, *VAR_21;
    ngx_http_method_name_t *VAR_22;
    ngx_http_core_loc_conf_t *VAR_23;

    if (VAR_13->limit_except) {
        return "is duplicate";
    }

    VAR_13->limit_except = 0xffffffff;

    VAR_16 = VAR_10->args->elts;

    for (VAR_17 = 1; VAR_17 < VAR_10->args->nelts; VAR_17++) {
        for (VAR_22 = VAR_9; VAR_22->name; VAR_22++) {

            if (FUNC_4(VAR_16[VAR_17].data, VAR_22->name) == 0) {
                VAR_13->limit_except &= VAR_22->method;
                goto next;
            }
        }

        FUNC_0(VAR_5, VAR_10, 0,
                           "invalid method \"%V\"", &VAR_16[VAR_17]);
        return VAR_0;

    next:
        continue;
    }

    if (!(VAR_13->limit_except & VAR_1)) {
        VAR_13->limit_except &= (uint32_t) ~VAR_2;
    }

    VAR_20 = FUNC_3(VAR_10->pool, sizeof(ngx_http_conf_ctx_t));
    if (VAR_20 == ((void*)0)) {
        return VAR_0;
    }

    VAR_21 = VAR_10->ctx;
    VAR_20->main_conf = VAR_21->main_conf;
    VAR_20->srv_conf = VAR_21->srv_conf;

    VAR_20->loc_conf = FUNC_3(VAR_10->pool, sizeof(void *) * VAR_8);
    if (VAR_20->loc_conf == ((void*)0)) {
        return VAR_0;
    }

    for (VAR_17 = 0; VAR_10->cycle->modules[VAR_17]; VAR_17++) {
        if (VAR_10->cycle->modules[VAR_17]->type != VAR_4) {
            continue;
        }

        VAR_19 = VAR_10->cycle->modules[VAR_17]->ctx;

        if (VAR_19->create_loc_conf) {

            VAR_15 = VAR_19->create_loc_conf(VAR_10);
            if (VAR_15 == ((void*)0)) {
                return VAR_0;
            }

            VAR_20->loc_conf[VAR_10->cycle->modules[VAR_17]->ctx_index] = VAR_15;
        }
    }


    VAR_23 = VAR_20->loc_conf[VAR_7.ctx_index];
    VAR_13->limit_except_loc_conf = VAR_20->loc_conf;
    VAR_23->loc_conf = VAR_20->loc_conf;
    VAR_23->name = VAR_13->name;
    VAR_23->noname = 1;
    VAR_23->lmt_excpt = 1;

    if (FUNC_2(VAR_10, &VAR_13->locations, VAR_23) != VAR_6) {
        return VAR_0;
    }

    VAR_18 = *VAR_10;
    VAR_10->ctx = VAR_20;
    VAR_10->cmd_type = VAR_3;

    VAR_14 = FUNC_1(VAR_10, ((void*)0));

    *VAR_10 = VAR_18;

    return VAR_14;
}
