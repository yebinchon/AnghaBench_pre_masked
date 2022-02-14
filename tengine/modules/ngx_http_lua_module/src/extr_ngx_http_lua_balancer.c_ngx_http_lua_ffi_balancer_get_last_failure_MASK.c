
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int ngx_http_upstream_t ;
struct TYPE_13__ {scalar_t__ status; } ;
typedef TYPE_2__ ngx_http_upstream_state_t ;
struct TYPE_14__ {TYPE_1__* upstream_states; int * upstream; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_15__ {TYPE_6__* balancer_peer_data; } ;
typedef TYPE_4__ ngx_http_lua_main_conf_t ;
struct TYPE_16__ {int context; } ;
typedef TYPE_5__ ngx_http_lua_ctx_t ;
struct TYPE_17__ {int last_peer_state; } ;
typedef TYPE_6__ ngx_http_lua_balancer_peer_data_t ;
struct TYPE_12__ {int nelts; TYPE_2__* elts; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__* FUNC_0 (TYPE_3__*,int ) ;
 TYPE_4__* FUNC_1 (TYPE_3__*,int ) ;
 int VAR_2 ;

int
FUNC_2(ngx_http_request_t *VAR_3,
    int *VAR_4, char **VAR_5)
{
    ngx_http_lua_ctx_t *VAR_6;
    ngx_http_upstream_t *VAR_7;
    ngx_http_upstream_state_t *VAR_8;

    ngx_http_lua_balancer_peer_data_t *VAR_9;
    ngx_http_lua_main_conf_t *VAR_10;

    if (VAR_3 == ((void*)0)) {
        *VAR_5 = "no request found";
        return VAR_0;
    }

    VAR_7 = VAR_3->upstream;

    if (VAR_7 == ((void*)0)) {
        *VAR_5 = "no upstream found";
        return VAR_0;
    }

    VAR_6 = FUNC_0(VAR_3, VAR_2);
    if (VAR_6 == ((void*)0)) {
        *VAR_5 = "no ctx found";
        return VAR_0;
    }

    if ((VAR_6->context & VAR_1) == 0) {
        *VAR_5 = "API disabled in the current context";
        return VAR_0;
    }

    VAR_10 = FUNC_1(VAR_3, VAR_2);

    VAR_9 = VAR_10->balancer_peer_data;
    if (VAR_9 == ((void*)0)) {
        *VAR_5 = "no upstream peer data found";
        return VAR_0;
    }

    if (VAR_3->upstream_states && VAR_3->upstream_states->nelts > 1) {
        VAR_8 = VAR_3->upstream_states->elts;
        *VAR_4 = (int) VAR_8[VAR_3->upstream_states->nelts - 2].status;

    } else {
        *VAR_4 = 0;
    }

    return VAR_9->last_peer_state;
}
