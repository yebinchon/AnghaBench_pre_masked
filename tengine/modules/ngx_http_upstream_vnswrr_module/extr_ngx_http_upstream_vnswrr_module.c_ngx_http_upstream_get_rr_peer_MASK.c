
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ ngx_uint_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_5__ {TYPE_2__* peer; } ;
typedef TYPE_1__ ngx_http_upstream_rr_peers_t ;
struct TYPE_6__ {scalar_t__ current_weight; scalar_t__ effective_weight; struct TYPE_6__* next; } ;
typedef TYPE_2__ ngx_http_upstream_rr_peer_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static ngx_int_t
FUNC_0(ngx_http_upstream_rr_peers_t *VAR_1,
    ngx_http_upstream_rr_peer_t **VAR_2)
{
    ngx_int_t VAR_3;
    ngx_uint_t VAR_4, VAR_5;
    ngx_http_upstream_rr_peer_t *VAR_6, *VAR_7;

    VAR_7 = ((void*)0);
    VAR_5 = 0;
    VAR_3 = 0;
    for (VAR_6 = VAR_1->peer, VAR_4 = 0; VAR_6; VAR_6 = VAR_6->next, VAR_4++) {
        VAR_6->current_weight += VAR_6->effective_weight;
        VAR_3 += VAR_6->effective_weight;

        if (VAR_7 == ((void*)0) || VAR_6->current_weight > VAR_7->current_weight) {
            VAR_7 = VAR_6;
            VAR_5 = VAR_4;
        }
    }

    *VAR_2 = VAR_7;
    if (VAR_7 == ((void*)0)) {
        return VAR_0;
    }

    VAR_7->current_weight -= VAR_3;

    return VAR_5;
}
