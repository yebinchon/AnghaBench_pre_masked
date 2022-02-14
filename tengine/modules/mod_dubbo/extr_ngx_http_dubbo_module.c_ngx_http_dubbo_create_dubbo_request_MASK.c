
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_55__ TYPE_9__ ;
typedef struct TYPE_54__ TYPE_8__ ;
typedef struct TYPE_53__ TYPE_7__ ;
typedef struct TYPE_52__ TYPE_6__ ;
typedef struct TYPE_51__ TYPE_5__ ;
typedef struct TYPE_50__ TYPE_4__ ;
typedef struct TYPE_49__ TYPE_3__ ;
typedef struct TYPE_48__ TYPE_33__ ;
typedef struct TYPE_47__ TYPE_2__ ;
typedef struct TYPE_46__ TYPE_25__ ;
typedef struct TYPE_45__ TYPE_20__ ;
typedef struct TYPE_44__ TYPE_1__ ;
typedef struct TYPE_43__ TYPE_19__ ;
typedef struct TYPE_42__ TYPE_18__ ;
typedef struct TYPE_41__ TYPE_17__ ;
typedef struct TYPE_40__ TYPE_16__ ;
typedef struct TYPE_39__ TYPE_15__ ;
typedef struct TYPE_38__ TYPE_14__ ;
typedef struct TYPE_37__ TYPE_13__ ;
typedef struct TYPE_36__ TYPE_12__ ;
typedef struct TYPE_35__ TYPE_11__ ;
typedef struct TYPE_34__ TYPE_10__ ;


