
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_9__ ;
typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_19__ ;
typedef struct TYPE_23__ TYPE_10__ ;


struct in6_addr {int s6_addr; } ;
typedef int ngx_uint_t ;
typedef int ngx_stream_variable_value_t ;
struct TYPE_29__ {uintptr_t data; int get_handler; } ;
typedef TYPE_5__ ngx_stream_variable_t ;
typedef int ngx_stream_geo_range_t ;
typedef int ngx_stream_geo_header_t ;
struct TYPE_25__ {int * tree6; int * tree; } ;
struct TYPE_28__ {int * default_value; TYPE_19__** low; } ;
struct TYPE_27__ {TYPE_1__ trees; TYPE_4__ high; } ;
struct TYPE_30__ {scalar_t__ index; TYPE_3__ u; } ;
typedef TYPE_6__ ngx_stream_geo_ctx_t ;
struct TYPE_31__ {int data_size; int allow_binary_include; int entries; int includes; int * temp_pool; int * tree6; int * tree; TYPE_4__ high; int outside_entries; int binary_include; scalar_t__ ranges; int * pool; int sentinel; int rbtree; } ;
typedef TYPE_7__ ngx_stream_geo_conf_ctx_t ;
struct TYPE_32__ {char* data; int len; } ;
typedef TYPE_8__ ngx_str_t ;
typedef int ngx_pool_t ;
struct TYPE_33__ {int * pool; void* handler_conf; int handler; TYPE_7__* ctx; int log; TYPE_2__* args; } ;
typedef TYPE_9__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_23__ {int nelts; int elts; } ;
typedef TYPE_10__ ngx_array_t ;
struct TYPE_26__ {int nelts; TYPE_8__* elts; } ;
struct TYPE_24__ {int * value; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,TYPE_9__*,int ,char*,TYPE_8__*) ;
 char* FUNC_1 (TYPE_9__*,int *) ;
 void* FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_19__*,int ,size_t) ;
 int FUNC_5 (TYPE_7__*,int) ;
 void* FUNC_6 (int *,int) ;
 scalar_t__ FUNC_7 (int *,int ,int ,uintptr_t) ;
 scalar_t__ FUNC_8 (int *,int ,int ,uintptr_t) ;
 void* FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int *,int ) ;
 int VAR_6 ;
 TYPE_5__* FUNC_11 (TYPE_9__*,TYPE_8__*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_12 (TYPE_7__*) ;
 int VAR_9 ;
 scalar_t__ FUNC_13 (TYPE_9__*,TYPE_8__*) ;
 int VAR_10 ;

__attribute__((used)) static char *
FUNC_14(ngx_conf_t *VAR_11, ngx_command_t *VAR_12, void *VAR_13)
{
    char *VAR_14;
    size_t VAR_15;
    ngx_str_t *VAR_16, VAR_17;
    ngx_uint_t VAR_18;
    ngx_conf_t VAR_19;
    ngx_pool_t *VAR_20;
    ngx_array_t *VAR_21;
    ngx_stream_variable_t *VAR_22;
    ngx_stream_geo_ctx_t *VAR_23;
    ngx_stream_geo_conf_ctx_t VAR_24;




    VAR_16 = VAR_11->args->elts;

    VAR_23 = FUNC_6(VAR_11->pool, sizeof(ngx_stream_geo_ctx_t));
    if (VAR_23 == ((void*)0)) {
        return VAR_0;
    }

    VAR_17 = VAR_16[1];

    if (VAR_17.data[0] != '$') {
        FUNC_0(VAR_4, VAR_11, 0,
                           "invalid variable name \"%V\"", &VAR_17);
        return VAR_0;
    }

    VAR_17.len--;
    VAR_17.data++;

    if (VAR_11->args->nelts == 3) {

        VAR_23->index = FUNC_13(VAR_11, &VAR_17);
        if (VAR_23->index == VAR_3) {
            return VAR_0;
        }

        VAR_17 = VAR_16[2];

        if (VAR_17.data[0] != '$') {
            FUNC_0(VAR_4, VAR_11, 0,
                               "invalid variable name \"%V\"", &VAR_17);
            return VAR_0;
        }

        VAR_17.len--;
        VAR_17.data++;

    } else {
        VAR_23->index = -1;
    }

    VAR_22 = FUNC_11(VAR_11, &VAR_17, VAR_5);
    if (VAR_22 == ((void*)0)) {
        return VAR_0;
    }

    VAR_20 = FUNC_2(VAR_2, VAR_11->log);
    if (VAR_20 == ((void*)0)) {
        return VAR_0;
    }

    FUNC_5(&VAR_24, sizeof(ngx_stream_geo_conf_ctx_t));

    VAR_24.temp_pool = FUNC_2(VAR_2, VAR_11->log);
    if (VAR_24.temp_pool == ((void*)0)) {
        FUNC_3(VAR_20);
        return VAR_0;
    }

    FUNC_10(&VAR_24.rbtree, &VAR_24.sentinel, VAR_6);

    VAR_24.pool = VAR_11->pool;
    VAR_24.data_size = sizeof(ngx_stream_geo_header_t)
                  + sizeof(ngx_stream_variable_value_t)
                  + 0x10000 * sizeof(ngx_stream_geo_range_t *);
    VAR_24.allow_binary_include = 1;

    VAR_19 = *VAR_11;
    VAR_11->pool = VAR_20;
    VAR_11->ctx = &VAR_24;
    VAR_11->handler = VAR_7;
    VAR_11->handler_conf = VAR_13;

    VAR_14 = FUNC_1(VAR_11, ((void*)0));

    *VAR_11 = VAR_19;

    if (VAR_14 != VAR_1) {
        goto failed;
    }

    if (VAR_24.ranges) {

        if (VAR_24.high.low && !VAR_24.binary_include) {
            for (VAR_18 = 0; VAR_18 < 0x10000; VAR_18++) {
                VAR_21 = (ngx_array_t *) VAR_24.high.low[VAR_18];

                if (VAR_21 == ((void*)0)) {
                    continue;
                }

                if (VAR_21->nelts == 0) {
                    VAR_24.high.low[VAR_18] = ((void*)0);
                    continue;
                }

                VAR_15 = VAR_21->nelts * sizeof(ngx_stream_geo_range_t);

                VAR_24.high.low[VAR_18] = FUNC_6(VAR_11->pool, VAR_15 + sizeof(void *));
                if (VAR_24.high.low[VAR_18] == ((void*)0)) {
                    goto failed;
                }

                FUNC_4(VAR_24.high.low[VAR_18], VAR_21->elts, VAR_15);
                VAR_24.high.low[VAR_18][VAR_21->nelts].value = ((void*)0);
                VAR_24.data_size += VAR_15 + sizeof(void *);
            }

            if (VAR_24.allow_binary_include
                && !VAR_24.outside_entries
                && VAR_24.entries > 100000
                && VAR_24.includes == 1)
            {
                FUNC_12(&VAR_24);
            }
        }

        if (VAR_24.high.default_value == ((void*)0)) {
            VAR_24.high.default_value = &VAR_10;
        }

        VAR_23->u.high = VAR_24.high;

        VAR_22->get_handler = VAR_9;
        VAR_22->data = (uintptr_t) VAR_23;

    } else {
        if (VAR_24.tree == ((void*)0)) {
            VAR_24.tree = FUNC_9(VAR_11->pool, -1);
            if (VAR_24.tree == ((void*)0)) {
                goto failed;
            }
        }

        VAR_23->u.trees.tree = VAR_24.tree;
        VAR_22->get_handler = VAR_8;
        VAR_22->data = (uintptr_t) VAR_23;

        if (FUNC_8(VAR_24.tree, 0, 0,
                                   (uintptr_t) &VAR_10)
            == VAR_3)
        {
            goto failed;
        }
    }

    FUNC_3(VAR_24.temp_pool);
    FUNC_3(VAR_20);

    return VAR_1;

failed:

    FUNC_3(VAR_24.temp_pool);
    FUNC_3(VAR_20);

    return VAR_0;
}
