
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_10__ ;


typedef int u_char ;
typedef int ngx_uint_t ;
typedef int ngx_segment_tree_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_20__ {scalar_t__ data; int init; } ;
struct TYPE_23__ {TYPE_1__ peer; } ;
typedef TYPE_4__ ngx_http_upstream_srv_conf_t ;
struct TYPE_24__ {int number; TYPE_6__* peer; } ;
typedef TYPE_5__ ngx_http_upstream_rr_peers_t ;
struct TYPE_21__ {int len; int data; } ;
struct TYPE_25__ {int weight; int name; TYPE_2__ id; } ;
typedef TYPE_6__ ngx_http_upstream_rr_peer_t ;
struct TYPE_26__ {int number; int down_servers; TYPE_10__* tree; TYPE_8__* servers; TYPE_8__*** real_node; TYPE_3__* d_servers; } ;
typedef TYPE_7__ ngx_http_upstream_chash_srv_conf_t ;
struct TYPE_27__ {int rnindex; int index; void* hash; TYPE_6__* peer; } ;
typedef TYPE_8__ ngx_http_upstream_chash_server_t ;
typedef int ngx_http_upstream_chash_down_server_t ;
struct TYPE_28__ {int pool; int log; } ;
typedef TYPE_9__ ngx_conf_t ;
struct TYPE_22__ {int id; } ;
struct TYPE_19__ {int (* build ) (TYPE_10__*,int,int,int) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int* FUNC_1 (int,int ) ;
 int FUNC_2 (int*) ;
 TYPE_7__* FUNC_3 (TYPE_4__*,int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_4 (TYPE_9__*,TYPE_4__*) ;
 int FUNC_5 (int ,int ,int ,char*,int) ;
 int FUNC_6 (int ,int ,int ,char*,scalar_t__,int) ;
 void* FUNC_7 (int *,int) ;
 void* FUNC_8 (int ,int) ;
 int FUNC_9 (TYPE_8__*,size_t,int,void const*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_10__*,int,int ) ;
 int FUNC_12 (int *,int,char*,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (TYPE_10__*,int,int,int) ;

__attribute__((used)) static ngx_int_t
FUNC_15(ngx_conf_t *VAR_8, ngx_http_upstream_srv_conf_t *VAR_9)
{
    u_char VAR_10[256];
    ngx_int_t VAR_11, VAR_12;
    ngx_uint_t VAR_13, VAR_14, VAR_15;
    ngx_uint_t VAR_16, VAR_17, *VAR_18, VAR_19;
    ngx_http_upstream_rr_peer_t *VAR_20;
    ngx_http_upstream_rr_peers_t *VAR_21;
    ngx_http_upstream_chash_server_t *VAR_22;
    ngx_http_upstream_chash_srv_conf_t *VAR_23;

    if (FUNC_4(VAR_8, VAR_9) == VAR_1) {
        return VAR_1;
    }

    VAR_23 = FUNC_3(VAR_9,
                                     VAR_6);
    if (VAR_23 == ((void*)0)) {
        return VAR_1;
    }

    VAR_9->peer.init = VAR_7;

    VAR_21 = (ngx_http_upstream_rr_peers_t *) VAR_9->peer.data;
    if (VAR_21 == ((void*)0)) {
        return VAR_1;
    }

    VAR_17 = VAR_21->number;
    VAR_23->number = 0;
    VAR_23->real_node = FUNC_8(VAR_8->pool, VAR_17 *
                                   sizeof(ngx_http_upstream_chash_server_t**));
    if (VAR_23->real_node == ((void*)0)) {
        return VAR_1;
    }
    for (VAR_16 = 0; VAR_16 < VAR_17; VAR_16++) {
        VAR_23->number += VAR_21->peer[VAR_16].weight * VAR_0;
        VAR_23->real_node[VAR_16] = FUNC_8(VAR_8->pool,
                                    (VAR_21->peer[VAR_16].weight
                                     * VAR_0 + 1) *
                                     sizeof(ngx_http_upstream_chash_server_t*));
        if (VAR_23->real_node[VAR_16] == ((void*)0)) {
            return VAR_1;
        }
    }

    VAR_23->servers = FUNC_8(VAR_8->pool,
                                 (VAR_23->number + 1) *
                                  sizeof(ngx_http_upstream_chash_server_t));

    if (VAR_23->servers == ((void*)0)) {
        return VAR_1;
    }

    VAR_23->d_servers = FUNC_8(VAR_8->pool,
                                (VAR_23->number + 1) *
                                sizeof(ngx_http_upstream_chash_down_server_t));

    if (VAR_23->d_servers == ((void*)0)) {
        return VAR_1;
    }

    VAR_23->number = 0;
    for (VAR_16 = 0; VAR_16 < VAR_17; VAR_16++) {

        VAR_20 = &VAR_21->peer[VAR_16];
        VAR_13 = (ngx_uint_t) FUNC_0(VAR_20->id.data, VAR_20->id.len);

        if (VAR_13 == (ngx_uint_t) VAR_1 || VAR_13 > 65535) {

            FUNC_5(VAR_2, VAR_8->log, 0, "server id %d", VAR_13);

            FUNC_12(VAR_10, 256, "%V%Z", &VAR_20->name);
            VAR_15 = FUNC_13(VAR_10);
            VAR_13 = FUNC_7(VAR_10, VAR_15);
        }

        VAR_12 = VAR_20->weight * VAR_0;

        if (VAR_12 >= 1 << 14) {
            FUNC_6(VAR_3, VAR_8->log, 0,
                          "weigth[%d] is too large, is must be less than %d",
                          VAR_12 / VAR_0,
                          (1 << 14) / VAR_0);
            VAR_12 = 1 << 14;
        }

        for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {
            VAR_22 = &VAR_23->servers[++VAR_23->number];
            VAR_22->peer = VAR_20;
            VAR_22->rnindex = VAR_16;

            VAR_14 = VAR_13 * 256 * 16 + VAR_11;
            VAR_22->hash = FUNC_7((u_char *) (&VAR_14), 4);
        }
    }

    FUNC_9(VAR_23->servers + 1, VAR_23->number,
              sizeof(ngx_http_upstream_chash_server_t),
              (const void *)VAR_5);

    VAR_18 = FUNC_1(VAR_17 * sizeof(ngx_uint_t), VAR_8->log);
    if (VAR_18 == ((void*)0)) {
        return VAR_1;
    }

    for (VAR_16 = 1; VAR_16 <= VAR_23->number; VAR_16++) {
        VAR_23->servers[VAR_16].index = VAR_16;
        VAR_23->d_servers[VAR_16].id = VAR_16;
        VAR_19 = VAR_23->servers[VAR_16].rnindex;
        VAR_23->real_node[VAR_19][VAR_18[VAR_19]] = &VAR_23->servers[VAR_16];
        VAR_18[VAR_19]++;
    }

    FUNC_2(VAR_18);

    VAR_23->tree = FUNC_8(VAR_8->pool, sizeof(ngx_segment_tree_t));
    if (VAR_23->tree == ((void*)0)) {
        return VAR_1;
    }

    FUNC_11(VAR_23->tree, VAR_23->number, VAR_8->pool);
    VAR_23->tree->build(VAR_23->tree, 1, 1, VAR_23->number);

    FUNC_10(&VAR_23->down_servers);

    return VAR_4;
}
