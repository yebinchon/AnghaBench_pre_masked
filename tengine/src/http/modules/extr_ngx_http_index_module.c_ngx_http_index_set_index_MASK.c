
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_16__ {char* data; scalar_t__ len; } ;
typedef TYPE_3__ ngx_str_t ;
struct TYPE_17__ {size_t variables; int complete_lengths; int complete_values; int ** values; int ** lengths; TYPE_3__* source; TYPE_7__* cf; } ;
typedef TYPE_4__ ngx_http_script_compile_t ;
struct TYPE_15__ {scalar_t__ len; char* data; } ;
struct TYPE_18__ {int * values; int * lengths; TYPE_2__ name; } ;
typedef TYPE_5__ ngx_http_index_t ;
struct TYPE_19__ {scalar_t__ max_index_len; int * indices; } ;
typedef TYPE_6__ ngx_http_index_loc_conf_t ;
struct TYPE_20__ {TYPE_1__* args; int pool; } ;
typedef TYPE_7__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_14__ {size_t nelts; TYPE_3__* elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int * FUNC_0 (int ,int,int) ;
 TYPE_5__* FUNC_1 (int *) ;
 int FUNC_2 (int ,TYPE_7__*,int ,char*,...) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 size_t FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_4__*,int) ;

__attribute__((used)) static char *
FUNC_6(ngx_conf_t *VAR_5, ngx_command_t *VAR_6, void *VAR_7)
{
    ngx_http_index_loc_conf_t *VAR_8 = VAR_7;

    ngx_str_t *VAR_9;
    ngx_uint_t VAR_10, VAR_11;
    ngx_http_index_t *VAR_12;
    ngx_http_script_compile_t VAR_13;

    if (VAR_8->indices == ((void*)0)) {
        VAR_8->indices = FUNC_0(VAR_5->pool, 2, sizeof(ngx_http_index_t));
        if (VAR_8->indices == ((void*)0)) {
            return VAR_0;
        }
    }

    VAR_9 = VAR_5->args->elts;

    for (VAR_10 = 1; VAR_10 < VAR_5->args->nelts; VAR_10++) {

        if (VAR_9[VAR_10].data[0] == '/' && VAR_10 != VAR_5->args->nelts - 1) {
            FUNC_2(VAR_3, VAR_5, 0,
                               "only the last index in \"index\" directive "
                               "should be absolute");
        }

        if (VAR_9[VAR_10].len == 0) {
            FUNC_2(VAR_2, VAR_5, 0,
                               "index \"%V\" in \"index\" directive is invalid",
                               &VAR_9[1]);
            return VAR_0;
        }

        VAR_12 = FUNC_1(VAR_8->indices);
        if (VAR_12 == ((void*)0)) {
            return VAR_0;
        }

        VAR_12->name.len = VAR_9[VAR_10].len;
        VAR_12->name.data = VAR_9[VAR_10].data;
        VAR_12->lengths = ((void*)0);
        VAR_12->values = ((void*)0);

        VAR_11 = FUNC_4(&VAR_9[VAR_10]);

        if (VAR_11 == 0) {
            if (VAR_8->max_index_len < VAR_12->name.len) {
                VAR_8->max_index_len = VAR_12->name.len;
            }

            if (VAR_12->name.data[0] == '/') {
                continue;
            }


            VAR_12->name.len++;

            continue;
        }

        FUNC_5(&VAR_13, sizeof(ngx_http_script_compile_t));

        VAR_13.cf = VAR_5;
        VAR_13.source = &VAR_9[VAR_10];
        VAR_13.lengths = &VAR_12->lengths;
        VAR_13.values = &VAR_12->values;
        VAR_13.variables = VAR_11;
        VAR_13.complete_lengths = 1;
        VAR_13.complete_values = 1;

        if (FUNC_3(&VAR_13) != VAR_4) {
            return VAR_0;
        }
    }

    return VAR_1;
}
