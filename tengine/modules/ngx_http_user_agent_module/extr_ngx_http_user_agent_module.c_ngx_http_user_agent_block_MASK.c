
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {int len; int data; } ;
typedef TYPE_2__ ngx_str_t ;
struct TYPE_17__ {uintptr_t data; int get_handler; } ;
typedef TYPE_3__ ngx_http_variable_t ;
struct TYPE_18__ {int * default_value; TYPE_6__* trie; int pool; } ;
typedef TYPE_4__ ngx_http_user_agent_ctx_t ;
struct TYPE_19__ {void* handler_conf; int handler; TYPE_4__* ctx; int pool; TYPE_1__* args; } ;
typedef TYPE_5__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_20__ {scalar_t__ (* build_clue ) (TYPE_6__*) ;} ;
struct TYPE_15__ {TYPE_2__* elts; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,TYPE_5__*,int ,char*) ;
 char* FUNC_1 (TYPE_5__*,int *) ;
 TYPE_3__* FUNC_2 (TYPE_5__*,TYPE_2__*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_4__* FUNC_3 (int ,int) ;
 TYPE_6__* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (TYPE_6__*) ;

__attribute__((used)) static char *
FUNC_6(ngx_conf_t *VAR_6, ngx_command_t *VAR_7, void *VAR_8)
{
    char *VAR_9;
    ngx_str_t *VAR_10, VAR_11;
    ngx_conf_t VAR_12;
    ngx_http_variable_t *VAR_13;
    ngx_http_user_agent_ctx_t *VAR_14;

    VAR_10 = VAR_6->args->elts;

    VAR_11 = VAR_10[1];
    VAR_11.data++;
    VAR_11.len--;

    VAR_13 = FUNC_2(VAR_6, &VAR_11, VAR_1);
    if (VAR_13 == ((void*)0)) {
        return VAR_0;
    }

    VAR_14 = FUNC_3(VAR_6->pool, sizeof(ngx_http_user_agent_ctx_t));
    if (VAR_14 == ((void*)0)) {
        return VAR_0;
    }

    VAR_14->pool = VAR_6->pool;
    VAR_14->trie = FUNC_4(VAR_14->pool);
    if (VAR_14->trie == ((void*)0)) {
        return VAR_0;
    }

    VAR_14->default_value = ((void*)0);

    VAR_13->get_handler = VAR_5;
    VAR_13->data = (uintptr_t) VAR_14;

    VAR_12 = *VAR_6;
    VAR_6->ctx = VAR_14;
    VAR_6->handler = VAR_4;
    VAR_6->handler_conf = VAR_8;

    VAR_9 = FUNC_1(VAR_6, ((void*)0));
    if (VAR_3 != VAR_14->trie->build_clue(VAR_14->trie)) {
        return VAR_0;
    }

    *VAR_6 = VAR_12;
    if (VAR_14->default_value == ((void*)0)) {
        FUNC_0(VAR_2, VAR_6, 0, "no default value");
        VAR_9 = VAR_0;
    }

    return VAR_9;
}
