
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_3__ {size_t len; char* data; } ;
typedef TYPE_1__ ngx_str_t ;



ngx_uint_t
FUNC_0(ngx_str_t *VAR_0)
{
    ngx_uint_t VAR_1, VAR_2;

    for (VAR_2 = 0, VAR_1 = 0; VAR_1 < VAR_0->len; VAR_1++) {
        if (VAR_0->data[VAR_1] == '$') {
            VAR_2++;
        }
    }

    return VAR_2;
}
