
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_18__ {scalar_t__ code; } ;
struct TYPE_19__ {TYPE_4__ action; } ;
struct TYPE_20__ {scalar_t__ curr_ka_queue; TYPE_5__ r_ctx; TYPE_7__* rc_info_node; TYPE_2__* loc_conf; TYPE_9__* tfs_peer; } ;
typedef TYPE_6__ ngx_http_tfs_t ;
struct TYPE_21__ {int app_id; } ;
typedef TYPE_7__ ngx_http_tfs_rcs_info_t ;
struct TYPE_22__ {TYPE_3__* sh; } ;
typedef TYPE_8__ ngx_http_tfs_rc_ctx_t ;
struct TYPE_23__ {int body_buffer; } ;
typedef TYPE_9__ ngx_http_tfs_peer_connection_t ;
typedef int ngx_buf_t ;
struct TYPE_17__ {int kp_queue; } ;
struct TYPE_16__ {TYPE_1__* upstream; } ;
struct TYPE_15__ {TYPE_8__* rc_ctx; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_6__*,TYPE_7__*) ;
 scalar_t__ FUNC_2 (TYPE_6__*) ;
 scalar_t__ FUNC_3 (TYPE_6__*,int ) ;
 scalar_t__ FUNC_4 (int *) ;

ngx_int_t
FUNC_5(ngx_http_tfs_t *VAR_5)
{
    ngx_buf_t *VAR_6;
    ngx_int_t VAR_7;
    ngx_http_tfs_rc_ctx_t *VAR_8;
    ngx_http_tfs_rcs_info_t *VAR_9;
    ngx_http_tfs_peer_connection_t *VAR_10;

    VAR_10 = VAR_5->tfs_peer;
    VAR_6 = &VAR_10->body_buffer;
    VAR_8 = VAR_5->loc_conf->upstream->rc_ctx;

    VAR_7 = FUNC_2(VAR_5);

    FUNC_0(VAR_6);

    if (VAR_5->r_ctx.action.code == VAR_3) {
        if (VAR_5->curr_ka_queue == FUNC_4(&VAR_8->sh->kp_queue)) {
            VAR_7 = VAR_0;
        }

        return VAR_7;
    }

    if (VAR_7 == VAR_1 || VAR_7 <= VAR_4) {
        return VAR_7;
    }

    VAR_9 = VAR_5->rc_info_node;

    if (VAR_5->r_ctx.action.code == VAR_2) {
        VAR_7 = FUNC_3(VAR_5, VAR_9->app_id);
        if (VAR_7 == VAR_1) {
            return VAR_1;
        }

        return VAR_0;
    }


    VAR_7 = FUNC_1(VAR_5, VAR_9);

    return VAR_7;
}
