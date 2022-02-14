
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_19__ ;
typedef struct TYPE_21__ TYPE_14__ ;
typedef struct TYPE_20__ TYPE_10__ ;


typedef int u_char ;
typedef size_t ngx_uint_t ;
struct TYPE_25__ {int next; TYPE_4__** loc_conf; int code; } ;
typedef TYPE_3__ ngx_http_script_if_code_t ;
struct TYPE_26__ {int noname; TYPE_19__* codes; int locations; int name; struct TYPE_26__** loc_conf; } ;
typedef TYPE_4__ ngx_http_rewrite_loc_conf_t ;
struct TYPE_27__ {void* (* create_loc_conf ) (TYPE_8__*) ;} ;
typedef TYPE_5__ ngx_http_module_t ;
typedef TYPE_4__ ngx_http_core_loc_conf_t ;
struct TYPE_28__ {TYPE_4__** loc_conf; int srv_conf; int main_conf; } ;
typedef TYPE_7__ ngx_http_conf_ctx_t ;
struct TYPE_29__ {scalar_t__ cmd_type; TYPE_7__* ctx; TYPE_2__* cycle; int pool; } ;
typedef TYPE_8__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_24__ {TYPE_1__** modules; } ;
struct TYPE_23__ {scalar_t__ type; size_t ctx_index; TYPE_5__* ctx; } ;
struct TYPE_22__ {int nelts; int * elts; } ;
struct TYPE_21__ {size_t ctx_index; } ;
struct TYPE_20__ {size_t ctx_index; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_3__* FUNC_0 (TYPE_19__*,int) ;
 char* FUNC_1 (TYPE_8__*,int *) ;
 scalar_t__ FUNC_2 (TYPE_8__*,int *,TYPE_4__*) ;
 TYPE_14__ VAR_7 ;
 int VAR_8 ;
 char* FUNC_3 (TYPE_8__*,TYPE_4__*) ;
 TYPE_10__ VAR_9 ;
 int VAR_10 ;
 void* FUNC_4 (int ,int) ;
 void* FUNC_5 (TYPE_8__*) ;

__attribute__((used)) static char *
FUNC_6(ngx_conf_t *VAR_11, ngx_command_t *VAR_12, void *VAR_13)
{
    ngx_http_rewrite_loc_conf_t *VAR_14 = VAR_13;

    void *VAR_15;
    char *VAR_16;
    u_char *VAR_17;
    ngx_uint_t VAR_18;
    ngx_conf_t VAR_19;
    ngx_http_module_t *VAR_20;
    ngx_http_conf_ctx_t *VAR_21, *VAR_22;
    ngx_http_core_loc_conf_t *VAR_23, *VAR_24;
    ngx_http_script_if_code_t *VAR_25;
    ngx_http_rewrite_loc_conf_t *VAR_26;

    VAR_21 = FUNC_4(VAR_11->pool, sizeof(ngx_http_conf_ctx_t));
    if (VAR_21 == ((void*)0)) {
        return VAR_0;
    }

    VAR_22 = VAR_11->ctx;
    VAR_21->main_conf = VAR_22->main_conf;
    VAR_21->srv_conf = VAR_22->srv_conf;

    VAR_21->loc_conf = FUNC_4(VAR_11->pool, sizeof(void *) * VAR_8);
    if (VAR_21->loc_conf == ((void*)0)) {
        return VAR_0;
    }

    for (VAR_18 = 0; VAR_11->cycle->modules[VAR_18]; VAR_18++) {
        if (VAR_11->cycle->modules[VAR_18]->type != VAR_3) {
            continue;
        }

        VAR_20 = VAR_11->cycle->modules[VAR_18]->ctx;

        if (VAR_20->create_loc_conf) {

            VAR_15 = VAR_20->create_loc_conf(VAR_11);
            if (VAR_15 == ((void*)0)) {
                return VAR_0;
            }

            VAR_21->loc_conf[VAR_11->cycle->modules[VAR_18]->ctx_index] = VAR_15;
        }
    }

    VAR_24 = VAR_22->loc_conf[VAR_7.ctx_index];

    VAR_23 = VAR_21->loc_conf[VAR_7.ctx_index];
    VAR_23->loc_conf = VAR_21->loc_conf;
    VAR_23->name = VAR_24->name;
    VAR_23->noname = 1;

    if (FUNC_2(VAR_11, &VAR_24->locations, VAR_23) != VAR_6) {
        return VAR_0;
    }

    if (FUNC_3(VAR_11, VAR_14) != VAR_1) {
        return VAR_0;
    }

    VAR_25 = FUNC_0(VAR_14->codes, sizeof(ngx_http_script_if_code_t));
    if (VAR_25 == ((void*)0)) {
        return VAR_0;
    }

    VAR_25->code = VAR_10;

    VAR_17 = VAR_14->codes->elts;




    VAR_26 = VAR_21->loc_conf[VAR_9.ctx_index];
    VAR_26->codes = VAR_14->codes;


    VAR_19 = *VAR_11;
    VAR_11->ctx = VAR_21;

    if (VAR_11->cmd_type == VAR_5) {
        VAR_25->loc_conf = ((void*)0);
        VAR_11->cmd_type = VAR_4;

    } else {
        VAR_25->loc_conf = VAR_21->loc_conf;
        VAR_11->cmd_type = VAR_2;
    }

    VAR_16 = FUNC_1(VAR_11, ((void*)0));

    *VAR_11 = VAR_19;

    if (VAR_16 != VAR_1) {
        return VAR_16;
    }


    if (VAR_17 != VAR_14->codes->elts) {
        VAR_25 = (ngx_http_script_if_code_t *)
                   ((u_char *) VAR_25 + ((u_char *) VAR_14->codes->elts - VAR_17));
    }

    VAR_25->next = (u_char *) VAR_14->codes->elts + VAR_14->codes->nelts
                                                - (u_char *) VAR_25;



    VAR_26->codes = ((void*)0);

    return VAR_1;
}
