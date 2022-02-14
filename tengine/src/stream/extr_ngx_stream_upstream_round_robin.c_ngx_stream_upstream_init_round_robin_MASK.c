
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_10__ ;


struct TYPE_20__ {scalar_t__ port; size_t naddrs; TYPE_3__* addrs; int err; int host; } ;
typedef TYPE_5__ ngx_url_t ;
typedef size_t ngx_uint_t ;
struct TYPE_19__ {TYPE_8__* data; int init; } ;
struct TYPE_21__ {scalar_t__ port; TYPE_4__ peer; int host; int line; int file_name; TYPE_1__* servers; } ;
typedef TYPE_6__ ngx_stream_upstream_srv_conf_t ;
struct TYPE_22__ {size_t naddrs; size_t weight; int max_fails; int fail_timeout; int name; int down; scalar_t__ max_conns; TYPE_2__* addrs; scalar_t__ backup; } ;
typedef TYPE_7__ ngx_stream_upstream_server_t ;
struct TYPE_23__ {int single; size_t number; int weighted; size_t total_weight; TYPE_9__* peer; int * name; struct TYPE_23__* next; } ;
typedef TYPE_8__ ngx_stream_upstream_rr_peers_t ;
struct TYPE_24__ {size_t weight; size_t effective_weight; int max_fails; int fail_timeout; struct TYPE_24__* next; scalar_t__ max_conns; scalar_t__ current_weight; int name; int socklen; int sockaddr; int server; int down; } ;
typedef TYPE_9__ ngx_stream_upstream_rr_peer_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_15__ {int pool; int log; } ;
typedef TYPE_10__ ngx_conf_t ;
struct TYPE_18__ {int name; int socklen; int sockaddr; } ;
struct TYPE_17__ {int name; int socklen; int sockaddr; } ;
struct TYPE_16__ {size_t nelts; TYPE_7__* elts; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,TYPE_5__*) ;
 int FUNC_1 (int ,int ,int ,char*,int ,int *,int ,...) ;
 int FUNC_2 (TYPE_5__*,int) ;
 void* FUNC_3 (int ,int) ;
 int VAR_3 ;

