
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_9__ ;
typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_22__ ;
typedef struct TYPE_25__ TYPE_21__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef int ngx_uint_t ;
typedef int ngx_str_t ;
typedef int ngx_slab_pool_t ;
struct TYPE_27__ {int log; scalar_t__ addr; } ;
struct TYPE_28__ {TYPE_2__ shm; TYPE_4__* data; } ;
typedef TYPE_3__ ngx_shm_zone_t ;
struct TYPE_29__ {int number; scalar_t__ checksum; int generation; int max_number; TYPE_9__* peers; } ;
typedef TYPE_4__ ngx_pool_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_30__ {int default_down; } ;
typedef TYPE_5__ ngx_http_upstream_check_srv_conf_t ;
struct TYPE_24__ {int nelts; TYPE_8__* elts; } ;
struct TYPE_31__ {scalar_t__ checksum; TYPE_4__* peers_shm; int * shpool; TYPE_1__ peers; } ;
typedef TYPE_6__ ngx_http_upstream_check_peers_t ;
typedef TYPE_4__ ngx_http_upstream_check_peers_shm_t ;
struct TYPE_32__ {TYPE_21__* peer_addr; TYPE_5__* conf; } ;
typedef TYPE_8__ ngx_http_upstream_check_peer_t ;
struct TYPE_33__ {size_t socklen; int * sockaddr; } ;
typedef TYPE_9__ ngx_http_upstream_check_peer_shm_t ;
typedef int ngx_cycle_t ;
struct TYPE_26__ {TYPE_4__* pool; } ;
struct TYPE_25__ {size_t socklen; int name; int sockaddr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_6__* VAR_5 ;
 TYPE_22__* VAR_6 ;
 TYPE_9__* FUNC_0 (TYPE_4__*,TYPE_21__*) ;
 int FUNC_1 (int *,TYPE_4__*,int) ;
 scalar_t__ FUNC_2 (TYPE_9__*,TYPE_9__*,int ,TYPE_4__*,int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ,int ,int ,char*,int *) ;
 int FUNC_4 (int ,int ,int ,char*,TYPE_3__*,TYPE_4__*) ;
 int FUNC_5 (int ,int ,int ,char*) ;
 int FUNC_6 (int *,int ,size_t) ;
 int FUNC_7 (TYPE_4__*,size_t) ;
 TYPE_3__* FUNC_8 (int *,int *,int *) ;
 void* FUNC_9 (int *,size_t) ;
 int FUNC_10 (int *,char*) ;

__attribute__((used)) static ngx_int_t
FUNC_11(ngx_shm_zone_t *VAR_9, void *VAR_10)
{
    size_t VAR_11;
    ngx_str_t VAR_12;
    ngx_int_t VAR_13;
    ngx_uint_t VAR_14, VAR_15, VAR_16;
    ngx_pool_t *VAR_17;
    ngx_shm_zone_t *VAR_18;
    ngx_slab_pool_t *VAR_19;
    ngx_http_upstream_check_peer_t *VAR_20;
    ngx_http_upstream_check_peers_t *VAR_21;
    ngx_http_upstream_check_srv_conf_t *VAR_22;
    ngx_http_upstream_check_peer_shm_t *VAR_23, *VAR_24;
    ngx_http_upstream_check_peers_shm_t *VAR_25, *VAR_26;

    VAR_26 = ((void*)0);
    VAR_25 = ((void*)0);
    FUNC_10(&VAR_12, "");

    VAR_15 = 0;
    VAR_21 = VAR_5;
    if (VAR_21 == ((void*)0)) {
        return VAR_4;
    }

    VAR_16 = VAR_21->peers.nelts;

    VAR_17 = VAR_9->data;
    if (VAR_17 == ((void*)0)) {
        VAR_17 = VAR_6->pool;
    }

    VAR_19 = (ngx_slab_pool_t *) VAR_9->shm.addr;

    if (VAR_10) {
        VAR_26 = VAR_10;

        if ((VAR_26->number == VAR_16)
            && (VAR_26->checksum == VAR_21->checksum)) {

            VAR_25 = VAR_10;
            VAR_15 = 1;
        }
    }

    if (!VAR_15) {

        if (VAR_8 > 1) {

            FUNC_1(&VAR_12,
                    VAR_17, VAR_8 - 1);


            VAR_18 = FUNC_8((ngx_cycle_t *) VAR_6,
                                               &VAR_12,
                                               &VAR_7);

            if (VAR_18) {
                VAR_26 = VAR_18->data;

                FUNC_4(VAR_2, VAR_9->shm.log, 0,
                               "http upstream check, find oshm_zone:%p, "
                               "opeers_shm: %p",
                               VAR_18, VAR_26);
            }
        }

        VAR_11 = sizeof(*VAR_25) +
               (VAR_16 - 1 + VAR_0) * sizeof(ngx_http_upstream_check_peer_shm_t);

        VAR_25 = FUNC_9(VAR_19, VAR_11);

        if (VAR_25 == ((void*)0)) {
            goto failure;
        }

        FUNC_7(VAR_25, VAR_11);
    }

    VAR_25->generation = VAR_8;
    VAR_25->checksum = VAR_21->checksum;
    VAR_25->number = VAR_16;
    VAR_25->max_number = VAR_16 + VAR_0;

    VAR_20 = VAR_21->peers.elts;

    for (VAR_14 = 0; VAR_14 < VAR_16; VAR_14++) {

        VAR_23 = &VAR_25->peers[VAR_14];

        if (VAR_15) {
            continue;
        }

        VAR_23->socklen = VAR_20[VAR_14].peer_addr->socklen;
        VAR_23->sockaddr = FUNC_9(VAR_19, VAR_23->socklen);
        if (VAR_23->sockaddr == ((void*)0)) {
            goto failure;
        }

        FUNC_6(VAR_23->sockaddr, VAR_20[VAR_14].peer_addr->sockaddr,
                   VAR_23->socklen);

        if (VAR_26) {

            VAR_24 = FUNC_0(VAR_26,
                                                             VAR_20[VAR_14].peer_addr);
            if (VAR_24) {
                FUNC_3(VAR_2, VAR_9->shm.log, 0,
                               "http upstream check, inherit opeer: %V ",
                               &VAR_20[VAR_14].peer_addr->name);

                VAR_13 = FUNC_2(VAR_23, VAR_24,
                         0, VAR_17, &VAR_20[VAR_14].peer_addr->name);
                if (VAR_13 != VAR_4) {
                    return VAR_1;
                }

                continue;
            }
        }

        VAR_22 = VAR_20[VAR_14].conf;
        VAR_13 = FUNC_2(VAR_23, ((void*)0),
                                                   VAR_22->default_down, VAR_17,
                                                   &VAR_20[VAR_14].peer_addr->name);
        if (VAR_13 != VAR_4) {
            return VAR_1;
        }
    }

    VAR_21->shpool = VAR_19;
    VAR_21->peers_shm = VAR_25;
    VAR_9->data = VAR_25;

    return VAR_4;

failure:
    FUNC_5(VAR_3, VAR_9->shm.log, 0,
                  "http upstream check_shm_size is too small, "
                  "you should specify a larger size.");
    return VAR_1;
}
