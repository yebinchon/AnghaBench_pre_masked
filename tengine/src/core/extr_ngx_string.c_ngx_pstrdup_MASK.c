
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_3__ {int len; int data; } ;
typedef TYPE_1__ ngx_str_t ;
typedef int ngx_pool_t ;


 int FUNC_0 (int *,int ,int ) ;
 int * FUNC_1 (int *,int ) ;

u_char *
FUNC_2(ngx_pool_t *VAR_0, ngx_str_t *VAR_1)
{
    u_char *VAR_2;

    VAR_2 = FUNC_1(VAR_0, VAR_1->len);
    if (VAR_2 == ((void*)0)) {
        return ((void*)0);
    }

    FUNC_0(VAR_2, VAR_1->data, VAR_1->len);

    return VAR_2;
}
