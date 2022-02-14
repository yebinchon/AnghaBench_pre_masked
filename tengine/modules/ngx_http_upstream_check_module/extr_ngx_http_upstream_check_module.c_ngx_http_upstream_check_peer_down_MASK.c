
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_6__ {size_t down; } ;
typedef TYPE_2__ ngx_http_upstream_check_peer_shm_t ;
struct TYPE_7__ {TYPE_1__* peers_shm; } ;
struct TYPE_5__ {TYPE_2__* peers; } ;


 TYPE_3__* VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*,size_t) ;

ngx_uint_t
FUNC_1(ngx_uint_t VAR_1)
{
    ngx_http_upstream_check_peer_shm_t *VAR_2;

    if (FUNC_0(VAR_0, VAR_1)) {
        return 0;
    }

    VAR_2 = VAR_0->peers_shm->peers;

    return (VAR_2[VAR_1].down);
}
