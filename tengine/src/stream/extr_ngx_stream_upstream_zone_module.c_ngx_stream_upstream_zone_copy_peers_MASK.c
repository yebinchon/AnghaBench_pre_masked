
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {TYPE_3__* data; } ;
struct TYPE_14__ {TYPE_1__ peer; } ;
typedef TYPE_2__ ngx_stream_upstream_srv_conf_t ;
struct TYPE_15__ {struct TYPE_15__* next; TYPE_4__* peer; int * shpool; TYPE_5__* name; } ;
typedef TYPE_3__ ngx_stream_upstream_rr_peers_t ;
struct TYPE_16__ {struct TYPE_16__* next; } ;
typedef TYPE_4__ ngx_stream_upstream_rr_peer_t ;
struct TYPE_17__ {int len; TYPE_3__* data; } ;
typedef TYPE_5__ ngx_str_t ;
typedef int ngx_slab_pool_t ;


 int FUNC_0 (TYPE_3__*,TYPE_3__*,int) ;
 void* FUNC_1 (int *,int) ;
 TYPE_4__* FUNC_2 (TYPE_3__*,TYPE_4__*) ;

__attribute__((used)) static ngx_stream_upstream_rr_peers_t *
FUNC_3(ngx_slab_pool_t *VAR_0,
    ngx_stream_upstream_srv_conf_t *VAR_1)
{
    ngx_str_t *VAR_2;
    ngx_stream_upstream_rr_peer_t *VAR_3, **VAR_4;
    ngx_stream_upstream_rr_peers_t *VAR_5, *VAR_6;

    VAR_5 = FUNC_1(VAR_0, sizeof(ngx_stream_upstream_rr_peers_t));
    if (VAR_5 == ((void*)0)) {
        return ((void*)0);
    }

    FUNC_0(VAR_5, VAR_1->peer.data, sizeof(ngx_stream_upstream_rr_peers_t));

    VAR_2 = FUNC_1(VAR_0, sizeof(ngx_str_t));
    if (VAR_2 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_2->data = FUNC_1(VAR_0, VAR_5->name->len);
    if (VAR_2->data == ((void*)0)) {
        return ((void*)0);
    }

    FUNC_0(VAR_2->data, VAR_5->name->data, VAR_5->name->len);
    VAR_2->len = VAR_5->name->len;

    VAR_5->name = VAR_2;

    VAR_5->shpool = VAR_0;

    for (VAR_4 = &VAR_5->peer; *VAR_4; VAR_4 = &VAR_3->next) {

        VAR_3 = FUNC_2(VAR_5, *VAR_4);
        if (VAR_3 == ((void*)0)) {
            return ((void*)0);
        }

        *VAR_4 = VAR_3;
    }

    if (VAR_5->next == ((void*)0)) {
        goto done;
    }

    VAR_6 = FUNC_1(VAR_0, sizeof(ngx_stream_upstream_rr_peers_t));
    if (VAR_6 == ((void*)0)) {
        return ((void*)0);
    }

    FUNC_0(VAR_6, VAR_5->next, sizeof(ngx_stream_upstream_rr_peers_t));

    VAR_6->name = VAR_2;

    VAR_6->shpool = VAR_0;

    for (VAR_4 = &VAR_6->peer; *VAR_4; VAR_4 = &VAR_3->next) {

        VAR_3 = FUNC_2(VAR_6, *VAR_4);
        if (VAR_3 == ((void*)0)) {
            return ((void*)0);
        }

        *VAR_4 = VAR_3;
    }

    VAR_5->next = VAR_6;

done:

    VAR_1->peer.data = VAR_5;

    return VAR_5;
}
