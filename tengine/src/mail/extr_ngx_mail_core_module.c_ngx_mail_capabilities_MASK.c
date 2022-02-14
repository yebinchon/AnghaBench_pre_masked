
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
typedef int ngx_str_t ;
struct TYPE_7__ {TYPE_1__* args; } ;
typedef TYPE_2__ ngx_conf_t ;
struct TYPE_8__ {int offset; } ;
typedef TYPE_3__ ngx_command_t ;
typedef int ngx_array_t ;
struct TYPE_6__ {size_t nelts; int * elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int * FUNC_0 (int *) ;

char *
FUNC_1(ngx_conf_t *VAR_2, ngx_command_t *VAR_3, void *VAR_4)
{
    char *VAR_5 = VAR_4;

    ngx_str_t *VAR_6, *VAR_7;
    ngx_uint_t VAR_8;
    ngx_array_t *VAR_9;

    VAR_9 = (ngx_array_t *) (VAR_5 + VAR_3->offset);

    VAR_7 = VAR_2->args->elts;

    for (VAR_8 = 1; VAR_8 < VAR_2->args->nelts; VAR_8++) {
        VAR_6 = FUNC_0(VAR_9);
        if (VAR_6 == ((void*)0)) {
            return VAR_0;
        }

        *VAR_6 = VAR_7[VAR_8];
    }

    return VAR_1;
}
