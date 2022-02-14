
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_3__ {int main; int * values; int * lengths; } ;
typedef TYPE_1__ ngx_http_script_compile_t ;


 int VAR_0 ;
 int VAR_1 ;
 uintptr_t* FUNC_0 (int ,int,int *) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_http_script_compile_t *VAR_4)
{
    uintptr_t *VAR_5;

    VAR_5 = FUNC_0(*VAR_4->lengths, sizeof(uintptr_t), ((void*)0));
    if (VAR_5 == ((void*)0)) {
        return VAR_0;
    }

    *VAR_5 = (uintptr_t) VAR_2;

    VAR_5 = FUNC_0(*VAR_4->values, sizeof(uintptr_t), &VAR_4->main);
    if (VAR_5 == ((void*)0)) {
        return VAR_0;
    }

    *VAR_5 = (uintptr_t) VAR_3;

    return VAR_1;
}
