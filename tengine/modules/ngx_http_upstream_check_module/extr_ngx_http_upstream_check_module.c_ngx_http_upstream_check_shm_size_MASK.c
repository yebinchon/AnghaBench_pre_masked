
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ngx_str_t ;
struct TYPE_8__ {size_t check_shm_size; } ;
typedef TYPE_2__ ngx_http_upstream_check_main_conf_t ;
struct TYPE_9__ {TYPE_1__* args; } ;
typedef TYPE_3__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_7__ {int * elts; } ;


 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_0 (TYPE_3__*,int ) ;
 int VAR_2 ;
 size_t FUNC_1 (int *) ;

__attribute__((used)) static char *
FUNC_2(ngx_conf_t *VAR_3, ngx_command_t *VAR_4, void *VAR_5)
{
    ngx_str_t *VAR_6;
    ngx_http_upstream_check_main_conf_t *VAR_7;

    VAR_7 = FUNC_0(VAR_3,
                                               VAR_2);
    if (VAR_7->check_shm_size) {
        return "is duplicate";
    }

    VAR_6 = VAR_3->args->elts;

    VAR_7->check_shm_size = FUNC_1(&VAR_6[1]);
    if (VAR_7->check_shm_size == (size_t) VAR_1) {
        return "invalid value";
    }

    return VAR_0;
}
