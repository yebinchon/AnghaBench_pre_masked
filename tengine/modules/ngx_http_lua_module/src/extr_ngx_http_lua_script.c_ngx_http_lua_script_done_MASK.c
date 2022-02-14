
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_3__ {int * values; scalar_t__ complete_values; int * lengths; scalar_t__ complete_lengths; } ;
typedef TYPE_1__ ngx_http_lua_script_compile_t ;


 int VAR_0 ;
 int VAR_1 ;
 uintptr_t* FUNC_0 (int ,int) ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_http_lua_script_compile_t *VAR_2)
{
    uintptr_t *VAR_3;

    if (VAR_2->complete_lengths) {
        VAR_3 = FUNC_0(*VAR_2->lengths, sizeof(uintptr_t));
        if (VAR_3 == ((void*)0)) {
            return VAR_0;
        }

        *VAR_3 = (uintptr_t) ((void*)0);
    }

    if (VAR_2->complete_values) {
        VAR_3 = FUNC_0(*VAR_2->values, sizeof(uintptr_t));
        if (VAR_3 == ((void*)0)) {
            return VAR_0;
        }

        *VAR_3 = (uintptr_t) ((void*)0);
    }

    return VAR_1;
}
