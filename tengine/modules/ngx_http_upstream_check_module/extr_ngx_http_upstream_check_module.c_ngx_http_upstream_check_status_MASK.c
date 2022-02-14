
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ngx_str_t ;
struct TYPE_9__ {int * format; } ;
typedef TYPE_2__ ngx_http_upstream_check_loc_conf_t ;
struct TYPE_10__ {int handler; } ;
typedef TYPE_3__ ngx_http_core_loc_conf_t ;
struct TYPE_11__ {TYPE_1__* args; } ;
typedef TYPE_4__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_8__ {int nelts; int * elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,TYPE_4__*,int ,char*,int *) ;
 void* FUNC_1 (TYPE_4__*,int ) ;
 int VAR_3 ;
 int * FUNC_2 (int *) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static char *
FUNC_3(ngx_conf_t *VAR_6, ngx_command_t *VAR_7, void *VAR_8)
{
    ngx_str_t *VAR_9;
    ngx_http_core_loc_conf_t *VAR_10;
    ngx_http_upstream_check_loc_conf_t *VAR_11;

    VAR_9 = VAR_6->args->elts;

    VAR_10 = FUNC_1(VAR_6, VAR_3);

    VAR_10->handler = VAR_5;

    if (VAR_6->args->nelts == 2) {
        VAR_11 = FUNC_1(VAR_6,
                                              VAR_4);

        VAR_11->format = FUNC_2(&VAR_9[1]);
        if (VAR_11->format == ((void*)0)) {
            FUNC_0(VAR_2, VAR_6, 0,
                               "invalid check format \"%V\"", &VAR_9[1]);

            return VAR_0;
        }
    }

    return VAR_1;
}
