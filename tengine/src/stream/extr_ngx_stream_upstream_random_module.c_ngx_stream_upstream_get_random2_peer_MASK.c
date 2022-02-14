
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


typedef scalar_t__ time_t ;
typedef size_t ngx_uint_t ;
struct TYPE_17__ {scalar_t__ single; } ;
typedef TYPE_3__ ngx_stream_upstream_rr_peers_t ;
struct TYPE_18__ {scalar_t__ max_fails; scalar_t__ fails; scalar_t__ checked; scalar_t__ fail_timeout; int max_conns; int conns; int weight; int name; int socklen; int sockaddr; scalar_t__ down; } ;
typedef TYPE_4__ ngx_stream_upstream_rr_peer_t ;
struct TYPE_19__ {uintptr_t* tried; TYPE_4__* current; TYPE_3__* peers; } ;
typedef TYPE_5__ ngx_stream_upstream_rr_peer_data_t ;
struct TYPE_20__ {int tries; TYPE_2__* conf; TYPE_5__ rrp; } ;
typedef TYPE_6__ ngx_stream_upstream_random_peer_data_t ;
struct TYPE_21__ {int * name; int socklen; int sockaddr; int * connection; scalar_t__ cached; int tries; int log; } ;
typedef TYPE_7__ ngx_peer_connection_t ;
typedef int ngx_int_t ;
struct TYPE_16__ {TYPE_1__* ranges; } ;
struct TYPE_15__ {TYPE_4__* peer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,char*,int ) ;
 int FUNC_1 (TYPE_7__*,TYPE_5__*) ;
 size_t FUNC_2 (TYPE_3__*,TYPE_6__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 () ;

__attribute__((used)) static ngx_int_t
FUNC_6(ngx_peer_connection_t *VAR_2, void *VAR_3)
{
    ngx_stream_upstream_random_peer_data_t *VAR_4 = VAR_3;

    time_t VAR_5;
    uintptr_t VAR_6;
    ngx_uint_t VAR_7, VAR_8, VAR_9;
    ngx_stream_upstream_rr_peer_t *VAR_10, *VAR_11;
    ngx_stream_upstream_rr_peers_t *VAR_12;
    ngx_stream_upstream_rr_peer_data_t *VAR_13;

    FUNC_0(VAR_0, VAR_2->log, 0,
                   "get random2 peer, try: %ui", VAR_2->tries);

    VAR_13 = &VAR_4->rrp;
    VAR_12 = VAR_13->peers;

    FUNC_4(VAR_12);

    if (VAR_4->tries > 20 || VAR_12->single) {
        FUNC_3(VAR_12);
        return FUNC_1(VAR_2, VAR_13);
    }

    VAR_2->cached = 0;
    VAR_2->connection = ((void*)0);

    VAR_5 = FUNC_5();

    VAR_11 = ((void*)0);





    for ( ;; ) {

        VAR_7 = FUNC_2(VAR_12, VAR_4);

        VAR_10 = VAR_4->conf->ranges[VAR_7].peer;

        if (VAR_10 == VAR_11) {
            goto next;
        }

        VAR_8 = VAR_7 / (8 * sizeof(uintptr_t));
        VAR_6 = (uintptr_t) 1 << VAR_7 % (8 * sizeof(uintptr_t));

        if (VAR_13->tried[VAR_8] & VAR_6) {
            goto next;
        }

        if (VAR_10->down) {
            goto next;
        }

        if (VAR_10->max_fails
            && VAR_10->fails >= VAR_10->max_fails
            && VAR_5 - VAR_10->checked <= VAR_10->fail_timeout)
        {
            goto next;
        }

        if (VAR_10->max_conns && VAR_10->conns >= VAR_10->max_conns) {
            goto next;
        }

        if (VAR_11) {
            if (VAR_10->conns * VAR_11->weight > VAR_11->conns * VAR_10->weight) {
                VAR_10 = VAR_11;
                VAR_8 = VAR_9 / (8 * sizeof(uintptr_t));
                VAR_6 = (uintptr_t) 1 << VAR_9 % (8 * sizeof(uintptr_t));
            }

            break;
        }

        VAR_11 = VAR_10;
        VAR_9 = VAR_7;

    next:

        if (++VAR_4->tries > 20) {
            FUNC_3(VAR_12);
            return FUNC_1(VAR_2, VAR_13);
        }
    }

    VAR_13->current = VAR_10;

    if (VAR_5 - VAR_10->checked > VAR_10->fail_timeout) {
        VAR_10->checked = VAR_5;
    }

    VAR_2->sockaddr = VAR_10->sockaddr;
    VAR_2->socklen = VAR_10->socklen;
    VAR_2->name = &VAR_10->name;

    VAR_10->conns++;

    FUNC_3(VAR_12);

    VAR_13->tried[VAR_8] |= VAR_6;

    return VAR_1;
}
