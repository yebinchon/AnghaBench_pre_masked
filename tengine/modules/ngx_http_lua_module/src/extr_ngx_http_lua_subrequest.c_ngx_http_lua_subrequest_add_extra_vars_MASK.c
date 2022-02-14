
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_9__ ;
typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_10__ ;


typedef int u_char ;
typedef scalar_t__ ngx_uint_t ;
struct TYPE_26__ {size_t len; int * data; } ;
typedef TYPE_4__ ngx_str_t ;
struct TYPE_24__ {size_t len; int data; } ;
struct TYPE_23__ {size_t len; int data; } ;
struct TYPE_27__ {TYPE_2__ value; TYPE_1__ key; } ;
typedef TYPE_5__ ngx_keyval_t ;
typedef int ngx_int_t ;
struct TYPE_28__ {int valid; size_t len; int * data; scalar_t__ no_cacheable; scalar_t__ not_found; } ;
typedef TYPE_6__ ngx_http_variable_value_t ;
struct TYPE_29__ {int flags; size_t index; int data; int (* set_handler ) (TYPE_8__*,TYPE_6__*,int ) ;} ;
typedef TYPE_7__ ngx_http_variable_t ;
struct TYPE_30__ {TYPE_3__* connection; TYPE_6__* variables; int pool; } ;
typedef TYPE_8__ ngx_http_request_t ;
struct TYPE_31__ {int variables_hash; } ;
typedef TYPE_9__ ngx_http_core_main_conf_t ;
typedef int ngx_hash_t ;
struct TYPE_22__ {scalar_t__ nelts; TYPE_5__* elts; } ;
typedef TYPE_10__ ngx_array_t ;
struct TYPE_25__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_0 (int *,int ,size_t) ;
 TYPE_7__* FUNC_1 (int *,scalar_t__,int *,size_t) ;
 scalar_t__ FUNC_2 (int *,int *,size_t) ;
 int VAR_7 ;
 TYPE_9__* FUNC_3 (TYPE_8__*,int ) ;
 int FUNC_4 (int ,int ,int ,char*,TYPE_4__*,TYPE_6__*) ;
 int FUNC_5 (int ,int ,int ,char*,TYPE_4__*) ;
 int FUNC_6 (int *,int ,size_t) ;
 TYPE_6__* FUNC_7 (int ,int) ;
 int * FUNC_8 (int ,size_t) ;
 int FUNC_9 (TYPE_8__*,TYPE_6__*,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_10(ngx_http_request_t *VAR_8,
    ngx_array_t *VAR_9)
{
    ngx_http_core_main_conf_t *VAR_10;
    ngx_http_variable_t *VAR_11;
    ngx_http_variable_value_t *VAR_12;
    u_char *VAR_13;
    u_char *VAR_14;
    ngx_uint_t VAR_15, VAR_16;
    ngx_str_t VAR_17;
    size_t VAR_18;
    ngx_hash_t *VAR_19;
    ngx_keyval_t *VAR_20;



    if (VAR_9 == ((void*)0) || VAR_9->nelts == 0) {
        return VAR_6;
    }

    VAR_10 = FUNC_3(VAR_8, VAR_7);

    VAR_19 = &VAR_10->variables_hash;

    VAR_20 = VAR_9->elts;

    for (VAR_15 = 0; VAR_15 < VAR_9->nelts; VAR_15++, VAR_20++) {



        VAR_18 = VAR_20->key.len + VAR_20->value.len;

        VAR_14 = FUNC_8(VAR_8->pool, VAR_18);
        if (VAR_14 == ((void*)0)) {
            return VAR_0;
        }

        VAR_17.data = VAR_14;
        VAR_17.len = VAR_20->key.len;

        VAR_14 = FUNC_0(VAR_14, VAR_20->key.data, VAR_20->key.len);

        VAR_16 = FUNC_2(VAR_17.data, VAR_17.data, VAR_17.len);

        VAR_13 = VAR_14;
        VAR_18 = VAR_20->value.len;

        FUNC_6(VAR_14, VAR_20->value.data, VAR_18);

        VAR_11 = FUNC_1(VAR_19, VAR_16, VAR_17.data, VAR_17.len);

        if (VAR_11) {
            if (!(VAR_11->flags & VAR_2)) {
                FUNC_5(VAR_5, VAR_8->connection->log, 0,
                              "variable \"%V\" not changeable", &VAR_17);
                return VAR_1;
            }

            if (VAR_11->set_handler) {
                VAR_12 = FUNC_7(VAR_8->pool, sizeof(ngx_http_variable_value_t));
                if (VAR_12 == ((void*)0)) {
                    return VAR_0;
                }

                VAR_12->valid = 1;
                VAR_12->not_found = 0;
                VAR_12->no_cacheable = 0;

                VAR_12->data = VAR_13;
                VAR_12->len = VAR_18;

                VAR_11->set_handler(VAR_8, VAR_12, VAR_11->data);

                FUNC_4(VAR_4, VAR_8->connection->log, 0,
                               "variable \"%V\" set to value \"%v\"", &VAR_17,
                               VAR_12);

                continue;
            }

            if (VAR_11->flags & VAR_3) {
                VAR_12 = &VAR_8->variables[VAR_11->index];

                VAR_12->valid = 1;
                VAR_12->not_found = 0;
                VAR_12->no_cacheable = 0;

                VAR_12->data = VAR_13;
                VAR_12->len = VAR_18;

                FUNC_4(VAR_4, VAR_8->connection->log, 0,
                               "variable \"%V\" set to value \"%v\"",
                               &VAR_17, VAR_12);

                continue;
            }
        }

        FUNC_5(VAR_5, VAR_8->connection->log, 0,
                      "variable \"%V\" cannot be assigned a value (maybe you "
                      "forgot to define it first?) ", &VAR_17);

        return VAR_0;
    }

    return VAR_6;
}
