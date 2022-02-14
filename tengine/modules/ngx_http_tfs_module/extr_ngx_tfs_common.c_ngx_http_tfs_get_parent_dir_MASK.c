
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ngx_uint_t ;
struct TYPE_3__ {int len; char* data; } ;
typedef TYPE_1__ ngx_str_t ;
typedef int ngx_int_t ;



ngx_int_t
FUNC_0(ngx_str_t *VAR_0, ngx_int_t *VAR_1)
{
    ngx_uint_t VAR_2, VAR_3;

    VAR_3 = 0;

    if (VAR_1 != ((void*)0)) {
        *VAR_1 = 0;
    }

    for (VAR_2 = 0; VAR_2 < (VAR_0->len - 1); VAR_2++) {
        if (VAR_0->data[VAR_2] == '/'
            && (VAR_0->data[VAR_2 + 1]) != '/')
        {
            VAR_3 = VAR_2;
            if (VAR_1 != ((void*)0)) {
                (*VAR_1)++;
            }
        }
    }

    return VAR_3 + 1;
}
