
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_13__ {scalar_t__ len; } ;
struct TYPE_14__ {int flags; TYPE_11__ name; } ;
typedef TYPE_1__ ngx_http_variable_t ;
struct TYPE_15__ {int prefix_variables; TYPE_4__* variables_keys; } ;
typedef TYPE_2__ ngx_http_core_main_conf_t ;
typedef int ngx_hash_keys_arrays_t ;
struct TYPE_16__ {int pool; int temp_pool; } ;
typedef TYPE_3__ ngx_conf_t ;
struct TYPE_17__ {int temp_pool; int pool; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ,int,int) ;
 scalar_t__ FUNC_1 (TYPE_4__*,int ) ;
 TYPE_1__* FUNC_2 (TYPE_3__*,TYPE_11__*,int ) ;
 TYPE_2__* FUNC_3 (TYPE_3__*,int ) ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 TYPE_4__* FUNC_4 (int ,int) ;

ngx_int_t
FUNC_5(ngx_conf_t *VAR_5)
{
    ngx_http_variable_t *VAR_6, *VAR_7;
    ngx_http_core_main_conf_t *VAR_8;

    VAR_8 = FUNC_3(VAR_5, VAR_3);

    VAR_8->variables_keys = FUNC_4(VAR_5->temp_pool,
                                       sizeof(ngx_hash_keys_arrays_t));
    if (VAR_8->variables_keys == ((void*)0)) {
        return VAR_0;
    }

    VAR_8->variables_keys->pool = VAR_5->pool;
    VAR_8->variables_keys->temp_pool = VAR_5->pool;

    if (FUNC_1(VAR_8->variables_keys, VAR_1)
        != VAR_2)
    {
        return VAR_0;
    }

    if (FUNC_0(&VAR_8->prefix_variables, VAR_5->pool, 8,
                       sizeof(ngx_http_variable_t))
        != VAR_2)
    {
        return VAR_0;
    }

    for (VAR_6 = VAR_4; VAR_6->name.len; VAR_6++) {
        VAR_7 = FUNC_2(VAR_5, &VAR_6->name, VAR_6->flags);
        if (VAR_7 == ((void*)0)) {
            return VAR_0;
        }

        *VAR_7 = *VAR_6;
    }

    return VAR_2;
}
