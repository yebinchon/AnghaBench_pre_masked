
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ngx_uint_t ;
typedef int ngx_queue_t ;
typedef int ngx_pool_t ;
struct TYPE_4__ {int bucket_count; int max_cached; int free_peer; int get_peer; int * free; int * cache; } ;
typedef TYPE_1__ ngx_http_connection_pool_t ;
struct TYPE_5__ {int queue; } ;
typedef TYPE_2__ ngx_http_connection_pool_elt_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;

ngx_http_connection_pool_t *
FUNC_3(ngx_pool_t *VAR_2, ngx_uint_t VAR_3,
    ngx_uint_t VAR_4)
{
    ngx_uint_t VAR_5, VAR_6;
    ngx_http_connection_pool_t *VAR_7;
    ngx_http_connection_pool_elt_t *VAR_8;

    VAR_7 = FUNC_0(VAR_2, sizeof(ngx_http_connection_pool_t));
    if (VAR_7 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_7->bucket_count = VAR_4;
    VAR_7->max_cached = VAR_3;

    VAR_7->cache = FUNC_0(VAR_2, sizeof(ngx_queue_t) * VAR_4);
    if (VAR_7->cache == ((void*)0)) {
        return ((void*)0);
    }

    VAR_7->free = FUNC_0(VAR_2, sizeof(ngx_queue_t) * VAR_4);
    if (VAR_7->free == ((void*)0)) {
        return ((void*)0);
    }

    for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
        FUNC_1(&VAR_7->cache[VAR_5]);
        FUNC_1(&VAR_7->free[VAR_5]);
        VAR_8 = FUNC_0(VAR_2,
                           sizeof(ngx_http_connection_pool_elt_t) * VAR_3);
        if (VAR_8 == ((void*)0)) {
            return ((void*)0);
        }

        for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
            FUNC_2(&VAR_7->free[VAR_5], &VAR_8[VAR_6].queue);
        }
    }

    VAR_7->get_peer = VAR_1;
    VAR_7->free_peer = VAR_0;
    return VAR_7;
}