typedef size_t ngx_uint_t ;
struct TYPE_50__ {scalar_t__ data; scalar_t__ len; } ;
struct TYPE_49__ {scalar_t__ len; } ;
struct TYPE_54__ {scalar_t__ lowcase_key; TYPE_4__ value; TYPE_3__ key; } ;
typedef TYPE_8__ ngx_table_elt_t ;
typedef int ngx_multi_request_t ;
struct TYPE_55__ {size_t nelts; TYPE_8__* elts; struct TYPE_55__* next; } ;
typedef TYPE_9__ ngx_list_part_t ;
struct TYPE_45__ {scalar_t__ data; scalar_t__ len; } ;
struct TYPE_34__ {TYPE_20__ value; TYPE_20__ key; } ;
typedef TYPE_10__ ngx_keyval_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_35__ {scalar_t__ data; scalar_t__ len; scalar_t__ not_found; } ;
typedef TYPE_11__ ngx_http_variable_value_t ;
struct TYPE_44__ {TYPE_9__ part; } ;
struct TYPE_47__ {TYPE_1__ headers; } ;
struct TYPE_36__ {TYPE_5__* connection; TYPE_2__ headers_in; int pool; } ;
typedef TYPE_12__ ngx_http_request_t ;
struct TYPE_37__ {int method; int service_version; int service_name; TYPE_6__* args_in; scalar_t__ pass_all_headers; scalar_t__ pass_body; } ;
typedef TYPE_13__ ngx_http_dubbo_loc_conf_t ;
struct TYPE_38__ {TYPE_16__* connection; } ;
typedef TYPE_14__ ngx_http_dubbo_ctx_t ;
struct TYPE_39__ {scalar_t__ key_var_index; scalar_t__ value_var_index; TYPE_20__ value; TYPE_20__ key; } ;
typedef TYPE_15__ ngx_http_dubbo_arg_t ;
struct TYPE_40__ {int log; int temp_pool; } ;
typedef TYPE_16__ ngx_dubbo_connection_t ;
struct TYPE_53__ {int * m; } ;
struct TYPE_41__ {TYPE_7__ value; int type; } ;
typedef TYPE_17__ ngx_dubbo_arg_t ;
typedef int ngx_connection_t ;
struct TYPE_42__ {TYPE_33__* buf; struct TYPE_42__* next; } ;
typedef TYPE_18__ ngx_chain_t ;
struct TYPE_43__ {scalar_t__ last; scalar_t__ pos; } ;
typedef TYPE_19__ ngx_buf_t ;
typedef int ngx_array_t ;
struct TYPE_52__ {size_t nelts; TYPE_15__* elts; } ;
struct TYPE_51__ {int log; } ;
struct TYPE_48__ {scalar_t__ pos; scalar_t__ last; scalar_t__ file_pos; scalar_t__ file_last; int file; scalar_t__ in_file; } ;
struct TYPE_46__ {scalar_t__ data; scalar_t__ len; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 void* FUNC_0 (int ,size_t,int) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_33__*) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__,scalar_t__) ;
 int * FUNC_4 (int *,TYPE_12__*) ;
 TYPE_19__* FUNC_5 (int ,size_t) ;
 scalar_t__ FUNC_6 (TYPE_16__*,int *,int *,int *,int *,int *) ;
 TYPE_14__* FUNC_7 (TYPE_12__*) ;
 int VAR_6 ;
 TYPE_25__ VAR_7 ;
 TYPE_11__* FUNC_8 (TYPE_12__*,scalar_t__) ;
 TYPE_13__* FUNC_9 (TYPE_12__*,int ) ;
 int FUNC_10 (int ,int ,int ,char*,...) ;
 scalar_t__ FUNC_11 (int ,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_12 (TYPE_20__*) ;

__attribute__((used)) static ngx_int_t
FUNC_13(ngx_http_request_t *VAR_8, ngx_connection_t *VAR_9, ngx_multi_request_t **VAR_10, ngx_chain_t *VAR_11)
{
    ngx_http_dubbo_ctx_t *VAR_12;
    ngx_multi_request_t *VAR_13;
    ngx_dubbo_connection_t *VAR_14;
    ngx_http_dubbo_loc_conf_t *VAR_15;

    ngx_array_t *VAR_16;
    ngx_dubbo_arg_t *VAR_17;
    ngx_keyval_t *VAR_18;
    ngx_uint_t VAR_19;

    size_t VAR_20 = 0;
    ngx_int_t VAR_21;
    ngx_buf_t *VAR_22 = ((void*)0);
    ngx_chain_t *VAR_23;

    ngx_http_variable_value_t *VAR_24;
    size_t VAR_25;

    VAR_12 = FUNC_7(VAR_8);
    VAR_14 = VAR_12->connection;


    for (VAR_23 = VAR_11; VAR_23; VAR_23 = VAR_23->next) {
        VAR_20 += FUNC_2(VAR_23->buf);
    }

    if (VAR_20 > 0) {
        VAR_22 = FUNC_5(VAR_8->pool, VAR_20);
        if (VAR_22 == ((void*)0)) {
            return VAR_2;
        }
        for (VAR_23 = VAR_11; VAR_23; VAR_23 = VAR_23->next) {
            if (VAR_23->buf->in_file) {
                VAR_21 = FUNC_11(VAR_23->buf->file, VAR_22->last,
                        VAR_23->buf->file_last - VAR_23->buf->file_pos, VAR_23->buf->file_pos);

                if (VAR_21 == VAR_2) {
                    return VAR_2;
                }

                VAR_22->last += VAR_21;
            } else {
                VAR_22->last = FUNC_3(VAR_22->last, VAR_23->buf->pos, VAR_23->buf->last - VAR_23->buf->pos);
            }
        }
    }

    if (VAR_14 == ((void*)0)) {
        return VAR_2;
    }

    VAR_13 = FUNC_4(VAR_9, VAR_8);
    if (VAR_13 == ((void*)0)) {
        return VAR_2;
    }

    *VAR_10 = VAR_13;

    VAR_15 = FUNC_9(VAR_8, VAR_6);

    VAR_16 = FUNC_0(VAR_14->temp_pool, 1, sizeof(ngx_dubbo_arg_t));
    if (VAR_16 == ((void*)0)) {
        return VAR_2;
    }

    VAR_17 = (ngx_dubbo_arg_t*)FUNC_1(VAR_16);
    if (VAR_17 == ((void*)0)) {
        return VAR_2;
    }

    if (VAR_15->args_in == ((void*)0)) {
        VAR_19 = 1;
    } else {
        VAR_19 = VAR_15->args_in->nelts;
    }

    VAR_17->type = VAR_0;
    VAR_17->value.m = FUNC_0(VAR_14->temp_pool, VAR_19, sizeof(ngx_keyval_t));

    if (VAR_22 && VAR_15->pass_body) {
        VAR_18 = (ngx_keyval_t*)FUNC_1(VAR_17->value.m);
        if (VAR_18 == ((void*)0)) {
            return VAR_2;
        }

        VAR_18->key.data = VAR_7.data;
        VAR_18->key.len = VAR_7.len;
        VAR_18->value.data = VAR_22->pos;
        VAR_18->value.len = VAR_22->last - VAR_22->pos;
    }

    if (VAR_15->pass_all_headers) {

        ngx_uint_t VAR_26;
        ngx_list_part_t *VAR_27;
        ngx_table_elt_t *VAR_28;

        VAR_27 = &VAR_8->headers_in.headers.part;
        VAR_28 = VAR_27->elts;

        for (VAR_26 = 0; ; VAR_26++) {
            if (VAR_26 >= VAR_27->nelts) {
                if (VAR_27->next == ((void*)0)) {
                    break;
                }

                VAR_27 = VAR_27->next;
                VAR_28 = VAR_27->elts;
                VAR_26 = 0;
            }

            VAR_18 = (ngx_keyval_t*)FUNC_1(VAR_17->value.m);
            if (VAR_18 == ((void*)0)) {
                return VAR_2;
            }

            VAR_18->key.data = VAR_28[VAR_26].lowcase_key;
            VAR_18->key.len = VAR_28[VAR_26].key.len;
            VAR_18->value.data = VAR_28[VAR_26].value.data;
            VAR_18->value.len = VAR_28[VAR_26].value.len;
        }
    }

    if (VAR_15->args_in != ((void*)0)) {

        ngx_http_dubbo_arg_t *VAR_29 = VAR_15->args_in->elts;
        for (VAR_25 = 0; VAR_25 < VAR_15->args_in->nelts; VAR_25++) {
            VAR_18 = (ngx_keyval_t*)FUNC_1(VAR_17->value.m);
            if (VAR_18 == ((void*)0)) {
                return VAR_2;
            }


            if (VAR_29[VAR_25].key_var_index != VAR_1) {
                VAR_24 = FUNC_8(VAR_8, VAR_29[VAR_25].key_var_index);
                if (VAR_24 == ((void*)0) || VAR_24->not_found) {
                    FUNC_10(VAR_4, VAR_8->connection->log, 0
                            , "dubbo: cannot found pass set key from variable index %ui, %V"
                            , VAR_29[VAR_25].key_var_index, &VAR_29[VAR_25].key);
                    FUNC_12(&VAR_18->key);
                } else {
                    VAR_18->key.data = VAR_24->data;
                    VAR_18->key.len = VAR_24->len;
                }
            } else {
                VAR_18->key = VAR_29[VAR_25].key;
            }

            if (VAR_29[VAR_25].value_var_index != VAR_1) {
                VAR_24 = FUNC_8(VAR_8, VAR_29[VAR_25].value_var_index);
                if (VAR_24 == ((void*)0) || VAR_24->not_found) {
                    FUNC_10(VAR_4, VAR_8->connection->log, 0
                            , "dubbo: cannot found pass set key from variable index %ui, %V"
                            , VAR_29[VAR_25].value_var_index, &VAR_29[VAR_25].value);
                    FUNC_12(&VAR_18->value);
                } else {
                    VAR_18->value.data = VAR_24->data;
                    VAR_18->value.len = VAR_24->len;
                }
            } else {
                VAR_18->value = VAR_29[VAR_25].value;
            }
        }
    }

    if (VAR_2 == FUNC_6(VAR_14, &VAR_15->service_name, &VAR_15->service_version, &VAR_15->method, VAR_16, VAR_13)) {
        FUNC_10(VAR_3, VAR_14->log, 0,
                      "dubbo: encode request failed");
        return VAR_2;
    }

    return VAR_5;
}
