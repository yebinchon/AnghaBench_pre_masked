
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_5__ {int conf_prefix; int code; } ;
typedef TYPE_1__ ngx_http_script_full_name_code_t ;
struct TYPE_6__ {int conf_prefix; int main; int * values; int * lengths; } ;
typedef TYPE_2__ ngx_http_script_compile_t ;
typedef int ngx_http_script_code_pt ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ,int,int *) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_http_script_compile_t *VAR_4)
{
    ngx_http_script_full_name_code_t *VAR_5;

    VAR_5 = FUNC_0(*VAR_4->lengths,
                                    sizeof(ngx_http_script_full_name_code_t),
                                    ((void*)0));
    if (VAR_5 == ((void*)0)) {
        return VAR_0;
    }

    VAR_5->code = (ngx_http_script_code_pt) (void *)
                                            VAR_3;
    VAR_5->conf_prefix = VAR_4->conf_prefix;

    VAR_5 = FUNC_0(*VAR_4->values,
                                    sizeof(ngx_http_script_full_name_code_t),
                                    &VAR_4->main);
    if (VAR_5 == ((void*)0)) {
        return VAR_0;
    }

    VAR_5->code = VAR_2;
    VAR_5->conf_prefix = VAR_4->conf_prefix;

    return VAR_1;
}
