
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
typedef int ngx_msec_t ;
typedef int ngx_int_t ;
struct TYPE_11__ {int check_interval; int check_type_conf; } ;
typedef TYPE_2__ ngx_http_upstream_check_srv_conf_t ;
struct TYPE_10__ {size_t nelts; TYPE_5__* elts; } ;
struct TYPE_12__ {TYPE_1__ peers; int check_shm_name; TYPE_4__* peers_shm; } ;
typedef TYPE_3__ ngx_http_upstream_check_peers_t ;
struct TYPE_13__ {int * peers; } ;
typedef TYPE_4__ ngx_http_upstream_check_peers_shm_t ;
struct TYPE_14__ {int * shm; TYPE_2__* conf; } ;
typedef TYPE_5__ ngx_http_upstream_check_peer_t ;
typedef int ngx_http_upstream_check_peer_shm_t ;
struct TYPE_15__ {int log; } ;
typedef TYPE_6__ ngx_cycle_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_0 (TYPE_5__*,int ,int,int ) ;
 int FUNC_1 (int ,int ,int ,char*,int *,size_t) ;
 int VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_cycle_t *VAR_4)
{
    ngx_uint_t VAR_5;
    ngx_msec_t VAR_6, VAR_7;
    ngx_http_upstream_check_peer_t *VAR_8;
    ngx_http_upstream_check_peers_t *VAR_9;
    ngx_http_upstream_check_srv_conf_t *VAR_10;
    ngx_http_upstream_check_peer_shm_t *VAR_11;
    ngx_http_upstream_check_peers_shm_t *VAR_12;

    VAR_9 = VAR_2;
    if (VAR_9 == ((void*)0)) {
        return VAR_1;
    }

    VAR_12 = VAR_9->peers_shm;
    if (VAR_12 == ((void*)0)) {
        return VAR_1;
    }

    FUNC_1(VAR_0, VAR_4->log, 0,
                   "http check upstream init_process, shm_name: %V, "
                   "peer number: %ud",
                   &VAR_9->check_shm_name,
                   VAR_9->peers.nelts);

    FUNC_3(VAR_3);

    VAR_8 = VAR_9->peers.elts;
    VAR_11 = VAR_12->peers;

    for (VAR_5 = 0; VAR_5 < VAR_9->peers.nelts; VAR_5++) {

        VAR_10 = VAR_8[VAR_5].conf;





        VAR_7 = VAR_10->check_interval > 1000 ? VAR_10->check_interval : 1000;
        VAR_6 = FUNC_2() % VAR_7;

        VAR_8[VAR_5].shm = &VAR_11[VAR_5];

        FUNC_0(&VAR_8[VAR_5], VAR_10->check_type_conf, VAR_6, VAR_4->log);

    }

    return VAR_1;
}
