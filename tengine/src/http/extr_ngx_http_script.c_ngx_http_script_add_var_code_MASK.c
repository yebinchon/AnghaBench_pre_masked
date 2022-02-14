
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_5__ {uintptr_t index; int code; } ;
typedef TYPE_1__ ngx_http_script_var_code_t ;
struct TYPE_6__ {int main; int * values; int * lengths; int * flushes; int cf; } ;
typedef TYPE_2__ ngx_http_script_compile_t ;
typedef int ngx_http_script_code_pt ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 TYPE_1__* FUNC_2 (int ,int,int *) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_http_script_compile_t *VAR_4, ngx_str_t *VAR_5)
{
    ngx_int_t VAR_6, *VAR_7;
    ngx_http_script_var_code_t *VAR_8;

    VAR_6 = FUNC_1(VAR_4->cf, VAR_5);

    if (VAR_6 == VAR_0) {
        return VAR_0;
    }

    if (VAR_4->flushes) {
        VAR_7 = FUNC_0(*VAR_4->flushes);
        if (VAR_7 == ((void*)0)) {
            return VAR_0;
        }

        *VAR_7 = VAR_6;
    }

    VAR_8 = FUNC_2(*VAR_4->lengths,
                                    sizeof(ngx_http_script_var_code_t), ((void*)0));
    if (VAR_8 == ((void*)0)) {
        return VAR_0;
    }

    VAR_8->code = (ngx_http_script_code_pt) (void *)
                                             VAR_3;
    VAR_8->index = (uintptr_t) VAR_6;

    VAR_8 = FUNC_2(*VAR_4->values,
                                    sizeof(ngx_http_script_var_code_t),
                                    &VAR_4->main);
    if (VAR_8 == ((void*)0)) {
        return VAR_0;
    }

    VAR_8->code = VAR_2;
    VAR_8->index = (uintptr_t) VAR_6;

    return VAR_1;
}
