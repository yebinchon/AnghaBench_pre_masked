
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_15__ {int * vpeers; struct TYPE_15__* next; int * last_peer; void* last_number; void* init_number; } ;
typedef TYPE_2__ ngx_http_upstream_vnswrr_srv_conf_t ;
struct TYPE_14__ {scalar_t__ data; int init; } ;
struct TYPE_16__ {TYPE_1__ peer; } ;
typedef TYPE_3__ ngx_http_upstream_srv_conf_t ;
typedef int ngx_http_upstream_rr_vpeers_t ;
struct TYPE_17__ {int total_weight; int number; scalar_t__ weighted; struct TYPE_17__* next; } ;
typedef TYPE_4__ ngx_http_upstream_rr_peers_t ;
struct TYPE_18__ {int pool; int log; } ;
typedef TYPE_5__ ngx_conf_t ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_2__* FUNC_0 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_5__*,TYPE_3__*) ;
 int FUNC_2 (TYPE_4__*,TYPE_2__*,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int ,int ,char*) ;
 void* FUNC_4 (int ,int) ;

__attribute__((used)) static ngx_int_t
FUNC_5(ngx_conf_t *VAR_6,
    ngx_http_upstream_srv_conf_t *VAR_7)
{
    ngx_http_upstream_rr_peers_t *VAR_8, *VAR_9;
    ngx_http_upstream_vnswrr_srv_conf_t *VAR_10, *VAR_11;


    FUNC_3(VAR_2, VAR_6->log, 0, "init vnswrr");

    if (FUNC_1(VAR_6, VAR_7) != VAR_3) {
        return VAR_1;
    }

    VAR_10 = FUNC_0(VAR_7,
                                VAR_5);
    if (VAR_10 == ((void*)0)) {
        return VAR_1;
    }

    VAR_10->init_number = VAR_0;
    VAR_10->last_number = VAR_0;
    VAR_10->last_peer = ((void*)0);
    VAR_10->next = ((void*)0);

    VAR_7->peer.init = VAR_4;

    VAR_8 = (ngx_http_upstream_rr_peers_t *) VAR_7->peer.data;
    if (VAR_8->weighted) {
        VAR_10->vpeers = FUNC_4(VAR_6->pool,
                                    sizeof(ngx_http_upstream_rr_vpeers_t)
                                    * VAR_8->total_weight);
        if (VAR_10->vpeers == ((void*)0)) {
            return VAR_1;
        }

        FUNC_2(VAR_8, VAR_10, 0, VAR_8->number);

    }


    VAR_9 = VAR_8->next;
    if (VAR_9) {
        VAR_11 = FUNC_4(VAR_6->pool,
                              sizeof(ngx_http_upstream_vnswrr_srv_conf_t));
        if (VAR_11 == ((void*)0)) {
            return VAR_1;
        }

        VAR_11->init_number = VAR_0;
        VAR_11->last_number = VAR_0;
        VAR_11->last_peer = ((void*)0);

        VAR_10->next = VAR_11;

        if (!VAR_9->weighted) {
            return VAR_3;
        }

        VAR_11->vpeers = FUNC_4(VAR_6->pool,
                                      sizeof(ngx_http_upstream_rr_vpeers_t)
                                      * VAR_9->total_weight);
        if (VAR_11->vpeers == ((void*)0)) {
            return VAR_1;
        }

        FUNC_2(VAR_9, VAR_11, 0, VAR_9->number);
    }

    return VAR_3;
}
