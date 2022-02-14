
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int ngx_stream_upstream_srv_conf_t ;
struct TYPE_18__ {int * ranges; scalar_t__ two; } ;
typedef TYPE_5__ ngx_stream_upstream_random_srv_conf_t ;
struct TYPE_17__ {TYPE_8__* peers; } ;
struct TYPE_19__ {TYPE_4__ rrp; scalar_t__ tries; TYPE_5__* conf; } ;
typedef TYPE_6__ ngx_stream_upstream_random_peer_data_t ;
struct TYPE_20__ {TYPE_3__* upstream; TYPE_1__* connection; } ;
typedef TYPE_7__ ngx_stream_session_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_21__ {scalar_t__ shpool; } ;
struct TYPE_15__ {int get; TYPE_4__* data; } ;
struct TYPE_16__ {TYPE_2__ peer; } ;
struct TYPE_14__ {int pool; int log; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,int ,char*) ;
 TYPE_6__* FUNC_1 (int ,int) ;
 TYPE_5__* FUNC_2 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (TYPE_7__*,int *) ;
 int VAR_5 ;
 int FUNC_4 (TYPE_8__*) ;
 int FUNC_5 (TYPE_8__*) ;
 scalar_t__ FUNC_6 (int *,int *) ;

__attribute__((used)) static ngx_int_t
FUNC_7(ngx_stream_session_t *VAR_6,
    ngx_stream_upstream_srv_conf_t *VAR_7)
{
    ngx_stream_upstream_random_srv_conf_t *VAR_8;
    ngx_stream_upstream_random_peer_data_t *VAR_9;

    FUNC_0(VAR_1, VAR_6->connection->log, 0,
                   "init random peer");

    VAR_8 = FUNC_2(VAR_7,
                                            VAR_5);

    VAR_9 = FUNC_1(VAR_6->connection->pool,
                    sizeof(ngx_stream_upstream_random_peer_data_t));
    if (VAR_9 == ((void*)0)) {
        return VAR_0;
    }

    VAR_6->upstream->peer.data = &VAR_9->rrp;

    if (FUNC_3(VAR_6, VAR_7) != VAR_2) {
        return VAR_0;
    }

    if (VAR_8->two) {
        VAR_6->upstream->peer.get = VAR_3;

    } else {
        VAR_6->upstream->peer.get = VAR_4;
    }

    VAR_9->conf = VAR_8;
    VAR_9->tries = 0;

    FUNC_4(VAR_9->rrp.peers);
    FUNC_5(VAR_9->rrp.peers);

    return VAR_2;
}
