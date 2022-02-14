
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_9__ ;
typedef struct TYPE_35__ TYPE_8__ ;
typedef struct TYPE_34__ TYPE_7__ ;
typedef struct TYPE_33__ TYPE_6__ ;
typedef struct TYPE_32__ TYPE_5__ ;
typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;
typedef struct TYPE_27__ TYPE_10__ ;


typedef int ngx_uint_t ;
struct TYPE_31__ {TYPE_5__* (* insert ) (TYPE_4__*,TYPE_6__*,int) ;} ;
typedef TYPE_4__ ngx_trie_t ;
struct TYPE_32__ {void* value; } ;
typedef TYPE_5__ ngx_trie_node_t ;
struct TYPE_33__ {int data; int len; } ;
typedef TYPE_6__ ngx_str_t ;
typedef int ngx_http_variable_value_t ;
typedef int ngx_http_variable_t ;
struct TYPE_34__ {scalar_t__ left; scalar_t__ right; TYPE_3__* var; } ;
typedef TYPE_7__ ngx_http_user_agent_interval_t ;
struct TYPE_35__ {int pool; TYPE_2__* default_value; TYPE_4__* trie; } ;
typedef TYPE_8__ ngx_http_user_agent_ctx_t ;
struct TYPE_36__ {int log; int cycle; TYPE_1__* args; TYPE_8__* ctx; } ;
typedef TYPE_9__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_27__ {int nelts; scalar_t__ elts; } ;
typedef TYPE_10__ ngx_array_t ;
struct TYPE_30__ {int valid; scalar_t__ no_cacheable; scalar_t__ not_found; int data; int len; } ;
struct TYPE_29__ {int valid; scalar_t__ no_cacheable; scalar_t__ not_found; int data; int len; } ;
struct TYPE_28__ {int nelts; TYPE_6__* elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_10__* FUNC_0 (int ,int,int) ;
 scalar_t__ FUNC_1 (TYPE_10__*) ;
 scalar_t__ FUNC_2 (int ,TYPE_6__*,int) ;
 int FUNC_3 (int ,TYPE_9__*,int ,char*) ;
 char* FUNC_4 (TYPE_9__*,TYPE_6__*) ;
 TYPE_7__* FUNC_5 (TYPE_9__*,TYPE_6__*) ;
 int FUNC_6 (int ,int ,int ,char*,int ) ;
 void* FUNC_7 (int ,int) ;
 scalar_t__ FUNC_8 (int ,char*) ;
 TYPE_5__* FUNC_9 (TYPE_4__*,TYPE_6__*,int) ;
 TYPE_5__* FUNC_10 (TYPE_4__*,TYPE_6__*,int) ;

__attribute__((used)) static char *
FUNC_11(ngx_conf_t *VAR_9, ngx_command_t *VAR_10, void *VAR_11)
{
    ngx_str_t *VAR_12, *VAR_13, VAR_14;
    ngx_uint_t VAR_15, VAR_16, VAR_17;
    ngx_trie_t *VAR_18;
    ngx_array_t *VAR_19;
    ngx_trie_node_t *VAR_20;
    ngx_http_user_agent_ctx_t *VAR_21;
    ngx_http_user_agent_interval_t *VAR_22, *VAR_23;

    VAR_21 = VAR_9->ctx;
    VAR_18 = VAR_21->trie;

    VAR_12 = VAR_9->args->elts;
    VAR_16 = VAR_9->args->nelts;

    VAR_13 = ((void*)0);

    if (VAR_16 <= 1) {
        FUNC_3(VAR_5, VAR_9, 0,
                                 "invalid first parameter");
        return VAR_0;

    }

    if (VAR_16 == 2) {
        if (FUNC_8(VAR_12[0].data, "include") == 0) {

            VAR_14 = VAR_12[1];
            if (FUNC_2(VAR_9->cycle, &VAR_14, 1) != VAR_6) {
                return VAR_0;
            }

            FUNC_6(VAR_4, VAR_9->log, 0, "include %s",
                           VAR_14.data);
            return FUNC_4(VAR_9, &VAR_14);
        }

        if (FUNC_8(VAR_12[0].data, "default") == 0) {

            if (VAR_21->default_value != ((void*)0)) {
                FUNC_3(VAR_5, VAR_9, 0, "is duplicate");
                return VAR_0;
            }

            VAR_21->default_value = FUNC_7(VAR_21->pool,
                                             sizeof(ngx_http_variable_t));
            if (VAR_21->default_value == ((void*)0)) {
                return VAR_0;
            }

            VAR_21->default_value->len = VAR_12[1].len;
            VAR_21->default_value->data = VAR_12[1].data;

            VAR_21->default_value->not_found = 0;
            VAR_21->default_value->no_cacheable =0;
            VAR_21->default_value->valid =1;

            return VAR_1;
        }

        if (FUNC_8(VAR_12[0].data, "greedy") == 0) {
            VAR_17 = VAR_8 | VAR_7;
            VAR_18->insert(VAR_18, VAR_12 + 1, VAR_17);

            return VAR_1;
        }
    }

    if (VAR_16 == 2) {

        VAR_13 = VAR_12;

        VAR_22 = FUNC_7(VAR_21->pool,
                               sizeof(ngx_http_user_agent_interval_t));
        if (VAR_22 == ((void*)0)) {
            return VAR_0;
        }

        VAR_22->var = FUNC_7(VAR_21->pool,
                                    sizeof(ngx_http_variable_value_t));
        if (VAR_22->var == ((void*)0)) {
            return VAR_0;
        }

        VAR_22->left = VAR_3;
        VAR_22->right = VAR_2;

        VAR_22->var->len = VAR_12[1].len;
        VAR_22->var->data = VAR_12[1].data;

        VAR_22->var->not_found = 0;
        VAR_22->var->no_cacheable = 0;
        VAR_22->var->valid = 1;

        goto insert;
    }

    if (VAR_16 == 3) {

        VAR_13 = VAR_12;
        VAR_22 = FUNC_5(VAR_9, VAR_12 + 1);
        if (VAR_22 == ((void*)0)) {
            return VAR_0;
        }

        VAR_22->var->len = VAR_12[2].len;
        VAR_22->var->data = VAR_12[2].data;

        VAR_22->var->not_found = 0;
        VAR_22->var->no_cacheable =0;
        VAR_22->var->valid = 1;

        goto insert;
    }

    FUNC_3(VAR_5, VAR_9, 0, "too many args");
    return VAR_0;

insert:

    VAR_17 = VAR_8;
    VAR_20 = VAR_18->insert(VAR_18, VAR_13, VAR_17);
    if (VAR_20 == ((void*)0)) {
        return VAR_0;
    }

    VAR_19 = (ngx_array_t *) VAR_20->value;
    if (VAR_19 == ((void*)0)) {
        VAR_19 = FUNC_0(VAR_21->pool, 2,
                                 sizeof(ngx_http_user_agent_interval_t));
        if (VAR_19 == ((void*)0)) {
            return VAR_0;
        }
    }

    VAR_23 = (ngx_http_user_agent_interval_t *) VAR_19->elts;
    for (VAR_15 = 0; VAR_15 < VAR_19->nelts; VAR_15++) {
        if ((VAR_23[VAR_15].left >= VAR_22->left && VAR_23[VAR_15].left <= VAR_22->right)
            || (VAR_23[VAR_15].right >= VAR_22->left && VAR_23[VAR_15].right <= VAR_22->right)
            || (VAR_22->left >= VAR_23[VAR_15].left && VAR_22->left <= VAR_23[VAR_15].right)
            || (VAR_22->right >= VAR_23[VAR_15].left && VAR_22->right <= VAR_23[VAR_15].right))
        {
            FUNC_3(VAR_5, VAR_9, 0, "interval covered");
            return VAR_0;
        }
    }

    VAR_23 = (ngx_http_user_agent_interval_t *) FUNC_1(VAR_19);
    if (VAR_23 == ((void*)0)) {
        return VAR_0;
    }

    *VAR_23 = *VAR_22;
    VAR_20->value = (void *) VAR_19;

    return VAR_1;
}
