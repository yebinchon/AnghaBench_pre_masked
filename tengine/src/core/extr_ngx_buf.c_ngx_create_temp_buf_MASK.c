
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ngx_pool_t ;
struct TYPE_4__ {int temporary; int * last; int * end; int * start; int * pos; } ;
typedef TYPE_1__ ngx_buf_t ;


 TYPE_1__* FUNC_0 (int *) ;
 int * FUNC_1 (int *,size_t) ;

ngx_buf_t *
FUNC_2(ngx_pool_t *VAR_0, size_t VAR_1)
{
    ngx_buf_t *VAR_2;

    VAR_2 = FUNC_0(VAR_0);
    if (VAR_2 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_2->start = FUNC_1(VAR_0, VAR_1);
    if (VAR_2->start == ((void*)0)) {
        return ((void*)0);
    }
    VAR_2->pos = VAR_2->start;
    VAR_2->last = VAR_2->start;
    VAR_2->end = VAR_2->last + VAR_1;
    VAR_2->temporary = 1;

    return VAR_2;
}
