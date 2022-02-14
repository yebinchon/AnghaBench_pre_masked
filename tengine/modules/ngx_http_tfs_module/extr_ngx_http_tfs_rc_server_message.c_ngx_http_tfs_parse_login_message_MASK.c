
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_10__ ;


typedef int uint16_t ;
typedef int ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_20__ {int appkey; } ;
struct TYPE_22__ {TYPE_6__* rc_info_node; int log; TYPE_3__ r_ctx; TYPE_2__* loc_conf; TYPE_8__* tfs_peer; scalar_t__ header; } ;
typedef TYPE_5__ ngx_http_tfs_t ;
struct TYPE_23__ {int session_id; int app_id; } ;
typedef TYPE_6__ ngx_http_tfs_rcs_info_t ;
struct TYPE_24__ {TYPE_4__* shpool; } ;
typedef TYPE_7__ ngx_http_tfs_rc_ctx_t ;
struct TYPE_17__ {int pos; } ;
struct TYPE_25__ {TYPE_10__ body_buffer; } ;
typedef TYPE_8__ ngx_http_tfs_peer_connection_t ;
struct TYPE_26__ {int type; } ;
typedef TYPE_9__ ngx_http_tfs_header_t ;
struct TYPE_21__ {int mutex; } ;
struct TYPE_19__ {TYPE_1__* upstream; } ;
struct TYPE_18__ {TYPE_7__* rc_ctx; } ;


 scalar_t__ VAR_0 ;

 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_5__*,TYPE_7__*,int ,int ) ;
 int FUNC_1 (TYPE_6__*,int ) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 TYPE_6__* FUNC_3 (TYPE_7__*,int ) ;
 scalar_t__ FUNC_4 (TYPE_10__*,int *,int ) ;
 int FUNC_5 (int ,int ,int ,char*,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char*) ;

ngx_int_t
FUNC_9(ngx_http_tfs_t *VAR_3)
{
    uint16_t VAR_4;
    ngx_str_t VAR_5;
    ngx_int_t VAR_6;
    ngx_http_tfs_header_t *VAR_7;
    ngx_http_tfs_rc_ctx_t *VAR_8;
    ngx_http_tfs_rcs_info_t *VAR_9;
    ngx_http_tfs_peer_connection_t *VAR_10;

    VAR_7 = (ngx_http_tfs_header_t *) VAR_3->header;
    VAR_10 = VAR_3->tfs_peer;
    VAR_4 = VAR_7->type;
    VAR_8 = VAR_3->loc_conf->upstream->rc_ctx;

    switch (VAR_4) {
    case 128:
        FUNC_8(&VAR_5, "login rc");
        return FUNC_4(&VAR_10->body_buffer, &VAR_5, VAR_3->log);
    }

    FUNC_6(&VAR_8->shpool->mutex);
    VAR_9 = FUNC_3(VAR_8, VAR_3->r_ctx.appkey);

    VAR_6 = VAR_2;

    if (VAR_9 == ((void*)0)) {
        VAR_6 = FUNC_0(VAR_3, VAR_8, VAR_10->body_buffer.pos,
                                           VAR_3->r_ctx.appkey);

    } else {
        VAR_3->rc_info_node = VAR_9;
    }
    FUNC_7(&VAR_8->shpool->mutex);





    if (VAR_6 == VAR_2) {
        VAR_6 = FUNC_2(&VAR_3->rc_info_node->session_id,
                                           &VAR_3->rc_info_node->app_id);
        if (VAR_6 == VAR_0) {
            FUNC_5(VAR_1, VAR_3->log, 0,
                          "invalid session id: %V",
                          &VAR_3->rc_info_node->session_id);
        }
    }
    return VAR_6;
}
