
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
struct TYPE_13__ {int zero; int conf_prefix; TYPE_2__* complex_value; int * value; TYPE_6__* cf; } ;
typedef TYPE_4__ ngx_http_compile_complex_value_t ;
struct TYPE_10__ {scalar_t__ data; } ;
struct TYPE_11__ {TYPE_1__ value; } ;
struct TYPE_14__ {TYPE_2__ user_file; } ;
typedef TYPE_5__ ngx_http_auth_basic_loc_conf_t ;
struct TYPE_15__ {TYPE_3__* args; } ;
typedef TYPE_6__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_12__ {int * elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*,int) ;

__attribute__((used)) static char *
FUNC_2(ngx_conf_t *VAR_3, ngx_command_t *VAR_4, void *VAR_5)
{
    ngx_http_auth_basic_loc_conf_t *VAR_6 = VAR_5;

    ngx_str_t *VAR_7;
    ngx_http_compile_complex_value_t VAR_8;

    if (VAR_6->user_file.value.data) {
        return "is duplicate";
    }

    VAR_7 = VAR_3->args->elts;

    FUNC_1(&VAR_8, sizeof(ngx_http_compile_complex_value_t));

    VAR_8.cf = VAR_3;
    VAR_8.value = &VAR_7[1];
    VAR_8.complex_value = &VAR_6->user_file;
    VAR_8.zero = 1;
    VAR_8.conf_prefix = 1;

    if (FUNC_0(&VAR_8) != VAR_2) {
        return VAR_0;
    }

    return VAR_1;
}
