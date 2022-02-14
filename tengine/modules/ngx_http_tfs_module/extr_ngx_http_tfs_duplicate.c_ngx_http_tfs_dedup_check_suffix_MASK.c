
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ len; scalar_t__ data; } ;
typedef TYPE_1__ ngx_str_t ;
typedef int ngx_int_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,scalar_t__) ;

ngx_int_t
FUNC_1(ngx_str_t *VAR_3, ngx_str_t *VAR_4)
{
    ngx_int_t VAR_5;

    VAR_5 = VAR_0;
    if ((VAR_3->len == VAR_1 && VAR_4->len == 0)
        || (VAR_3->len > VAR_1 && VAR_4->len > 0
            && ((VAR_3->len - VAR_1) == VAR_4->len)
            && (FUNC_0(VAR_4->data,
                            VAR_3->data + VAR_1,
                            VAR_4->len) == 0)))
    {
        VAR_5 = VAR_2;
    }

    return VAR_5;
}
