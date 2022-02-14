
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef char u_char ;
struct TYPE_5__ {char* data; size_t len; } ;
typedef TYPE_1__ ngx_str_t ;
typedef int ngx_pool_t ;
struct TYPE_6__ {int prefix; } ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (char*,char*,size_t) ;
 TYPE_4__* VAR_1 ;
 scalar_t__ FUNC_1 (int *,TYPE_1__*,TYPE_1__*) ;
 char* FUNC_2 (int *,size_t) ;

u_char *
FUNC_3(ngx_pool_t *VAR_2, u_char *VAR_3, size_t VAR_4)
{
    u_char *VAR_5;
    ngx_str_t VAR_6;

    VAR_6.data = FUNC_2(VAR_2, VAR_4 + 1);
    if (VAR_6.data == ((void*)0)) {
        return ((void*)0);
    }

    VAR_6.len = VAR_4;

    VAR_5 = FUNC_0(VAR_6.data, VAR_3, VAR_4);
    *VAR_5 = '\0';

    if (FUNC_1(VAR_2, (ngx_str_t *) &VAR_1->prefix, &VAR_6)
        != VAR_0)
    {
        return ((void*)0);
    }

    return VAR_6.data;
}
