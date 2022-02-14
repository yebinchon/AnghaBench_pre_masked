
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ ngx_uint_t ;
struct TYPE_14__ {scalar_t__ tries; } ;
struct TYPE_15__ {TYPE_2__ peer; TYPE_1__* conf; } ;
typedef TYPE_3__ ngx_http_upstream_t ;
struct TYPE_16__ {TYPE_3__* upstream; } ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_17__ {TYPE_7__* balancer_peer_data; } ;
typedef TYPE_5__ ngx_http_lua_main_conf_t ;
struct TYPE_18__ {int context; } ;
typedef TYPE_6__ ngx_http_lua_ctx_t ;
struct TYPE_19__ {scalar_t__ total_tries; int more_tries; } ;
typedef TYPE_7__ ngx_http_lua_balancer_peer_data_t ;
struct TYPE_13__ {scalar_t__ next_upstream_tries; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_6__* FUNC_0 (TYPE_4__*,int ) ;
 TYPE_5__* FUNC_1 (TYPE_4__*,int ) ;
 int VAR_3 ;

int
FUNC_2(ngx_http_request_t *VAR_4,
    int VAR_5, char **VAR_6)
{



    ngx_http_lua_ctx_t *VAR_7;
    ngx_http_upstream_t *VAR_8;

    ngx_http_lua_main_conf_t *VAR_9;
    ngx_http_lua_balancer_peer_data_t *VAR_10;

    if (VAR_4 == ((void*)0)) {
        *VAR_6 = "no request found";
        return VAR_0;
    }

    VAR_8 = VAR_4->upstream;

    if (VAR_8 == ((void*)0)) {
        *VAR_6 = "no upstream found";
        return VAR_0;
    }

    VAR_7 = FUNC_0(VAR_4, VAR_3);
    if (VAR_7 == ((void*)0)) {
        *VAR_6 = "no ctx found";
        return VAR_0;
    }

    if ((VAR_7->context & VAR_1) == 0) {
        *VAR_6 = "API disabled in the current context";
        return VAR_0;
    }

    VAR_9 = FUNC_1(VAR_4, VAR_3);

    VAR_10 = VAR_9->balancer_peer_data;
    if (VAR_10 == ((void*)0)) {
        *VAR_6 = "no upstream peer data found";
        return VAR_0;
    }
    *VAR_6 = ((void*)0);


    VAR_10->more_tries = VAR_5;
    return VAR_2;
}
