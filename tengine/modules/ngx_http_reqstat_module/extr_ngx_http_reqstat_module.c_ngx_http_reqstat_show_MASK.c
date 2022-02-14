
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
typedef int ngx_str_t ;
typedef int ngx_shm_zone_t ;
struct TYPE_10__ {int * display; } ;
typedef TYPE_2__ ngx_http_reqstat_conf_t ;
struct TYPE_11__ {int handler; } ;
typedef TYPE_3__ ngx_http_core_loc_conf_t ;
struct TYPE_12__ {TYPE_1__* args; int pool; } ;
typedef TYPE_4__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_9__ {int nelts; int * elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int * VAR_2 ;
 int * FUNC_0 (int ,int,int) ;
 int ** FUNC_1 (int *) ;
 TYPE_3__* FUNC_2 (TYPE_4__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_3 (TYPE_4__*,int *,int ,int *) ;

__attribute__((used)) static char *
FUNC_4(ngx_conf_t *VAR_6, ngx_command_t *VAR_7, void *VAR_8)
{
    ngx_str_t *VAR_9;
    ngx_uint_t VAR_10;
    ngx_shm_zone_t *VAR_11, **VAR_12;
    ngx_http_core_loc_conf_t *VAR_13;

    ngx_http_reqstat_conf_t *VAR_14 = VAR_8;

    VAR_9 = VAR_6->args->elts;

    if (VAR_14->display != VAR_2) {
        return "is duplicate";
    }

    if (VAR_6->args->nelts == 1) {
        VAR_14->display = ((void*)0);
        goto reg_handler;
    }

    VAR_14->display = FUNC_0(VAR_6->pool, VAR_6->args->nelts - 1,
                                     sizeof(ngx_shm_zone_t *));
    if (VAR_14->display == ((void*)0)) {
        return VAR_0;
    }

    for (VAR_10 = 1; VAR_10 < VAR_6->args->nelts; VAR_10++) {
        VAR_11 = FUNC_3(VAR_6, &VAR_9[VAR_10], 0,
                                         &VAR_4);
        if (VAR_11 == ((void*)0)) {
            return VAR_0;
        }

        VAR_12 = FUNC_1(VAR_14->display);
        *VAR_12 = VAR_11;
    }

reg_handler:

    VAR_13 = FUNC_2(VAR_6, VAR_3);
    VAR_13->handler = VAR_5;

    return VAR_1;
}
