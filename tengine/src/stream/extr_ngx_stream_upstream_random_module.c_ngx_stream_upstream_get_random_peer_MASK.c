
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef scalar_t__ time_t ;
typedef size_t ngx_uint_t ;
struct TYPE_21__ {scalar_t__ single; } ;
typedef TYPE_3__ ngx_stream_upstream_rr_peers_t ;
struct TYPE_22__ {scalar_t__ max_fails; scalar_t__ fails; scalar_t__ checked; scalar_t__ fail_timeout; scalar_t__ max_conns; scalar_t__ conns; int name; int socklen; int sockaddr; scalar_t__ down; } ;
typedef TYPE_4__ ngx_stream_upstream_rr_peer_t ;
struct TYPE_23__ {uintptr_t* tried; TYPE_4__* current; TYPE_3__* peers; } ;
typedef TYPE_5__ ngx_stream_upstream_rr_peer_data_t ;
struct TYPE_24__ {int tries; TYPE_2__* conf; TYPE_5__ rrp; } ;
typedef TYPE_6__ ngx_stream_upstream_random_peer_data_t ;
struct TYPE_25__ {int * name; int socklen; int sockaddr; int * connection; scalar_t__ cached; int tries; int log; } ;
typedef TYPE_7__ ngx_peer_connection_t ;
typedef int ngx_int_t ;
struct TYPE_20__ {TYPE_1__* ranges; } ;
struct TYPE_19__ {TYPE_4__* peer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,char*,int ) ;
 int FUNC_1 (TYPE_7__*,TYPE_5__*) ;
 size_t FUNC_2 (TYPE_3__*,TYPE_6__*) ;
 int FUNC_3 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_4 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 scalar_t__ FUNC_7 () ;

__attribute__((used)) static ngx_int_t
FUNC_8(ngx_peer_connection_t *VAR_2, void *VAR_3)
{
    ngx_stream_upstream_random_peer_data_t *VAR_4 = VAR_3;

    time_t VAR_5;
    uintptr_t VAR_6;
    ngx_uint_t VAR_7, VAR_8;
    ngx_stream_upstream_rr_peer_t *VAR_9;
    ngx_stream_upstream_rr_peers_t *VAR_10;
    ngx_stream_upstream_rr_peer_data_t *VAR_11;

    FUNC_0(VAR_0, VAR_2->log, 0,
                   "get random peer, try: %ui", VAR_2->tries);

    VAR_11 = &VAR_4->rrp;
    VAR_10 = VAR_11->peers;

    FUNC_5(VAR_10);

    if (VAR_4->tries > 20 || VAR_10->single) {
        FUNC_6(VAR_10);
        return FUNC_1(VAR_2, VAR_11);
    }

    VAR_2->cached = 0;
    VAR_2->connection = ((void*)0);

    VAR_5 = FUNC_7();

    for ( ;; ) {

        VAR_7 = FUNC_2(VAR_10, VAR_4);

        VAR_9 = VAR_4->conf->ranges[VAR_7].peer;

        VAR_8 = VAR_7 / (8 * sizeof(uintptr_t));
        VAR_6 = (uintptr_t) 1 << VAR_7 % (8 * sizeof(uintptr_t));

        if (VAR_11->tried[VAR_8] & VAR_6) {
            goto next;
        }

        FUNC_3(VAR_10, VAR_9);

        if (VAR_9->down) {
            FUNC_4(VAR_10, VAR_9);
            goto next;
        }

        if (VAR_9->max_fails
            && VAR_9->fails >= VAR_9->max_fails
            && VAR_5 - VAR_9->checked <= VAR_9->fail_timeout)
        {
            FUNC_4(VAR_10, VAR_9);
            goto next;
        }

        if (VAR_9->max_conns && VAR_9->conns >= VAR_9->max_conns) {
            FUNC_4(VAR_10, VAR_9);
            goto next;
        }

        break;

    next:

        if (++VAR_4->tries > 20) {
            FUNC_6(VAR_10);
            return FUNC_1(VAR_2, VAR_11);
        }
    }

    VAR_11->current = VAR_9;

    if (VAR_5 - VAR_9->checked > VAR_9->fail_timeout) {
        VAR_9->checked = VAR_5;
    }

    VAR_2->sockaddr = VAR_9->sockaddr;
    VAR_2->socklen = VAR_9->socklen;
    VAR_2->name = &VAR_9->name;

    VAR_9->conns++;

    FUNC_4(VAR_10, VAR_9);
    FUNC_6(VAR_10);

    VAR_11->tried[VAR_8] |= VAR_6;

    return VAR_1;
}
