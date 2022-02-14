
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_15__ ;
typedef struct TYPE_16__ TYPE_12__ ;


typedef int ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_18__ {scalar_t__ (* init_upstream ) (TYPE_4__*,TYPE_2__*) ;int init; TYPE_3__* data; } ;
struct TYPE_19__ {TYPE_1__ peer; TYPE_6__** srv_conf; int * servers; } ;
typedef TYPE_2__ ngx_http_upstream_srv_conf_t ;
typedef int ngx_http_upstream_server_t ;
struct TYPE_20__ {void* number; void* init_number; struct TYPE_20__* next; } ;
typedef TYPE_3__ ngx_http_upstream_rr_peers_t ;
typedef scalar_t__ (* ngx_http_upstream_init_pt ) (TYPE_4__*,TYPE_2__*) ;
struct TYPE_22__ {int init; } ;
typedef TYPE_6__ ngx_http_dyups_upstream_srv_conf_t ;
struct TYPE_23__ {int ctx; int pool; TYPE_2__* upstream; } ;
typedef TYPE_7__ ngx_http_dyups_srv_conf_t ;
typedef int ngx_cycle_t ;
struct TYPE_21__ {char* name; int ctx; int log; int cmd_type; void* module_type; int pool; int * cycle; int * args; } ;
typedef TYPE_4__ ngx_conf_t ;
typedef int ngx_buf_t ;
struct TYPE_17__ {int log; } ;
struct TYPE_16__ {size_t ctx_index; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 void* FUNC_0 (int ,int,int) ;
 TYPE_15__* VAR_6 ;
 scalar_t__ FUNC_1 (TYPE_4__*,int *) ;
 int VAR_7 ;
 TYPE_12__ VAR_8 ;
 scalar_t__ FUNC_2 (TYPE_4__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_4__*,int) ;
 void* FUNC_4 () ;

__attribute__((used)) static ngx_int_t
FUNC_5(ngx_http_dyups_srv_conf_t *VAR_9, ngx_buf_t *VAR_10)
{
    ngx_conf_t VAR_11;
    ngx_http_upstream_init_pt VAR_12;
    ngx_http_upstream_srv_conf_t *VAR_13;
    ngx_http_dyups_upstream_srv_conf_t *VAR_14;

    VAR_13 = VAR_9->upstream;

    if (VAR_13->servers == ((void*)0)) {
        VAR_13->servers = FUNC_0(VAR_9->pool, 4,
                                         sizeof(ngx_http_upstream_server_t));
        if (VAR_13->servers == ((void*)0)) {
            return VAR_1;
        }
    }

    FUNC_3(&VAR_11, sizeof(ngx_conf_t));
    VAR_11.name = "dyups_init_module_conf";
    VAR_11.pool = VAR_9->pool;
    VAR_11.cycle = (ngx_cycle_t *) VAR_6;
    VAR_11.module_type = VAR_3;
    VAR_11.cmd_type = VAR_4;
    VAR_11.log = VAR_6->log;
    VAR_11.ctx = VAR_9->ctx;
    VAR_11.args = FUNC_0(VAR_9->pool, 10, sizeof(ngx_str_t));
    if (VAR_11.args == ((void*)0)) {
        return VAR_1;
    }

    if (FUNC_1(&VAR_11, VAR_10) != VAR_0) {
        return VAR_1;
    }

    FUNC_3(&VAR_11, sizeof(ngx_conf_t));
    VAR_11.name = "dyups_init_upstream";
    VAR_11.cycle = (ngx_cycle_t *) VAR_6;
    VAR_11.pool = VAR_9->pool;
    VAR_11.module_type = VAR_3;
    VAR_11.cmd_type = VAR_2;
    VAR_11.log = VAR_6->log;
    VAR_11.ctx = VAR_9->ctx;


    VAR_12 = VAR_13->peer.init_upstream ? VAR_13->peer.init_upstream:
        FUNC_2;

    if (VAR_12(&VAR_11, VAR_13) != VAR_5) {
        return VAR_1;
    }
    VAR_14 = VAR_13->srv_conf[VAR_8.ctx_index];
    VAR_14->init = VAR_13->peer.init;

    VAR_13->peer.init = VAR_7;

    return VAR_5;
}
