
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_43__ TYPE_9__ ;
typedef struct TYPE_42__ TYPE_7__ ;
typedef struct TYPE_41__ TYPE_6__ ;
typedef struct TYPE_40__ TYPE_5__ ;
typedef struct TYPE_39__ TYPE_4__ ;
typedef struct TYPE_38__ TYPE_3__ ;
typedef struct TYPE_37__ TYPE_2__ ;
typedef struct TYPE_36__ TYPE_23__ ;
typedef struct TYPE_35__ TYPE_21__ ;
typedef struct TYPE_34__ TYPE_1__ ;
typedef struct TYPE_33__ TYPE_19__ ;
typedef struct TYPE_32__ TYPE_18__ ;
typedef struct TYPE_31__ TYPE_17__ ;
typedef struct TYPE_30__ TYPE_11__ ;
typedef struct TYPE_29__ TYPE_10__ ;


typedef int u_char ;
typedef size_t ngx_uint_t ;
struct TYPE_38__ {int len; } ;
typedef TYPE_3__ ngx_str_t ;
struct TYPE_39__ {scalar_t__ type; scalar_t__ index; size_t ctx_index; TYPE_7__* ctx; } ;
typedef TYPE_4__ ngx_module_t ;
typedef int ngx_int_t ;
struct TYPE_37__ {int len; int * data; } ;
struct TYPE_40__ {int flags; int ref; struct TYPE_40__** srv_conf; scalar_t__ default_port; scalar_t__ port; scalar_t__ line; int * file_name; TYPE_2__ host; } ;
typedef TYPE_5__ ngx_http_upstream_srv_conf_t ;
struct TYPE_34__ {TYPE_5__** elts; } ;
struct TYPE_41__ {TYPE_1__ upstreams; } ;
typedef TYPE_6__ ngx_http_upstream_main_conf_t ;
struct TYPE_42__ {TYPE_5__* (* create_srv_conf ) (TYPE_11__*) ;} ;
typedef TYPE_7__ ngx_http_module_t ;
typedef TYPE_5__ ngx_http_dyups_upstream_srv_conf_t ;
struct TYPE_43__ {int dynamic; scalar_t__ deleted; TYPE_10__* ctx; int * ref; int * pool; TYPE_5__* upstream; } ;
typedef TYPE_9__ ngx_http_dyups_srv_conf_t ;
struct TYPE_29__ {TYPE_5__** srv_conf; int main_conf; } ;
typedef TYPE_10__ ngx_http_conf_ctx_t ;
typedef int ngx_cycle_t ;
struct TYPE_30__ {int * pool; int * cycle; scalar_t__ ctx; int cmd_type; scalar_t__ module_type; } ;
typedef TYPE_11__ ngx_conf_t ;
struct TYPE_36__ {scalar_t__ index; } ;
struct TYPE_35__ {TYPE_4__** modules; scalar_t__* conf_ctx; int log; } ;
struct TYPE_33__ {size_t ctx_index; } ;
struct TYPE_32__ {size_t index; } ;
struct TYPE_31__ {size_t ctx_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int * FUNC_0 (int,int ) ;
 TYPE_21__* VAR_11 ;
 int FUNC_1 (TYPE_6__*,TYPE_5__*) ;
 TYPE_23__ VAR_12 ;
 TYPE_6__* FUNC_2 (TYPE_21__*,TYPE_17__) ;
 TYPE_19__ VAR_13 ;
 int VAR_14 ;
 TYPE_18__ VAR_15 ;
 TYPE_17__ VAR_16 ;
 int FUNC_3 (TYPE_11__*,int) ;
 TYPE_4__** VAR_17 ;
 void* FUNC_4 (int *,int) ;
 int * FUNC_5 (int *,TYPE_3__*) ;
 TYPE_5__* FUNC_6 (TYPE_11__*) ;

__attribute__((used)) static ngx_int_t
FUNC_7(ngx_http_dyups_srv_conf_t *VAR_18, ngx_str_t *VAR_19,
    ngx_uint_t VAR_20)
{
    ngx_uint_t VAR_21, VAR_22;
    ngx_conf_t VAR_23;
    ngx_module_t **VAR_24;
    ngx_http_module_t *VAR_25;
    ngx_http_conf_ctx_t *VAR_26;
    ngx_http_upstream_srv_conf_t *VAR_27, **VAR_28;
    ngx_http_upstream_main_conf_t *VAR_29;
    ngx_http_dyups_upstream_srv_conf_t *VAR_30;

    VAR_29 = FUNC_2(VAR_11,
                                               VAR_16);
    VAR_28 = VAR_29->upstreams.elts;

    VAR_18->pool = FUNC_0(512, VAR_11->log);
    if (VAR_18->pool == ((void*)0)) {
        return VAR_0;
    }

    VAR_27 = FUNC_4(VAR_18->pool, sizeof(ngx_http_upstream_srv_conf_t));
    if (VAR_27 == ((void*)0)) {
        return VAR_0;
    }

    VAR_27->flags = VAR_4
                 |VAR_9



                 |VAR_8
                 |VAR_6
                 |VAR_5
                 |VAR_3;

    VAR_27->host.data = FUNC_5(VAR_18->pool, VAR_19);
    if (VAR_27->host.data == ((void*)0)) {
        return VAR_0;
    }

    VAR_27->host.len = VAR_19->len;
    VAR_27->file_name = (u_char *) "dynamic_upstream";
    VAR_27->line = 0;
    VAR_27->port = 0;

    VAR_27->default_port = 0;

    VAR_28[VAR_20] = VAR_27;

    VAR_18->dynamic = 1;
    VAR_18->upstream = VAR_27;

    FUNC_3(&VAR_23, sizeof(ngx_conf_t));
    VAR_23.module_type = VAR_2;
    VAR_23.cmd_type = VAR_1;
    VAR_23.pool = VAR_18->pool;
    VAR_23.ctx = VAR_11->conf_ctx[VAR_15.index];
    VAR_23.cycle = (ngx_cycle_t *) VAR_11;

    VAR_26 = FUNC_4(VAR_18->pool, sizeof(ngx_http_conf_ctx_t));
    if (VAR_26 == ((void*)0)) {
        return VAR_0;
    }

    VAR_26->main_conf = ((ngx_http_conf_ctx_t *)
                      VAR_11->conf_ctx[VAR_15.index])->main_conf;

    VAR_26->srv_conf = FUNC_4(VAR_23.pool, sizeof(void *) * VAR_14);
    if (VAR_26->srv_conf == ((void*)0)) {
        return VAR_0;
    }

    VAR_26->srv_conf[VAR_16.ctx_index] = VAR_27;
    VAR_27->srv_conf = VAR_26->srv_conf;




    VAR_24 = VAR_17;


    for (VAR_22 = 0; VAR_24[VAR_22]; VAR_22++) {
        if (VAR_24[VAR_22]->type != VAR_2) {
            continue;
        }

        if (VAR_24[VAR_22]->index == VAR_12.index) {
            continue;
        }

        VAR_25 = VAR_24[VAR_22]->ctx;
        VAR_21 = VAR_24[VAR_22]->ctx_index;

        if (VAR_25->create_srv_conf) {
            VAR_26->srv_conf[VAR_21] = VAR_25->create_srv_conf(&VAR_23);
            if (VAR_26->srv_conf[VAR_21] == ((void*)0)) {
                return VAR_0;
            }
        }
    }

    VAR_30 = VAR_27->srv_conf[VAR_13.ctx_index];
    VAR_18->ref = &VAR_30->ref;
    VAR_18->ctx = VAR_26;
    VAR_18->deleted = 0;

    FUNC_1(VAR_29, VAR_27);

    return VAR_10;
}
