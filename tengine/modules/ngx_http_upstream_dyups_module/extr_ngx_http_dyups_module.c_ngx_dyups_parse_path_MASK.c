
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u_char ;
typedef size_t ngx_uint_t ;
struct TYPE_10__ {int len; int * data; } ;
typedef TYPE_1__ ngx_str_t ;
typedef int ngx_pool_t ;
struct TYPE_11__ {size_t nelts; TYPE_1__* elts; } ;
typedef TYPE_2__ ngx_array_t ;
struct TYPE_12__ {int log; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int *,int,int) ;
 TYPE_1__* FUNC_1 (TYPE_2__*) ;
 TYPE_6__* VAR_1 ;
 int FUNC_2 (int ,int ,int ,char*,size_t,TYPE_1__*) ;
 int * FUNC_3 (int *,int *,char) ;

ngx_array_t *
FUNC_4(ngx_pool_t *VAR_2, ngx_str_t *VAR_3)
{
    u_char *VAR_4, *VAR_5, *VAR_6;
    ngx_str_t *VAR_7;
    ngx_array_t *VAR_8;

    VAR_8 = FUNC_0(VAR_2, 8, sizeof(ngx_str_t));
    if (VAR_8 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_4 = VAR_3->data + 1;
    VAR_5 = VAR_3->data + VAR_3->len;

    while(VAR_4 < VAR_5) {
        VAR_6 = FUNC_3(VAR_4, VAR_5, '/');
        VAR_7 = FUNC_1(VAR_8);

        if (VAR_7 == ((void*)0)) {
            return ((void*)0);
        }

        if (VAR_6) {
            VAR_7->data = VAR_4;
            VAR_7->len = VAR_6 - VAR_4;

        } else {
            VAR_7->data = VAR_4;
            VAR_7->len = VAR_5 - VAR_4;

        }

        VAR_4 += VAR_7->len + 1;
    }
    return VAR_8;
}
