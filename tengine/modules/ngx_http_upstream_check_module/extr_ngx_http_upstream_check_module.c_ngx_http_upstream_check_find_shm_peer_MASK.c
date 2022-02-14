
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_7__ {size_t number; TYPE_2__* peers; } ;
typedef TYPE_1__ ngx_http_upstream_check_peers_shm_t ;
struct TYPE_8__ {scalar_t__ socklen; int sockaddr; } ;
typedef TYPE_2__ ngx_http_upstream_check_peer_shm_t ;
struct TYPE_9__ {scalar_t__ socklen; int sockaddr; } ;
typedef TYPE_3__ ngx_addr_t ;


 scalar_t__ FUNC_0 (int ,int ,scalar_t__) ;

__attribute__((used)) static ngx_http_upstream_check_peer_shm_t *
FUNC_1(ngx_http_upstream_check_peers_shm_t *VAR_0,
    ngx_addr_t *VAR_1)
{
    ngx_uint_t VAR_2;
    ngx_http_upstream_check_peer_shm_t *VAR_3;

    for (VAR_2 = 0; VAR_2 < VAR_0->number; VAR_2++) {

        VAR_3 = &VAR_0->peers[VAR_2];

        if (VAR_1->socklen != VAR_3->socklen) {
            continue;
        }

        if (FUNC_0(VAR_1->sockaddr, VAR_3->sockaddr,
                       VAR_1->socklen) == 0) {
            return VAR_3;
        }
    }

    return ((void*)0);
}
