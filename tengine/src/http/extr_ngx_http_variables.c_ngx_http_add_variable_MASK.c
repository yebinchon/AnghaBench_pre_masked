
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_18__ ;
typedef struct TYPE_21__ TYPE_17__ ;


typedef int ngx_uint_t ;
struct TYPE_25__ {scalar_t__ len; int data; } ;
typedef TYPE_3__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_22__ {scalar_t__ len; int * data; } ;
struct TYPE_26__ {int flags; TYPE_18__ name; scalar_t__ index; scalar_t__ data; int * get_handler; int * set_handler; } ;
typedef TYPE_4__ ngx_http_variable_t ;
struct TYPE_27__ {TYPE_17__* variables_keys; } ;
typedef TYPE_5__ ngx_http_core_main_conf_t ;
struct TYPE_24__ {scalar_t__ len; int data; } ;
struct TYPE_28__ {TYPE_4__* value; TYPE_2__ key; } ;
typedef TYPE_6__ ngx_hash_key_t ;
struct TYPE_29__ {int pool; } ;
typedef TYPE_7__ ngx_conf_t ;
struct TYPE_23__ {int nelts; TYPE_6__* elts; } ;
struct TYPE_21__ {TYPE_1__ keys; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,TYPE_7__*,int ,char*,...) ;
 scalar_t__ FUNC_1 (TYPE_17__*,TYPE_18__*,TYPE_4__*,int ) ;
 TYPE_4__* FUNC_2 (TYPE_7__*,TYPE_3__*,int) ;
 TYPE_5__* FUNC_3 (TYPE_7__*,int ) ;
 int VAR_6 ;
 TYPE_4__* FUNC_4 (int ,int) ;
 int * FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_7 (int ,int ,scalar_t__) ;

ngx_http_variable_t *
FUNC_8(ngx_conf_t *VAR_7, ngx_str_t *VAR_8, ngx_uint_t VAR_9)
{
    ngx_int_t VAR_10;
    ngx_uint_t VAR_11;
    ngx_hash_key_t *VAR_12;
    ngx_http_variable_t *VAR_13;
    ngx_http_core_main_conf_t *VAR_14;

    if (VAR_8->len == 0) {
        FUNC_0(VAR_5, VAR_7, 0,
                           "invalid variable name \"$\"");
        return ((void*)0);
    }

    if (VAR_9 & VAR_3) {
        return FUNC_2(VAR_7, VAR_8, VAR_9);
    }

    VAR_14 = FUNC_3(VAR_7, VAR_6);

    VAR_12 = VAR_14->variables_keys->keys.elts;
    for (VAR_11 = 0; VAR_11 < VAR_14->variables_keys->keys.nelts; VAR_11++) {
        if (VAR_8->len != VAR_12[VAR_11].key.len
            || FUNC_7(VAR_8->data, VAR_12[VAR_11].key.data, VAR_8->len) != 0)
        {
            continue;
        }

        VAR_13 = VAR_12[VAR_11].value;

        if (!(VAR_13->flags & VAR_2)) {
            FUNC_0(VAR_5, VAR_7, 0,
                               "the duplicate \"%V\" variable", VAR_8);
            return ((void*)0);
        }

        if (!(VAR_9 & VAR_4)) {
            VAR_13->flags &= ~VAR_4;
        }

        return VAR_13;
    }

    VAR_13 = FUNC_4(VAR_7->pool, sizeof(ngx_http_variable_t));
    if (VAR_13 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_13->name.len = VAR_8->len;
    VAR_13->name.data = FUNC_5(VAR_7->pool, VAR_8->len);
    if (VAR_13->name.data == ((void*)0)) {
        return ((void*)0);
    }

    FUNC_6(VAR_13->name.data, VAR_8->data, VAR_8->len);

    VAR_13->set_handler = ((void*)0);
    VAR_13->get_handler = ((void*)0);
    VAR_13->data = 0;
    VAR_13->flags = VAR_9;
    VAR_13->index = 0;

    VAR_10 = FUNC_1(VAR_14->variables_keys, &VAR_13->name, VAR_13, 0);

    if (VAR_10 == VAR_1) {
        return ((void*)0);
    }

    if (VAR_10 == VAR_0) {
        FUNC_0(VAR_5, VAR_7, 0,
                           "conflicting variable name \"%V\"", VAR_8);
        return ((void*)0);
    }

    return VAR_13;
}
