
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ngx_uint_t ;
typedef int ngx_int_t ;
typedef int ngx_http_script_var_code_t ;
typedef int ngx_http_script_copy_code_t ;
struct TYPE_7__ {int variables; int ** values; TYPE_2__* cf; TYPE_1__* source; int ** lengths; int ** flushes; } ;
typedef TYPE_3__ ngx_http_script_compile_t ;
struct TYPE_6__ {int pool; } ;
struct TYPE_5__ {int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,int,int) ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_http_script_compile_t *VAR_2)
{
    ngx_uint_t VAR_3;

    if (VAR_2->flushes && *VAR_2->flushes == ((void*)0)) {
        VAR_3 = VAR_2->variables ? VAR_2->variables : 1;
        *VAR_2->flushes = FUNC_0(VAR_2->cf->pool, VAR_3, sizeof(ngx_uint_t));
        if (*VAR_2->flushes == ((void*)0)) {
            return VAR_0;
        }
    }

    if (*VAR_2->lengths == ((void*)0)) {
        VAR_3 = VAR_2->variables * (2 * sizeof(ngx_http_script_copy_code_t)
                             + sizeof(ngx_http_script_var_code_t))
            + sizeof(uintptr_t);

        *VAR_2->lengths = FUNC_0(VAR_2->cf->pool, VAR_3, 1);
        if (*VAR_2->lengths == ((void*)0)) {
            return VAR_0;
        }
    }

    if (*VAR_2->values == ((void*)0)) {
        VAR_3 = (VAR_2->variables * (2 * sizeof(ngx_http_script_copy_code_t)
                              + sizeof(ngx_http_script_var_code_t))
                + sizeof(uintptr_t)
                + VAR_2->source->len
                + sizeof(uintptr_t) - 1)
            & ~(sizeof(uintptr_t) - 1);

        *VAR_2->values = FUNC_0(VAR_2->cf->pool, VAR_3, 1);
        if (*VAR_2->values == ((void*)0)) {
            return VAR_0;
        }
    }

    VAR_2->variables = 0;

    return VAR_1;
}
