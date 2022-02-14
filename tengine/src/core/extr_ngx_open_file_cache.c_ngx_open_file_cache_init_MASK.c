
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int time_t ;
typedef int ngx_uint_t ;
typedef int ngx_pool_t ;
struct TYPE_6__ {TYPE_2__* data; int handler; } ;
typedef TYPE_1__ ngx_pool_cleanup_t ;
struct TYPE_7__ {int inactive; int max; scalar_t__ current; int expire_queue; int sentinel; int rbtree; } ;
typedef TYPE_2__ ngx_open_file_cache_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int *,int) ;
 TYPE_1__* FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int ) ;

ngx_open_file_cache_t *
FUNC_4(ngx_pool_t *VAR_2, ngx_uint_t VAR_3, time_t VAR_4)
{
    ngx_pool_cleanup_t *VAR_5;
    ngx_open_file_cache_t *VAR_6;

    VAR_6 = FUNC_0(VAR_2, sizeof(ngx_open_file_cache_t));
    if (VAR_6 == ((void*)0)) {
        return ((void*)0);
    }

    FUNC_3(&VAR_6->rbtree, &VAR_6->sentinel,
                    VAR_1);

    FUNC_2(&VAR_6->expire_queue);

    VAR_6->current = 0;
    VAR_6->max = VAR_3;
    VAR_6->inactive = VAR_4;

    VAR_5 = FUNC_1(VAR_2, 0);
    if (VAR_5 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_5->handler = VAR_0;
    VAR_5->data = VAR_6;

    return VAR_6;
}