ngx_int_t
FUNC_4(ngx_conf_t *VAR_4,
    ngx_stream_upstream_srv_conf_t *VAR_5)
{
    ngx_url_t VAR_6;
    ngx_uint_t VAR_7, VAR_8, VAR_9, VAR_10;
    ngx_stream_upstream_server_t *VAR_11;
    ngx_stream_upstream_rr_peer_t *VAR_12, **VAR_13;
    ngx_stream_upstream_rr_peers_t *VAR_14, *VAR_15;

    VAR_5->peer.init = VAR_3;

    if (VAR_5->servers) {
        VAR_11 = VAR_5->servers->elts;

        VAR_9 = 0;
        VAR_10 = 0;

        for (VAR_7 = 0; VAR_7 < VAR_5->servers->nelts; VAR_7++) {
            if (VAR_11[VAR_7].backup) {
                continue;
            }

            VAR_9 += VAR_11[VAR_7].naddrs;
            VAR_10 += VAR_11[VAR_7].naddrs * VAR_11[VAR_7].weight;
        }

        if (VAR_9 == 0) {
            FUNC_1(VAR_1, VAR_4->log, 0,
                          "no servers in upstream \"%V\" in %s:%ui",
                          VAR_5->host, &VAR_5->file_name, VAR_5->line);
            return VAR_0;
        }

        VAR_14 = FUNC_3(VAR_4->pool, sizeof(ngx_stream_upstream_rr_peers_t));
        if (VAR_14 == ((void*)0)) {
            return VAR_0;
        }

        VAR_12 = FUNC_3(VAR_4->pool, sizeof(ngx_stream_upstream_rr_peer_t) * VAR_9);
        if (VAR_12 == ((void*)0)) {
            return VAR_0;
        }

        VAR_14->single = (VAR_9 == 1);
        VAR_14->number = VAR_9;
        VAR_14->weighted = (VAR_10 != VAR_9);
        VAR_14->total_weight = VAR_10;
        VAR_14->name = &VAR_5->host;

        VAR_9 = 0;
        VAR_13 = &VAR_14->peer;

        for (VAR_7 = 0; VAR_7 < VAR_5->servers->nelts; VAR_7++) {
            if (VAR_11[VAR_7].backup) {
                continue;
            }

            for (VAR_8 = 0; VAR_8 < VAR_11[VAR_7].naddrs; VAR_8++) {
                VAR_12[VAR_9].sockaddr = VAR_11[VAR_7].addrs[VAR_8].sockaddr;
                VAR_12[VAR_9].socklen = VAR_11[VAR_7].addrs[VAR_8].socklen;
                VAR_12[VAR_9].name = VAR_11[VAR_7].addrs[VAR_8].name;
                VAR_12[VAR_9].weight = VAR_11[VAR_7].weight;
                VAR_12[VAR_9].effective_weight = VAR_11[VAR_7].weight;
                VAR_12[VAR_9].current_weight = 0;
                VAR_12[VAR_9].max_conns = VAR_11[VAR_7].max_conns;
                VAR_12[VAR_9].max_fails = VAR_11[VAR_7].max_fails;
                VAR_12[VAR_9].fail_timeout = VAR_11[VAR_7].fail_timeout;
                VAR_12[VAR_9].down = VAR_11[VAR_7].down;
                VAR_12[VAR_9].server = VAR_11[VAR_7].name;

                *VAR_13 = &VAR_12[VAR_9];
                VAR_13 = &VAR_12[VAR_9].next;
                VAR_9++;
            }
        }

        VAR_5->peer.data = VAR_14;



        VAR_9 = 0;
        VAR_10 = 0;

        for (VAR_7 = 0; VAR_7 < VAR_5->servers->nelts; VAR_7++) {
            if (!VAR_11[VAR_7].backup) {
                continue;
            }

            VAR_9 += VAR_11[VAR_7].naddrs;
            VAR_10 += VAR_11[VAR_7].naddrs * VAR_11[VAR_7].weight;
        }

        if (VAR_9 == 0) {
            return VAR_2;
        }

        VAR_15 = FUNC_3(VAR_4->pool, sizeof(ngx_stream_upstream_rr_peers_t));
        if (VAR_15 == ((void*)0)) {
            return VAR_0;
        }

        VAR_12 = FUNC_3(VAR_4->pool, sizeof(ngx_stream_upstream_rr_peer_t) * VAR_9);
        if (VAR_12 == ((void*)0)) {
            return VAR_0;
        }

        VAR_14->single = 0;
        VAR_15->single = 0;
        VAR_15->number = VAR_9;
        VAR_15->weighted = (VAR_10 != VAR_9);
        VAR_15->total_weight = VAR_10;
        VAR_15->name = &VAR_5->host;

        VAR_9 = 0;
        VAR_13 = &VAR_15->peer;

        for (VAR_7 = 0; VAR_7 < VAR_5->servers->nelts; VAR_7++) {
            if (!VAR_11[VAR_7].backup) {
                continue;
            }

            for (VAR_8 = 0; VAR_8 < VAR_11[VAR_7].naddrs; VAR_8++) {
                VAR_12[VAR_9].sockaddr = VAR_11[VAR_7].addrs[VAR_8].sockaddr;
                VAR_12[VAR_9].socklen = VAR_11[VAR_7].addrs[VAR_8].socklen;
                VAR_12[VAR_9].name = VAR_11[VAR_7].addrs[VAR_8].name;
                VAR_12[VAR_9].weight = VAR_11[VAR_7].weight;
                VAR_12[VAR_9].effective_weight = VAR_11[VAR_7].weight;
                VAR_12[VAR_9].current_weight = 0;
                VAR_12[VAR_9].max_conns = VAR_11[VAR_7].max_conns;
                VAR_12[VAR_9].max_fails = VAR_11[VAR_7].max_fails;
                VAR_12[VAR_9].fail_timeout = VAR_11[VAR_7].fail_timeout;
                VAR_12[VAR_9].down = VAR_11[VAR_7].down;
                VAR_12[VAR_9].server = VAR_11[VAR_7].name;

                *VAR_13 = &VAR_12[VAR_9];
                VAR_13 = &VAR_12[VAR_9].next;
                VAR_9++;
            }
        }

        VAR_14->next = VAR_15;

        return VAR_2;
    }




    if (VAR_5->port == 0) {
        FUNC_1(VAR_1, VAR_4->log, 0,
                      "no port in upstream \"%V\" in %s:%ui",
                      VAR_5->host, &VAR_5->file_name, VAR_5->line);
        return VAR_0;
    }

    FUNC_2(&VAR_6, sizeof(ngx_url_t));

    VAR_6.host = VAR_5->host;
    VAR_6.port = VAR_5->port;

    if (FUNC_0(VAR_4->pool, &VAR_6) != VAR_2) {
        if (VAR_6.err) {
            FUNC_1(VAR_1, VAR_4->log, 0,
                          "%s in upstream \"%V\" in %s:%ui",
                          VAR_6.err, &VAR_5->host, VAR_5->file_name, VAR_5->line);
        }

        return VAR_0;
    }

    VAR_9 = VAR_6.naddrs;

    VAR_14 = FUNC_3(VAR_4->pool, sizeof(ngx_stream_upstream_rr_peers_t));
    if (VAR_14 == ((void*)0)) {
        return VAR_0;
    }

    VAR_12 = FUNC_3(VAR_4->pool, sizeof(ngx_stream_upstream_rr_peer_t) * VAR_9);
    if (VAR_12 == ((void*)0)) {
        return VAR_0;
    }

    VAR_14->single = (VAR_9 == 1);
    VAR_14->number = VAR_9;
    VAR_14->weighted = 0;
    VAR_14->total_weight = VAR_9;
    VAR_14->name = &VAR_5->host;

    VAR_13 = &VAR_14->peer;

    for (VAR_7 = 0; VAR_7 < VAR_6.naddrs; VAR_7++) {
        VAR_12[VAR_7].sockaddr = VAR_6.addrs[VAR_7].sockaddr;
        VAR_12[VAR_7].socklen = VAR_6.addrs[VAR_7].socklen;
        VAR_12[VAR_7].name = VAR_6.addrs[VAR_7].name;
        VAR_12[VAR_7].weight = 1;
        VAR_12[VAR_7].effective_weight = 1;
        VAR_12[VAR_7].current_weight = 0;
        VAR_12[VAR_7].max_conns = 0;
        VAR_12[VAR_7].max_fails = 1;
        VAR_12[VAR_7].fail_timeout = 10;
        *VAR_13 = &VAR_12[VAR_7];
        VAR_13 = &VAR_12[VAR_7].next;
    }

    VAR_5->peer.data = VAR_14;



    return VAR_2;
}
