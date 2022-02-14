
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


typedef scalar_t__ time_t ;
typedef size_t ngx_uint_t ;
struct TYPE_11__ {size_t last_number; int init_number; int vnumber; TYPE_5__* last_peer; TYPE_3__* vpeers; } ;
typedef TYPE_1__ ngx_http_upstream_vnswrr_srv_conf_t ;
struct TYPE_16__ {uintptr_t* tried; TYPE_5__* current; TYPE_4__* peers; } ;
struct TYPE_12__ {TYPE_1__* uvnscf; TYPE_6__ rrp; } ;
typedef TYPE_2__ ngx_http_upstream_vnswrr_peer_data_t ;
struct TYPE_13__ {int rindex; TYPE_5__* vpeer; } ;
typedef TYPE_3__ ngx_http_upstream_rr_vpeers_t ;
struct TYPE_14__ {int number; int total_weight; scalar_t__ weighted; TYPE_5__* peer; } ;
typedef TYPE_4__ ngx_http_upstream_rr_peers_t ;
struct TYPE_15__ {scalar_t__ max_fails; scalar_t__ fails; scalar_t__ checked; scalar_t__ fail_timeout; scalar_t__ max_conns; scalar_t__ conns; int check_index; scalar_t__ down; struct TYPE_15__* next; } ;
typedef TYPE_5__ ngx_http_upstream_rr_peer_t ;
typedef TYPE_6__ ngx_http_upstream_rr_peer_data_t ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*,TYPE_1__*,size_t,size_t) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;

__attribute__((used)) static ngx_http_upstream_rr_peer_t *
FUNC_4(ngx_http_upstream_vnswrr_peer_data_t *VAR_1)
{
    time_t VAR_2;
    uintptr_t VAR_3;
    ngx_uint_t VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
    ngx_http_upstream_rr_peer_t *VAR_9, *VAR_10;
    ngx_http_upstream_rr_peers_t *VAR_11;
    ngx_http_upstream_rr_vpeers_t *VAR_12;
    ngx_http_upstream_rr_peer_data_t *VAR_13;
    ngx_http_upstream_vnswrr_srv_conf_t *VAR_14;

    VAR_2 = FUNC_3();

    VAR_10 = ((void*)0);





    VAR_13 = &VAR_1->rrp;
    VAR_11 = VAR_13->peers;
    VAR_14 = VAR_1->uvnscf;
    VAR_12 = VAR_14->vpeers;

    if (VAR_14->last_number == VAR_0) {
        VAR_14->init_number = FUNC_2() % VAR_11->number;

        if (VAR_11->weighted) {
            VAR_9 = VAR_12[VAR_14->init_number].vpeer;

        } else {
            for (VAR_9 = VAR_11->peer, VAR_4 = 0; VAR_4 < VAR_14->init_number; VAR_4++) {
                VAR_9 = VAR_9->next;
            }
        }

        VAR_14->last_number = VAR_14->init_number;
        VAR_14->last_peer = VAR_9;
    }

    if (VAR_11->weighted) {

        if (VAR_14->vnumber != VAR_11->total_weight
            && (VAR_14->last_number + 1 == VAR_14->vnumber))
        {
            VAR_5 = VAR_11->total_weight - VAR_14->vnumber;
            if (VAR_5 > VAR_11->number) {
                VAR_5 = VAR_11->number;
            }

            FUNC_1(VAR_11, VAR_14, VAR_14->vnumber,
                            VAR_5 + VAR_14->vnumber);

        }

        VAR_8 = (VAR_14->last_number + 1) % VAR_14->vnumber;
        VAR_9 = VAR_12[VAR_8].vpeer;

    } else {
        if (VAR_14->last_peer && VAR_14->last_peer->next) {
            VAR_8 = (VAR_14->last_number + 1) % VAR_11->number;
            VAR_9 = VAR_14->last_peer->next;

        } else {
            VAR_8 = 0;
            VAR_9 = VAR_11->peer;
        }
    }

    for (VAR_4 = VAR_8, VAR_7 = 1; VAR_4 != VAR_8 || VAR_7;
         VAR_4 = VAR_11->weighted
         ? ((VAR_4 + 1) % VAR_14->vnumber) : ((VAR_4 + 1) % VAR_11->number),
         VAR_9 = VAR_11->weighted
         ? VAR_12[VAR_4].vpeer : (VAR_9->next ? VAR_9->next : VAR_11->peer))
    {

        VAR_7 = 0;
        if (VAR_11->weighted) {

            VAR_5 = VAR_11->total_weight - VAR_14->vnumber;
            if (VAR_5 > VAR_11->number) {
                VAR_5 = VAR_11->number;
            }

            FUNC_1(VAR_11, VAR_14, VAR_14->vnumber,
                            VAR_5 + VAR_14->vnumber);

            VAR_5 = VAR_12[VAR_4].rindex / (8 * sizeof(uintptr_t));
            VAR_3 = (uintptr_t) 1 << VAR_12[VAR_4].rindex % (8 * sizeof(uintptr_t));

        } else {
            VAR_5 = VAR_4 / (8 * sizeof(uintptr_t));
            VAR_3 = (uintptr_t) 1 << VAR_4 % (8 * sizeof(uintptr_t));
        }

        if (VAR_13->tried[VAR_5] & VAR_3) {
            continue;
        }

        if (VAR_9->down) {
            continue;
        }

        if (VAR_9->max_fails
            && VAR_9->fails >= VAR_9->max_fails
            && VAR_2 - VAR_9->checked <= VAR_9->fail_timeout)
        {
            continue;
        }
        VAR_10 = VAR_9;
        VAR_14->last_peer = VAR_9;
        VAR_14->last_number = VAR_4;
        VAR_6 = VAR_4;
        break;
    }

    if (VAR_10 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_13->current = VAR_10;

    if (VAR_11->weighted) {
        VAR_5 = VAR_12[VAR_6].rindex / (8 * sizeof(uintptr_t));
        VAR_3 = (uintptr_t) 1 << VAR_12[VAR_6].rindex % (8 * sizeof(uintptr_t));

    } else {
        VAR_5 = VAR_6 / (8 * sizeof(uintptr_t));
        VAR_3 = (uintptr_t) 1 << VAR_6 % (8 * sizeof(uintptr_t));
    }

    VAR_13->tried[VAR_5] |= VAR_3;

    if (VAR_2 - VAR_10->checked > VAR_10->fail_timeout) {
        VAR_10->checked = VAR_2;
    }

    return VAR_10;
}
