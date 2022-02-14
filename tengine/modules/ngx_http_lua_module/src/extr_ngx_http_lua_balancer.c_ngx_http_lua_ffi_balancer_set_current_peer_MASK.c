
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_15__ {size_t len; int * data; } ;
struct TYPE_17__ {int no_resolve; char* err; TYPE_2__* addrs; scalar_t__ uri_part; scalar_t__ default_port; TYPE_1__ url; } ;
typedef TYPE_3__ ngx_url_t ;
typedef int ngx_http_upstream_t ;
struct TYPE_18__ {int pool; int * upstream; } ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_19__ {TYPE_7__* balancer_peer_data; } ;
typedef TYPE_5__ ngx_http_lua_main_conf_t ;
struct TYPE_20__ {int context; } ;
typedef TYPE_6__ ngx_http_lua_ctx_t ;
struct TYPE_21__ {int * host; int socklen; scalar_t__ sockaddr; } ;
typedef TYPE_7__ ngx_http_lua_balancer_peer_data_t ;
typedef scalar_t__ in_port_t ;
struct TYPE_16__ {int name; int socklen; scalar_t__ sockaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_6__* FUNC_0 (TYPE_4__*,int ) ;
 TYPE_5__* FUNC_1 (TYPE_4__*,int ) ;
 int VAR_3 ;
 int FUNC_2 (int *,int const*,size_t) ;
 int FUNC_3 (TYPE_3__*,int) ;
 int * FUNC_4 (int ,size_t) ;
 scalar_t__ FUNC_5 (int ,TYPE_3__*) ;

int
FUNC_6(ngx_http_request_t *VAR_4,
    const u_char *VAR_5, size_t VAR_6, int VAR_7, char **VAR_8)
{
    ngx_url_t VAR_9;
    ngx_http_lua_ctx_t *VAR_10;
    ngx_http_upstream_t *VAR_11;

    ngx_http_lua_main_conf_t *VAR_12;
    ngx_http_lua_balancer_peer_data_t *VAR_13;

    if (VAR_4 == ((void*)0)) {
        *VAR_8 = "no request found";
        return VAR_0;
    }

    VAR_11 = VAR_4->upstream;

    if (VAR_11 == ((void*)0)) {
        *VAR_8 = "no upstream found";
        return VAR_0;
    }

    VAR_10 = FUNC_0(VAR_4, VAR_3);
    if (VAR_10 == ((void*)0)) {
        *VAR_8 = "no ctx found";
        return VAR_0;
    }

    if ((VAR_10->context & VAR_1) == 0) {
        *VAR_8 = "API disabled in the current context";
        return VAR_0;
    }

    VAR_12 = FUNC_1(VAR_4, VAR_3);





    VAR_13 = VAR_12->balancer_peer_data;
    if (VAR_13 == ((void*)0)) {
        *VAR_8 = "no upstream peer data found";
        return VAR_0;
    }

    FUNC_3(&VAR_9, sizeof(ngx_url_t));

    VAR_9.url.data = FUNC_4(VAR_4->pool, VAR_6);
    if (VAR_9.url.data == ((void*)0)) {
        *VAR_8 = "no memory";
        return VAR_0;
    }

    FUNC_2(VAR_9.url.data, VAR_5, VAR_6);

    VAR_9.url.len = VAR_6;
    VAR_9.default_port = (in_port_t) VAR_7;
    VAR_9.uri_part = 0;
    VAR_9.no_resolve = 1;

    if (FUNC_5(VAR_4->pool, &VAR_9) != VAR_2) {
        if (VAR_9.err) {
            *VAR_8 = VAR_9.err;
        }

        return VAR_0;
    }

    if (VAR_9.addrs && VAR_9.addrs[0].sockaddr) {
        VAR_13->sockaddr = VAR_9.addrs[0].sockaddr;
        VAR_13->socklen = VAR_9.addrs[0].socklen;
        VAR_13->host = &VAR_9.addrs[0].name;

    } else {
        *VAR_8 = "no host allowed";
        return VAR_0;
    }

    return VAR_2;
}
