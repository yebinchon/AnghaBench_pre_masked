
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_15__ ;
typedef struct TYPE_16__ TYPE_12__ ;


struct TYPE_20__ {int * data; int handler; } ;
typedef TYPE_3__ ngx_pool_cleanup_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_21__ {TYPE_6__** srv_conf; } ;
typedef TYPE_4__ ngx_http_upstream_srv_conf_t ;
struct TYPE_22__ {int pool; TYPE_2__* upstream; } ;
typedef TYPE_5__ ngx_http_request_t ;
struct TYPE_23__ {scalar_t__ (* init ) (TYPE_5__*,TYPE_4__*) ;int ref; } ;
typedef TYPE_6__ ngx_http_dyups_upstream_srv_conf_t ;
struct TYPE_24__ {int free; int get; struct TYPE_24__* data; TYPE_6__* scf; } ;
typedef TYPE_7__ ngx_http_dyups_ctx_t ;
struct TYPE_18__ {int save_session; int set_session; int free; int get; TYPE_7__* data; } ;
struct TYPE_19__ {TYPE_1__ peer; } ;
struct TYPE_17__ {int log; } ;
struct TYPE_16__ {size_t ctx_index; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_15__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_12__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int ,int ,char*,scalar_t__) ;
 TYPE_7__* FUNC_1 (int ,int) ;
 TYPE_3__* FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_5__*,TYPE_4__*) ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_http_request_t *VAR_10,
    ngx_http_upstream_srv_conf_t *VAR_11)
{
    ngx_int_t VAR_12;
    ngx_pool_cleanup_t *VAR_13;
    ngx_http_dyups_ctx_t *VAR_14;
    ngx_http_dyups_upstream_srv_conf_t *VAR_15;

    VAR_15 = VAR_11->srv_conf[VAR_7.ctx_index];

    VAR_12 = VAR_15->init(VAR_10, VAR_11);

    FUNC_0(VAR_1, VAR_3->log, 0,
                   "[dyups] dynamic upstream init peer: %i",
                   VAR_12);

    if (VAR_12 != VAR_2) {
        return VAR_12;
    }

    VAR_14 = FUNC_1(VAR_10->pool, sizeof(ngx_http_dyups_ctx_t));
    if (VAR_14 == ((void*)0)) {
        return VAR_0;
    }

    VAR_14->scf = VAR_15;
    VAR_14->data = VAR_10->upstream->peer.data;
    VAR_14->get = VAR_10->upstream->peer.get;
    VAR_14->free = VAR_10->upstream->peer.free;

    VAR_10->upstream->peer.data = VAR_14;
    VAR_10->upstream->peer.get = VAR_6;
    VAR_10->upstream->peer.free = VAR_5;






    VAR_13 = FUNC_2(VAR_10->pool, 0);
    if (VAR_13 == ((void*)0)) {
        return VAR_0;
    }

    VAR_15->ref++;

    VAR_13->handler = VAR_4;
    VAR_13->data = &VAR_15->ref;

    return VAR_2;
}
