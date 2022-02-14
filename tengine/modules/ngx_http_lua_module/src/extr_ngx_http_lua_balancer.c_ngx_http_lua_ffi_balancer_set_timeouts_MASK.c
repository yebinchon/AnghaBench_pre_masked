
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef void* ngx_msec_t ;
struct TYPE_15__ {void* read_timeout; void* send_timeout; void* connect_timeout; TYPE_2__* conf; } ;
typedef TYPE_1__ ngx_http_upstream_t ;
struct TYPE_16__ {void* read_timeout; void* send_timeout; void* connect_timeout; } ;
typedef TYPE_2__ ngx_http_upstream_conf_t ;
struct TYPE_17__ {int pool; TYPE_1__* upstream; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_18__ {TYPE_6__* balancer_peer_data; } ;
typedef TYPE_4__ ngx_http_lua_main_conf_t ;
struct TYPE_19__ {int context; } ;
typedef TYPE_5__ ngx_http_lua_ctx_t ;
struct TYPE_20__ {int cloned_upstream_conf; } ;
typedef TYPE_6__ ngx_http_lua_balancer_peer_data_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_5__* FUNC_0 (TYPE_3__*,int ) ;
 TYPE_4__* FUNC_1 (TYPE_3__*,int ) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*,int) ;
 TYPE_2__* FUNC_3 (int ,int) ;

int
FUNC_4(ngx_http_request_t *VAR_4,
    long VAR_5, long VAR_6, long VAR_7,
    char **VAR_8)
{
    ngx_http_lua_ctx_t *VAR_9;
    ngx_http_upstream_t *VAR_10;


    ngx_http_upstream_conf_t *VAR_11;

    ngx_http_lua_main_conf_t *VAR_12;
    ngx_http_lua_balancer_peer_data_t *VAR_13;

    if (VAR_4 == ((void*)0)) {
        *VAR_8 = "no request found";
        return VAR_0;
    }

    VAR_10 = VAR_4->upstream;

    if (VAR_10 == ((void*)0)) {
        *VAR_8 = "no upstream found";
        return VAR_0;
    }

    VAR_9 = FUNC_0(VAR_4, VAR_3);
    if (VAR_9 == ((void*)0)) {
        *VAR_8 = "no ctx found";
        return VAR_0;
    }

    if ((VAR_9->context & VAR_1) == 0) {
        *VAR_8 = "API disabled in the current context";
        return VAR_0;
    }

    VAR_12 = FUNC_1(VAR_4, VAR_3);

    VAR_13 = VAR_12->balancer_peer_data;
    if (VAR_13 == ((void*)0)) {
        *VAR_8 = "no upstream peer data found";
        return VAR_0;
    }


    if (!VAR_13->cloned_upstream_conf) {



        VAR_11 = FUNC_3(VAR_4->pool, sizeof(ngx_http_upstream_conf_t));

        if (VAR_11 == ((void*)0)) {
            *VAR_8 = "no memory";
            return VAR_0;
        }

        FUNC_2(VAR_11, VAR_10->conf, sizeof(ngx_http_upstream_conf_t));

        VAR_10->conf = VAR_11;
        VAR_13->cloned_upstream_conf = 1;

    } else {
        VAR_11 = VAR_10->conf;
    }


    if (VAR_5 > 0) {



        VAR_11->connect_timeout = (ngx_msec_t) VAR_5;

    }

    if (VAR_6 > 0) {



        VAR_11->send_timeout = (ngx_msec_t) VAR_6;

    }

    if (VAR_7 > 0) {



        VAR_11->read_timeout = (ngx_msec_t) VAR_7;

    }

    return VAR_2;
}
