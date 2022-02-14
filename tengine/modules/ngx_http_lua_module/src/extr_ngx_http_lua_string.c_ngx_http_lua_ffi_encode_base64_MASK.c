
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_4__ {size_t len; int * data; } ;
typedef TYPE_1__ ngx_str_t ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*,int) ;

size_t
FUNC_1(const u_char *VAR_0, size_t VAR_1, u_char *VAR_2,
    int VAR_3)
{
    ngx_str_t VAR_4, VAR_5;

    VAR_4.data = (u_char *) VAR_0;
    VAR_4.len = VAR_1;

    VAR_5.data = VAR_2;

    FUNC_0(&VAR_5, &VAR_4, VAR_3);

    return VAR_5.len;
}
