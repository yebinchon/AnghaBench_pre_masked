
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ngx_str_t ;
typedef int ngx_http_complex_value_t ;
struct TYPE_10__ {int * complex_value; int * value; TYPE_3__* cf; } ;
typedef TYPE_2__ ngx_http_compile_complex_value_t ;
struct TYPE_11__ {TYPE_1__* args; int pool; } ;
typedef TYPE_3__ ngx_conf_t ;
struct TYPE_12__ {int offset; } ;
typedef TYPE_4__ ngx_command_t ;
struct TYPE_9__ {int * elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int * FUNC_2 (int ,int) ;

char *
FUNC_3(ngx_conf_t *VAR_3, ngx_command_t *VAR_4, void *VAR_5)
{
    char *VAR_6 = VAR_5;

    ngx_str_t *VAR_7;
    ngx_http_complex_value_t **VAR_8;
    ngx_http_compile_complex_value_t VAR_9;

    VAR_8 = (ngx_http_complex_value_t **) (VAR_6 + VAR_4->offset);

    if (*VAR_8 != ((void*)0)) {
        return "is duplicate";
    }

    *VAR_8 = FUNC_2(VAR_3->pool, sizeof(ngx_http_complex_value_t));
    if (*VAR_8 == ((void*)0)) {
        return VAR_0;
    }

    VAR_7 = VAR_3->args->elts;

    FUNC_1(&VAR_9, sizeof(ngx_http_compile_complex_value_t));

    VAR_9.cf = VAR_3;
    VAR_9.value = &VAR_7[1];
    VAR_9.complex_value = *VAR_8;

    if (FUNC_0(&VAR_9) != VAR_2) {
        return VAR_0;
    }

    return VAR_1;
}
