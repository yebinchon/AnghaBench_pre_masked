
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_9__ ;
typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_23__ {scalar_t__ code; } ;
struct TYPE_24__ {TYPE_1__ action; } ;
struct TYPE_28__ {scalar_t__ tfs_status; scalar_t__ sp_curr; int header_sent; scalar_t__ header_only; struct TYPE_28__* parent; int log; int sp_ready; TYPE_2__ r_ctx; } ;
typedef TYPE_6__ ngx_http_tfs_t ;
struct TYPE_29__ {scalar_t__ limit_rate; int (* write_event_handler ) (TYPE_7__*) ;TYPE_5__* request_body; int pool; TYPE_9__* connection; scalar_t__ post_action; } ;
typedef TYPE_7__ ngx_http_request_t ;
struct TYPE_30__ {scalar_t__ tcp_nodelay; } ;
typedef TYPE_8__ ngx_http_core_loc_conf_t ;
struct TYPE_31__ {scalar_t__ tcp_nodelay; int fd; int log; } ;
typedef TYPE_9__ ngx_connection_t ;
struct TYPE_27__ {TYPE_4__* temp_file; } ;
struct TYPE_25__ {int fd; } ;
struct TYPE_26__ {TYPE_3__ file; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (TYPE_9__*,int ,char*) ;
 int VAR_12 ;
 TYPE_8__* FUNC_1 (TYPE_7__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_7__*) ;
 int FUNC_3 (TYPE_7__*,TYPE_6__*,int ) ;
 int FUNC_4 (TYPE_7__*,TYPE_6__*,scalar_t__) ;
 int FUNC_5 (TYPE_6__*,scalar_t__) ;
 int VAR_13 ;
 int FUNC_6 (TYPE_7__*) ;
 int FUNC_7 (TYPE_6__*) ;
 int FUNC_8 (int ,int ,int ,char*) ;
 int FUNC_9 (int ,int ,int ,char*,scalar_t__) ;
 int FUNC_10 (int ,int ,int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_11 (int ,int ) ;
 int VAR_14 ;
 int FUNC_12 (int ,int ,int ,void const*,int) ;

__attribute__((used)) static void
FUNC_13(ngx_http_request_t *VAR_15, ngx_http_tfs_t *VAR_16)
{
    int VAR_17;
    ngx_int_t VAR_18;
    ngx_http_tfs_t *VAR_19;
    ngx_connection_t *VAR_20;
    ngx_http_core_loc_conf_t *VAR_21;


    if (VAR_16->parent) {
        if (VAR_16->tfs_status != VAR_8) {
            FUNC_4(VAR_15, VAR_16, VAR_2);
            return;
        }

        if (VAR_16->r_ctx.action.code == VAR_4) {
            FUNC_4(VAR_15, VAR_16, VAR_1);
            return;
        }

        if (VAR_16->r_ctx.action.code == VAR_3) {

            if (VAR_16->parent->sp_curr != VAR_16->sp_curr) {
                VAR_16->sp_ready = VAR_5;
                FUNC_10(VAR_7, VAR_16->log, 0,
                               "curr output segment is [%uD], "
                               "[%uD] is ready, wait for call...",
                               VAR_16->parent->sp_curr, VAR_16->sp_curr);
                return;
            }

            FUNC_3(VAR_15, VAR_16, VAR_13);
            FUNC_9(VAR_7, VAR_16->log, 0,
                           "segment[%uD] output...",
                           VAR_16->sp_curr);
        }
    }

    if (VAR_16->parent == ((void*)0)) {
        VAR_19 = VAR_16;

    } else {
        VAR_19 = VAR_16->parent;
    }

    if (!VAR_19->header_sent) {
        FUNC_7(VAR_16);

        VAR_18 = FUNC_2(VAR_15);

        if (VAR_18 == VAR_2 || VAR_18 > VAR_8 || VAR_15->post_action) {
            FUNC_5(VAR_16, VAR_18);
            return;
        }

        VAR_19->header_sent = 1;

        if (VAR_16->header_only) {
            FUNC_4(VAR_15, VAR_16, VAR_18);
            return;
        }
    }

    VAR_20 = VAR_15->connection;

    if (VAR_15->request_body && VAR_15->request_body->temp_file) {
        FUNC_11(VAR_15->pool, VAR_15->request_body->temp_file->file.fd);
        VAR_15->request_body->temp_file->file.fd = VAR_6;
    }

    VAR_21 = FUNC_1(VAR_15, VAR_12);

    VAR_15->write_event_handler = FUNC_6;

    VAR_15->limit_rate = 0;

    if (VAR_21->tcp_nodelay && VAR_20->tcp_nodelay == VAR_10) {
        FUNC_8(VAR_7, VAR_20->log, 0, "tcp_nodelay");

        VAR_17 = 1;

        if (FUNC_12(VAR_20->fd, VAR_0, VAR_11,
                (const void *) &VAR_17, sizeof(int)) == -1)
        {
            FUNC_0(VAR_20, VAR_14,
                                 "setsockopt(TCP_NODELAY) failed");

            FUNC_4(VAR_15, VAR_16, 0);
            return;
        }

        VAR_20->tcp_nodelay = VAR_9;
    }

    FUNC_6(VAR_15);
    return;
}
