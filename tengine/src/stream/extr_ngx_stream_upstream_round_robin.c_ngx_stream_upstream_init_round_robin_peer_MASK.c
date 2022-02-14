
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int ngx_uint_t ;
struct TYPE_13__ {TYPE_9__* data; } ;
struct TYPE_18__ {TYPE_1__ peer; } ;
typedef TYPE_6__ ngx_stream_upstream_srv_conf_t ;
struct TYPE_19__ {TYPE_9__* peers; scalar_t__* tried; scalar_t__ data; scalar_t__ config; int * current; } ;
typedef TYPE_7__ ngx_stream_upstream_rr_peer_data_t ;
struct TYPE_20__ {TYPE_5__* upstream; TYPE_3__* connection; } ;
typedef TYPE_8__ ngx_stream_session_t ;
typedef int ngx_int_t ;
struct TYPE_21__ {int number; TYPE_2__* next; } ;
struct TYPE_16__ {int save_session; int set_session; int tries; int notify; int free; int get; TYPE_7__* data; } ;
struct TYPE_17__ {TYPE_4__ peer; } ;
struct TYPE_15__ {int pool; } ;
struct TYPE_14__ {int number; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_7__* FUNC_0 (int ,int) ;
 scalar_t__* FUNC_1 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_9__*) ;

ngx_int_t
FUNC_3(ngx_stream_session_t *VAR_7,
    ngx_stream_upstream_srv_conf_t *VAR_8)
{
    ngx_uint_t VAR_9;
    ngx_stream_upstream_rr_peer_data_t *VAR_10;

    VAR_10 = VAR_7->upstream->peer.data;

    if (VAR_10 == ((void*)0)) {
        VAR_10 = FUNC_0(VAR_7->connection->pool,
                         sizeof(ngx_stream_upstream_rr_peer_data_t));
        if (VAR_10 == ((void*)0)) {
            return VAR_0;
        }

        VAR_7->upstream->peer.data = VAR_10;
    }

    VAR_10->peers = VAR_8->peer.data;
    VAR_10->current = ((void*)0);
    VAR_10->config = 0;

    VAR_9 = VAR_10->peers->number;

    if (VAR_10->peers->next && VAR_10->peers->next->number > VAR_9) {
        VAR_9 = VAR_10->peers->next->number;
    }

    if (VAR_9 <= 8 * sizeof(uintptr_t)) {
        VAR_10->tried = &VAR_10->data;
        VAR_10->data = 0;

    } else {
        VAR_9 = (VAR_9 + (8 * sizeof(uintptr_t) - 1)) / (8 * sizeof(uintptr_t));

        VAR_10->tried = FUNC_1(VAR_7->connection->pool, VAR_9 * sizeof(uintptr_t));
        if (VAR_10->tried == ((void*)0)) {
            return VAR_0;
        }
    }

    VAR_7->upstream->peer.get = VAR_3;
    VAR_7->upstream->peer.free = VAR_2;
    VAR_7->upstream->peer.notify = VAR_4;
    VAR_7->upstream->peer.tries = FUNC_2(VAR_10->peers);







    return VAR_1;
}
