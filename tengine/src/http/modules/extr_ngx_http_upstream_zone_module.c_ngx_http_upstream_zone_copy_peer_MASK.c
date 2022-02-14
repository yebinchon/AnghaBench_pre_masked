
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int ngx_sockaddr_t ;
typedef int ngx_slab_pool_t ;
struct TYPE_14__ {int * shpool; } ;
typedef TYPE_3__ ngx_http_upstream_rr_peers_t ;
struct TYPE_13__ {int len; TYPE_4__* data; } ;
struct TYPE_12__ {int len; TYPE_4__* data; } ;
struct TYPE_15__ {int socklen; struct TYPE_15__* sockaddr; TYPE_2__ name; TYPE_1__ server; } ;
typedef TYPE_4__ ngx_http_upstream_rr_peer_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,TYPE_4__*,int) ;
 TYPE_4__* FUNC_1 (int *,int) ;
 void* FUNC_2 (int *,int) ;
 int FUNC_3 (int *,TYPE_4__*) ;

__attribute__((used)) static ngx_http_upstream_rr_peer_t *
FUNC_4(ngx_http_upstream_rr_peers_t *VAR_1,
    ngx_http_upstream_rr_peer_t *VAR_2)
{
    ngx_slab_pool_t *VAR_3;
    ngx_http_upstream_rr_peer_t *VAR_4;

    VAR_3 = VAR_1->shpool;

    VAR_4 = FUNC_2(VAR_3, sizeof(ngx_http_upstream_rr_peer_t));
    if (VAR_4 == ((void*)0)) {
        return ((void*)0);
    }

    if (VAR_2) {
        FUNC_0(VAR_4, VAR_2, sizeof(ngx_http_upstream_rr_peer_t));
        VAR_4->sockaddr = ((void*)0);
        VAR_4->name.data = ((void*)0);
        VAR_4->server.data = ((void*)0);
    }

    VAR_4->sockaddr = FUNC_2(VAR_3, sizeof(ngx_sockaddr_t));
    if (VAR_4->sockaddr == ((void*)0)) {
        goto failed;
    }

    VAR_4->name.data = FUNC_2(VAR_3, VAR_0);
    if (VAR_4->name.data == ((void*)0)) {
        goto failed;
    }

    if (VAR_2) {
        FUNC_0(VAR_4->sockaddr, VAR_2->sockaddr, VAR_2->socklen);
        FUNC_0(VAR_4->name.data, VAR_2->name.data, VAR_2->name.len);

        VAR_4->server.data = FUNC_1(VAR_3, VAR_2->server.len);
        if (VAR_4->server.data == ((void*)0)) {
            goto failed;
        }

        FUNC_0(VAR_4->server.data, VAR_2->server.data, VAR_2->server.len);
    }

    return VAR_4;

failed:

    if (VAR_4->server.data) {
        FUNC_3(VAR_3, VAR_4->server.data);
    }

    if (VAR_4->name.data) {
        FUNC_3(VAR_3, VAR_4->name.data);
    }

    if (VAR_4->sockaddr) {
        FUNC_3(VAR_3, VAR_4->sockaddr);
    }

    FUNC_3(VAR_3, VAR_4);

    return ((void*)0);
}
