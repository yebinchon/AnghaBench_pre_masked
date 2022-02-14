
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_13__ {int init; } ;
struct TYPE_14__ {TYPE_1__ peer; } ;
typedef TYPE_2__ ngx_http_upstream_srv_conf_t ;
struct TYPE_15__ {scalar_t__ (* original_init_upstream ) (TYPE_5__*,TYPE_2__*) ;int max_cached; int free; int cache; int original_init_peer; int requests; int timeout; } ;
typedef TYPE_3__ ngx_http_upstream_keepalive_srv_conf_t ;
struct TYPE_16__ {TYPE_3__* conf; int queue; } ;
typedef TYPE_4__ ngx_http_upstream_keepalive_cache_t ;
struct TYPE_17__ {int pool; int log; } ;
typedef TYPE_5__ ngx_conf_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 TYPE_3__* FUNC_2 (TYPE_2__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int ,int ,char*) ;
 TYPE_4__* FUNC_4 (int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 (TYPE_5__*,TYPE_2__*) ;

__attribute__((used)) static ngx_int_t
FUNC_8(ngx_conf_t *VAR_5,
    ngx_http_upstream_srv_conf_t *VAR_6)
{
    ngx_uint_t VAR_7;
    ngx_http_upstream_keepalive_srv_conf_t *VAR_8;
    ngx_http_upstream_keepalive_cache_t *VAR_9;

    FUNC_3(VAR_1, VAR_5->log, 0,
                   "init keepalive");

    VAR_8 = FUNC_2(VAR_6,
                                          VAR_4);

    FUNC_0(VAR_8->timeout, 60000);
    FUNC_1(VAR_8->requests, 100);

    if (VAR_8->original_init_upstream(VAR_5, VAR_6) != VAR_2) {
        return VAR_0;
    }

    VAR_8->original_init_peer = VAR_6->peer.init;

    VAR_6->peer.init = VAR_3;



    VAR_9 = FUNC_4(VAR_5->pool,
                sizeof(ngx_http_upstream_keepalive_cache_t) * VAR_8->max_cached);
    if (VAR_9 == ((void*)0)) {
        return VAR_0;
    }

    FUNC_5(&VAR_8->cache);
    FUNC_5(&VAR_8->free);

    for (VAR_7 = 0; VAR_7 < VAR_8->max_cached; VAR_7++) {
        FUNC_6(&VAR_8->free, &VAR_9[VAR_7].queue);
        VAR_9[VAR_7].conf = VAR_8;
    }

    return VAR_2;
}
