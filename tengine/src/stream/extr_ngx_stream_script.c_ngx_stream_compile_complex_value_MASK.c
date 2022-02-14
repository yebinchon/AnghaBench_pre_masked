
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
typedef int ngx_stream_script_var_code_t ;
typedef int ngx_stream_script_copy_code_t ;
struct TYPE_14__ {int complete_lengths; int complete_values; scalar_t__ root_prefix; scalar_t__ conf_prefix; int zero; TYPE_6__** values; TYPE_6__** lengths; TYPE_6__** flushes; TYPE_5__* source; TYPE_1__* cf; } ;
typedef TYPE_3__ ngx_stream_script_compile_t ;
struct TYPE_15__ {TYPE_2__* complex_value; scalar_t__ root_prefix; scalar_t__ conf_prefix; int zero; TYPE_1__* cf; TYPE_5__* value; } ;
typedef TYPE_4__ ngx_stream_compile_complex_value_t ;
struct TYPE_16__ {size_t len; char* data; } ;
typedef TYPE_5__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_17__ {int nelts; size_t* elts; } ;
typedef TYPE_6__ ngx_array_t ;
struct TYPE_13__ {size_t* flushes; size_t* lengths; size_t* values; TYPE_5__ value; } ;
struct TYPE_12__ {int pool; int cycle; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_6__*,int ,size_t,int) ;
 scalar_t__ FUNC_1 (int ,TYPE_5__*,scalar_t__) ;
 int FUNC_2 (TYPE_3__*,int) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;

ngx_int_t
FUNC_4(ngx_stream_compile_complex_value_t *VAR_2)
{
    ngx_str_t *VAR_3;
    ngx_uint_t VAR_4, VAR_5, VAR_6, VAR_7;
    ngx_array_t VAR_8, VAR_9, VAR_10, *VAR_11, *VAR_12, *VAR_13;
    ngx_stream_script_compile_t VAR_14;

    VAR_3 = VAR_2->value;

    VAR_6 = 0;
    VAR_7 = 0;

    for (VAR_4 = 0; VAR_4 < VAR_3->len; VAR_4++) {
        if (VAR_3->data[VAR_4] == '$') {
            if (VAR_3->data[VAR_4 + 1] >= '1' && VAR_3->data[VAR_4 + 1] <= '9') {
                VAR_7++;

            } else {
                VAR_6++;
            }
        }
    }

    if ((VAR_3->len == 0 || VAR_3->data[0] != '$')
        && (VAR_2->conf_prefix || VAR_2->root_prefix))
    {
        if (FUNC_1(VAR_2->cf->cycle, VAR_3, VAR_2->conf_prefix) != VAR_1) {
            return VAR_0;
        }

        VAR_2->conf_prefix = 0;
        VAR_2->root_prefix = 0;
    }

    VAR_2->complex_value->value = *VAR_3;
    VAR_2->complex_value->flushes = ((void*)0);
    VAR_2->complex_value->lengths = ((void*)0);
    VAR_2->complex_value->values = ((void*)0);

    if (VAR_6 == 0 && VAR_7 == 0) {
        return VAR_1;
    }

    VAR_5 = VAR_6 + 1;

    if (FUNC_0(&VAR_8, VAR_2->cf->pool, VAR_5, sizeof(ngx_uint_t))
        != VAR_1)
    {
        return VAR_0;
    }

    VAR_5 = VAR_6 * (2 * sizeof(ngx_stream_script_copy_code_t)
                  + sizeof(ngx_stream_script_var_code_t))
        + sizeof(uintptr_t);

    if (FUNC_0(&VAR_9, VAR_2->cf->pool, VAR_5, 1) != VAR_1) {
        return VAR_0;
    }

    VAR_5 = (VAR_6 * (2 * sizeof(ngx_stream_script_copy_code_t)
                   + sizeof(ngx_stream_script_var_code_t))
                + sizeof(uintptr_t)
                + VAR_3->len
                + sizeof(uintptr_t) - 1)
            & ~(sizeof(uintptr_t) - 1);

    if (FUNC_0(&VAR_10, VAR_2->cf->pool, VAR_5, 1) != VAR_1) {
        return VAR_0;
    }

    VAR_11 = &VAR_8;
    VAR_12 = &VAR_9;
    VAR_13 = &VAR_10;

    FUNC_2(&VAR_14, sizeof(ngx_stream_script_compile_t));

    VAR_14.cf = VAR_2->cf;
    VAR_14.source = VAR_3;
    VAR_14.flushes = &VAR_11;
    VAR_14.lengths = &VAR_12;
    VAR_14.values = &VAR_13;
    VAR_14.complete_lengths = 1;
    VAR_14.complete_values = 1;
    VAR_14.zero = VAR_2->zero;
    VAR_14.conf_prefix = VAR_2->conf_prefix;
    VAR_14.root_prefix = VAR_2->root_prefix;

    if (FUNC_3(&VAR_14) != VAR_1) {
        return VAR_0;
    }

    if (VAR_8.nelts) {
        VAR_2->complex_value->flushes = VAR_8.elts;
        VAR_2->complex_value->flushes[VAR_8.nelts] = (ngx_uint_t) -1;
    }

    VAR_2->complex_value->lengths = VAR_9.elts;
    VAR_2->complex_value->values = VAR_10.elts;

    return VAR_1;
}
