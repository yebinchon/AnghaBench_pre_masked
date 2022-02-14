
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_10__ ;


typedef int u_char ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef size_t ngx_uint_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_20__ {int single; int number; TYPE_7__* peer; TYPE_4__* name; int init_number; } ;
typedef TYPE_6__ ngx_http_upstream_rr_peers_t ;
struct TYPE_19__ {int * data; scalar_t__ len; } ;
struct TYPE_18__ {size_t len; int * data; } ;
struct TYPE_21__ {int socklen; int weight; int effective_weight; int max_fails; int fail_timeout; size_t check_index; struct TYPE_21__* next; scalar_t__ max_conns; scalar_t__ current_weight; TYPE_5__ id; TYPE_4__ name; struct sockaddr* sockaddr; } ;
typedef TYPE_7__ ngx_http_upstream_rr_peer_t ;
struct TYPE_22__ {TYPE_6__* peers; scalar_t__* tried; scalar_t__ data; scalar_t__ config; int * current; } ;
typedef TYPE_8__ ngx_http_upstream_rr_peer_data_t ;
struct TYPE_23__ {int naddrs; int socklen; int port; TYPE_3__* addrs; TYPE_4__ host; TYPE_4__ name; struct sockaddr* sockaddr; } ;
typedef TYPE_9__ ngx_http_upstream_resolved_t ;
struct TYPE_14__ {TYPE_2__* upstream; int pool; } ;
typedef TYPE_10__ ngx_http_request_t ;
struct TYPE_17__ {int socklen; int sockaddr; } ;
struct TYPE_15__ {int save_session; int set_session; int tries; int free; int get; TYPE_8__* data; } ;
struct TYPE_16__ {TYPE_1__ peer; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (struct sockaddr*,int ) ;
 int FUNC_2 (struct sockaddr*,int ,int) ;
 void* FUNC_3 (int ,int) ;
 void* FUNC_4 (int ,size_t) ;
 int * FUNC_5 (int ,int ) ;
 size_t FUNC_6 (struct sockaddr*,int,int *,int ,int) ;

ngx_int_t
FUNC_7(ngx_http_request_t *VAR_8,
    ngx_http_upstream_resolved_t *VAR_9)
{
    u_char *VAR_10;
    size_t VAR_11;
    socklen_t VAR_12;
    ngx_uint_t VAR_13, VAR_14;
    struct sockaddr *VAR_15;
    ngx_http_upstream_rr_peer_t *VAR_16, **VAR_17;
    ngx_http_upstream_rr_peers_t *VAR_18;
    ngx_http_upstream_rr_peer_data_t *VAR_19;

    VAR_19 = VAR_8->upstream->peer.data;

    if (VAR_19 == ((void*)0)) {
        VAR_19 = FUNC_3(VAR_8->pool, sizeof(ngx_http_upstream_rr_peer_data_t));
        if (VAR_19 == ((void*)0)) {
            return VAR_1;
        }

        VAR_8->upstream->peer.data = VAR_19;
    }

    VAR_18 = FUNC_4(VAR_8->pool, sizeof(ngx_http_upstream_rr_peers_t));
    if (VAR_18 == ((void*)0)) {
        return VAR_1;
    }

    VAR_16 = FUNC_4(VAR_8->pool, sizeof(ngx_http_upstream_rr_peer_t)
                                * VAR_9->naddrs);
    if (VAR_16 == ((void*)0)) {
        return VAR_1;
    }

    VAR_18->single = (VAR_9->naddrs == 1);
    VAR_18->number = VAR_9->naddrs;



    VAR_18->name = &VAR_9->host;

    if (VAR_9->sockaddr) {
        VAR_16[0].sockaddr = VAR_9->sockaddr;
        VAR_16[0].socklen = VAR_9->socklen;
        VAR_16[0].name = VAR_9->name.data ? VAR_9->name : VAR_9->host;




        VAR_16[0].weight = 1;
        VAR_16[0].effective_weight = 1;
        VAR_16[0].current_weight = 0;
        VAR_16[0].max_conns = 0;
        VAR_16[0].max_fails = 1;
        VAR_16[0].fail_timeout = 10;
        VAR_18->peer = VAR_16;




    } else {
        VAR_17 = &VAR_18->peer;

        for (VAR_13 = 0; VAR_13 < VAR_9->naddrs; VAR_13++) {

            VAR_12 = VAR_9->addrs[VAR_13].socklen;

            VAR_15 = FUNC_3(VAR_8->pool, VAR_12);
            if (VAR_15 == ((void*)0)) {
                return VAR_1;
            }

            FUNC_2(VAR_15, VAR_9->addrs[VAR_13].sockaddr, VAR_12);
            FUNC_1(VAR_15, VAR_9->port);

            VAR_10 = FUNC_5(VAR_8->pool, VAR_3);
            if (VAR_10 == ((void*)0)) {
                return VAR_1;
            }

            VAR_11 = FUNC_6(VAR_15, VAR_12, VAR_10, VAR_3, 1);

            VAR_16[VAR_13].sockaddr = VAR_15;
            VAR_16[VAR_13].socklen = VAR_12;
            VAR_16[VAR_13].name.len = VAR_11;
            VAR_16[VAR_13].name.data = VAR_10;




            VAR_16[VAR_13].weight = 1;
            VAR_16[VAR_13].effective_weight = 1;
            VAR_16[VAR_13].current_weight = 0;
            VAR_16[VAR_13].max_conns = 0;
            VAR_16[VAR_13].max_fails = 1;
            VAR_16[VAR_13].fail_timeout = 10;
            *VAR_17 = &VAR_16[VAR_13];
            VAR_17 = &VAR_16[VAR_13].next;



        }
    }

    VAR_19->peers = VAR_18;
    VAR_19->current = ((void*)0);
    VAR_19->config = 0;

    if (VAR_19->peers->number <= 8 * sizeof(uintptr_t)) {
        VAR_19->tried = &VAR_19->data;
        VAR_19->data = 0;

    } else {
        VAR_14 = (VAR_19->peers->number + (8 * sizeof(uintptr_t) - 1))
                / (8 * sizeof(uintptr_t));

        VAR_19->tried = FUNC_4(VAR_8->pool, VAR_14 * sizeof(uintptr_t));
        if (VAR_19->tried == ((void*)0)) {
            return VAR_1;
        }
    }

    VAR_8->upstream->peer.get = VAR_7;
    VAR_8->upstream->peer.free = VAR_6;
    VAR_8->upstream->peer.tries = FUNC_0(VAR_19->peers);





    return VAR_2;
}
