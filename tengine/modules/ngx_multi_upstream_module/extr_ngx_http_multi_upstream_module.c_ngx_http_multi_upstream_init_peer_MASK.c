
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
struct TYPE_14__ {TYPE_3__* upstream; TYPE_1__* connection; } ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_15__ {scalar_t__ (* original_init_peer ) (TYPE_4__*,int *) ;} ;
typedef TYPE_5__ ngx_http_multi_upstream_srv_conf_t ;
struct TYPE_16__ {int original_save_session; int original_set_session; int original_notify_peer; int original_free_peer; int original_get_peer; struct TYPE_16__* data; TYPE_3__* upstream; TYPE_4__* request; TYPE_5__* conf; } ;
typedef TYPE_6__ ngx_http_multi_upstream_peer_data_t ;
struct TYPE_12__ {int save_session; int set_session; int notify; int free; int get; TYPE_6__* data; } ;
struct TYPE_13__ {int multi; TYPE_2__ peer; } ;
struct TYPE_11__ {int pool; int log; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_5__* FUNC_0 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int ,int ,char*) ;
 TYPE_6__* FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (TYPE_4__*,int *) ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_http_request_t *VAR_9,
    ngx_http_upstream_srv_conf_t *VAR_10)
{
    ngx_http_multi_upstream_peer_data_t *VAR_11;
    ngx_http_multi_upstream_srv_conf_t *VAR_12;

    FUNC_1(VAR_1, VAR_9->connection->log, 0,
                   "multi: init multi upstream peer");

    VAR_12 = FUNC_0(VAR_10,
                                          VAR_5);

    VAR_11 = FUNC_2(VAR_9->connection->pool, sizeof(ngx_http_multi_upstream_peer_data_t));
    if (VAR_11 == ((void*)0)) {
        return VAR_0;
    }

    if (VAR_12->original_init_peer(VAR_9, VAR_10) != VAR_2) {
        return VAR_0;
    }

    VAR_11->conf = VAR_12;
    VAR_11->request = VAR_9;
    VAR_11->upstream = VAR_9->upstream;
    VAR_11->data = VAR_9->upstream->peer.data;
    VAR_11->original_get_peer = VAR_9->upstream->peer.get;
    VAR_11->original_free_peer = VAR_9->upstream->peer.free;
    VAR_11->original_notify_peer = VAR_9->upstream->peer.notify;

    VAR_9->upstream->peer.data = VAR_11;
    VAR_9->upstream->peer.get = VAR_4;
    VAR_9->upstream->peer.free = VAR_3;
    VAR_9->upstream->peer.notify = VAR_6;
    VAR_9->upstream->multi = 1;
    return VAR_2;
}
