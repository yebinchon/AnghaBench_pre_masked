
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
typedef int ngx_http_upstream_srv_conf_t ;
struct TYPE_14__ {scalar_t__ (* original_init_peer ) (TYPE_6__*,int *) ;} ;
typedef TYPE_4__ ngx_http_upstream_dynamic_srv_conf_t ;
struct TYPE_15__ {int original_save_session; int original_set_session; TYPE_6__* request; int original_free_peer; int original_get_peer; struct TYPE_15__* data; TYPE_3__* upstream; TYPE_4__* conf; } ;
typedef TYPE_5__ ngx_http_upstream_dynamic_peer_data_t ;
struct TYPE_16__ {TYPE_3__* upstream; int pool; TYPE_1__* connection; } ;
typedef TYPE_6__ ngx_http_request_t ;
struct TYPE_12__ {int save_session; int set_session; int free; int get; TYPE_5__* data; } ;
struct TYPE_13__ {TYPE_2__ peer; } ;
struct TYPE_11__ {int log; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_4__* FUNC_0 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int ,int ,char*) ;
 TYPE_5__* FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (TYPE_6__*,int *) ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_http_request_t *VAR_8,
    ngx_http_upstream_srv_conf_t *VAR_9)
{
    ngx_http_upstream_dynamic_peer_data_t *VAR_10;
    ngx_http_upstream_dynamic_srv_conf_t *VAR_11;

    FUNC_1(VAR_1, VAR_8->connection->log, 0,
                   "init dynamic peer");

    VAR_11 = FUNC_0(VAR_9,
                                          VAR_3);

    VAR_10 = FUNC_2(VAR_8->pool, sizeof(ngx_http_upstream_dynamic_peer_data_t));
    if (VAR_10 == ((void*)0)) {
        return VAR_0;
    }

    if (VAR_11->original_init_peer(VAR_8, VAR_9) != VAR_2) {
        return VAR_0;
    }

    VAR_10->conf = VAR_11;
    VAR_10->upstream = VAR_8->upstream;
    VAR_10->data = VAR_8->upstream->peer.data;
    VAR_10->original_get_peer = VAR_8->upstream->peer.get;
    VAR_10->original_free_peer = VAR_8->upstream->peer.free;
    VAR_10->request = VAR_8;

    VAR_8->upstream->peer.data = VAR_10;
    VAR_8->upstream->peer.get = VAR_7;
    VAR_8->upstream->peer.free = VAR_6;
    return VAR_2;
}
