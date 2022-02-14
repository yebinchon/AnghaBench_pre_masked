
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_17__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef size_t ngx_uint_t ;
struct TYPE_20__ {uintptr_t data; int get_handler; } ;
typedef TYPE_2__ ngx_stream_variable_t ;
struct TYPE_21__ {int percent; } ;
typedef TYPE_3__ ngx_stream_split_clients_part_t ;
struct TYPE_18__ {size_t nelts; TYPE_3__* elts; } ;
struct TYPE_22__ {TYPE_17__ parts; int value; } ;
typedef TYPE_4__ ngx_stream_split_clients_ctx_t ;
struct TYPE_23__ {int * complex_value; TYPE_6__* value; TYPE_7__* cf; } ;
typedef TYPE_5__ ngx_stream_compile_complex_value_t ;
struct TYPE_24__ {char* data; int len; } ;
typedef TYPE_6__ ngx_str_t ;
struct TYPE_25__ {void* handler_conf; int handler; TYPE_4__* ctx; int pool; TYPE_1__* args; } ;
typedef TYPE_7__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_19__ {TYPE_6__* elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_17__*,int ,int,int) ;
 int FUNC_1 (int ,TYPE_7__*,int ,char*,...) ;
 char* FUNC_2 (TYPE_7__*,int *) ;
 int FUNC_3 (TYPE_5__*,int) ;
 TYPE_4__* FUNC_4 (int ,int) ;
 TYPE_2__* FUNC_5 (TYPE_7__*,TYPE_6__*,int ) ;
 scalar_t__ FUNC_6 (TYPE_5__*) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static char *
FUNC_7(ngx_conf_t *VAR_7, ngx_command_t *VAR_8, void *VAR_9)
{
    char *VAR_10;
    uint32_t VAR_11, VAR_12;
    ngx_str_t *VAR_13, VAR_14;
    ngx_uint_t VAR_15;
    ngx_conf_t VAR_16;
    ngx_stream_variable_t *VAR_17;
    ngx_stream_split_clients_ctx_t *VAR_18;
    ngx_stream_split_clients_part_t *VAR_19;
    ngx_stream_compile_complex_value_t VAR_20;

    VAR_18 = FUNC_4(VAR_7->pool, sizeof(ngx_stream_split_clients_ctx_t));
    if (VAR_18 == ((void*)0)) {
        return VAR_0;
    }

    VAR_13 = VAR_7->args->elts;

    FUNC_3(&VAR_20, sizeof(ngx_stream_compile_complex_value_t));

    VAR_20.cf = VAR_7;
    VAR_20.value = &VAR_13[1];
    VAR_20.complex_value = &VAR_18->value;

    if (FUNC_6(&VAR_20) != VAR_3) {
        return VAR_0;
    }

    VAR_14 = VAR_13[2];

    if (VAR_14.data[0] != '$') {
        FUNC_1(VAR_2, VAR_7, 0,
                           "invalid variable name \"%V\"", &VAR_14);
        return VAR_0;
    }

    VAR_14.len--;
    VAR_14.data++;

    VAR_17 = FUNC_5(VAR_7, &VAR_14, VAR_4);
    if (VAR_17 == ((void*)0)) {
        return VAR_0;
    }

    VAR_17->get_handler = VAR_6;
    VAR_17->data = (uintptr_t) VAR_18;

    if (FUNC_0(&VAR_18->parts, VAR_7->pool, 2,
                       sizeof(ngx_stream_split_clients_part_t))
        != VAR_3)
    {
        return VAR_0;
    }

    VAR_16 = *VAR_7;
    VAR_7->ctx = VAR_18;
    VAR_7->handler = VAR_5;
    VAR_7->handler_conf = VAR_9;

    VAR_10 = FUNC_2(VAR_7, ((void*)0));

    *VAR_7 = VAR_16;

    if (VAR_10 != VAR_1) {
        return VAR_10;
    }

    VAR_11 = 0;
    VAR_12 = 0;
    VAR_19 = VAR_18->parts.elts;

    for (VAR_15 = 0; VAR_15 < VAR_18->parts.nelts; VAR_15++) {
        VAR_11 = VAR_19[VAR_15].percent ? VAR_11 + VAR_19[VAR_15].percent : 10000;
        if (VAR_11 > 10000) {
            FUNC_1(VAR_2, VAR_7, 0,
                               "percent total is greater than 100%%");
            return VAR_0;
        }

        if (VAR_19[VAR_15].percent) {
            VAR_12 += VAR_19[VAR_15].percent * (uint64_t) 0xffffffff / 10000;
            VAR_19[VAR_15].percent = VAR_12;
        }
    }

    return VAR_10;
}
