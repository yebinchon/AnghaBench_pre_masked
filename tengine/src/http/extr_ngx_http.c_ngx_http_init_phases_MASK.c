
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
typedef int ngx_http_handler_pt ;
struct TYPE_7__ {TYPE_1__* phases; } ;
typedef TYPE_2__ ngx_http_core_main_conf_t ;
struct TYPE_8__ {int pool; } ;
typedef TYPE_3__ ngx_conf_t ;
struct TYPE_6__ {int handlers; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_0 (int *,int ,int,int) ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_conf_t *VAR_10, ngx_http_core_main_conf_t *VAR_11)
{
    if (FUNC_0(&VAR_11->phases[VAR_4].handlers,
                       VAR_10->pool, 1, sizeof(ngx_http_handler_pt))
        != VAR_9)
    {
        return VAR_0;
    }

    if (FUNC_0(&VAR_11->phases[VAR_8].handlers,
                       VAR_10->pool, 1, sizeof(ngx_http_handler_pt))
        != VAR_9)
    {
        return VAR_0;
    }

    if (FUNC_0(&VAR_11->phases[VAR_7].handlers,
                       VAR_10->pool, 1, sizeof(ngx_http_handler_pt))
        != VAR_9)
    {
        return VAR_0;
    }

    if (FUNC_0(&VAR_11->phases[VAR_5].handlers,
                       VAR_10->pool, 1, sizeof(ngx_http_handler_pt))
        != VAR_9)
    {
        return VAR_0;
    }

    if (FUNC_0(&VAR_11->phases[VAR_1].handlers,
                       VAR_10->pool, 2, sizeof(ngx_http_handler_pt))
        != VAR_9)
    {
        return VAR_0;
    }

    if (FUNC_0(&VAR_11->phases[VAR_6].handlers,
                       VAR_10->pool, 2, sizeof(ngx_http_handler_pt))
        != VAR_9)
    {
        return VAR_0;
    }

    if (FUNC_0(&VAR_11->phases[VAR_2].handlers,
                       VAR_10->pool, 4, sizeof(ngx_http_handler_pt))
        != VAR_9)
    {
        return VAR_0;
    }

    if (FUNC_0(&VAR_11->phases[VAR_3].handlers,
                       VAR_10->pool, 1, sizeof(ngx_http_handler_pt))
        != VAR_9)
    {
        return VAR_0;
    }

    return VAR_9;
}
