
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_10__ {TYPE_4__* elts; } ;
struct TYPE_12__ {TYPE_1__ formats; scalar_t__ combined_used; } ;
typedef TYPE_3__ ngx_http_log_main_conf_t ;
struct TYPE_13__ {int ops; } ;
typedef TYPE_4__ ngx_http_log_fmt_t ;
typedef int ngx_http_handler_pt ;
struct TYPE_14__ {TYPE_2__* phases; } ;
typedef TYPE_5__ ngx_http_core_main_conf_t ;
struct TYPE_15__ {int pool; } ;
typedef TYPE_6__ ngx_conf_t ;
typedef int ngx_array_t ;
struct TYPE_11__ {int handlers; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int *,int ,int,int) ;
 void* FUNC_1 (int *) ;
 int VAR_4 ;
 void* FUNC_2 (TYPE_6__*,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (TYPE_6__*,int *,int ,int *,int ) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_conf_t *VAR_8)
{
    ngx_str_t *VAR_9;
    ngx_array_t VAR_10;
    ngx_http_handler_pt *VAR_11;
    ngx_http_log_fmt_t *VAR_12;
    ngx_http_log_main_conf_t *VAR_13;
    ngx_http_core_main_conf_t *VAR_14;

    VAR_13 = FUNC_2(VAR_8, VAR_7);

    if (VAR_13->combined_used) {
        if (FUNC_0(&VAR_10, VAR_8->pool, 1, sizeof(ngx_str_t)) != VAR_3) {
            return VAR_1;
        }

        VAR_9 = FUNC_1(&VAR_10);
        if (VAR_9 == ((void*)0)) {
            return VAR_1;
        }

        *VAR_9 = VAR_4;
        VAR_12 = VAR_13->formats.elts;

        if (FUNC_3(VAR_8, ((void*)0), VAR_12->ops, &VAR_10, 0)
            != VAR_0)
        {
            return VAR_1;
        }
    }

    VAR_14 = FUNC_2(VAR_8, VAR_5);

    VAR_11 = FUNC_1(&VAR_14->phases[VAR_2].handlers);
    if (VAR_11 == ((void*)0)) {
        return VAR_1;
    }

    *VAR_11 = VAR_6;

    return VAR_3;
}
