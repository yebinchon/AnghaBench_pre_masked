
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_4__ {size_t len; int * data; } ;
typedef TYPE_1__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_1__*) ;

int
FUNC_1(const u_char *VAR_1, size_t VAR_2, u_char *VAR_3,
    size_t *VAR_4)
{
    ngx_int_t VAR_5;
    ngx_str_t VAR_6, VAR_7;

    VAR_6.data = (u_char *) VAR_1;
    VAR_6.len = VAR_2;

    VAR_7.data = VAR_3;

    VAR_5 = FUNC_0(&VAR_7, &VAR_6);

    *VAR_4 = VAR_7.len;

    return VAR_5 == VAR_0;
}
