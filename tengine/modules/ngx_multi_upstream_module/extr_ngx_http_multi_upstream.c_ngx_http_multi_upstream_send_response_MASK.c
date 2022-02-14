
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_9__ ;
typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_29__ {int header_sent; scalar_t__ (* input_filter_init ) (TYPE_7__*) ;scalar_t__ length; TYPE_7__* input_filter_ctx; int read_event_handler; int * input_filter; int buffering; TYPE_2__* conf; TYPE_1__* pipe; int store; int cacheable; } ;
typedef TYPE_6__ ngx_http_upstream_t ;
struct TYPE_30__ {scalar_t__ limit_rate; int (* write_event_handler ) (TYPE_7__*) ;TYPE_5__* request_body; int pool; scalar_t__ header_only; TYPE_9__* connection; scalar_t__ post_action; } ;
typedef TYPE_7__ ngx_http_request_t ;
struct TYPE_31__ {scalar_t__ tcp_nodelay; } ;
typedef TYPE_8__ ngx_http_core_loc_conf_t ;
struct TYPE_32__ {scalar_t__ tcp_nodelay; int fd; int log; } ;
typedef TYPE_9__ ngx_connection_t ;
struct TYPE_28__ {TYPE_4__* temp_file; } ;
struct TYPE_26__ {int fd; } ;
struct TYPE_27__ {TYPE_3__ file; } ;
struct TYPE_25__ {int preserve_output; } ;
struct TYPE_24__ {int downstream_error; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_9__*,int ,char*) ;
 int VAR_9 ;
 TYPE_8__* FUNC_1 (TYPE_7__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_7__*) ;
 scalar_t__ FUNC_3 (TYPE_7__*,int ) ;
 int FUNC_4 (TYPE_7__*,TYPE_6__*,scalar_t__) ;
 int * VAR_10 ;
 scalar_t__ FUNC_5 (TYPE_7__*) ;
 int FUNC_6 (TYPE_7__*) ;
 int VAR_11 ;
 int FUNC_7 (int ,int ,int ,char*) ;
 int FUNC_8 (int ,int ,int ,char*,TYPE_7__*,TYPE_6__*) ;
 int FUNC_9 (int ,int ) ;
 int VAR_12 ;
 int FUNC_10 (int ,int ,int ,void const*,int) ;
 scalar_t__ FUNC_11 (TYPE_7__*) ;

void
FUNC_12(ngx_http_request_t *VAR_13, ngx_http_upstream_t *VAR_14)
{
    int VAR_15;
    ngx_int_t VAR_16;
    ngx_connection_t *VAR_17;
    ngx_http_core_loc_conf_t *VAR_18;

    FUNC_8(VAR_4, VAR_13->connection->log, 0,
                   "http multi upstream send response: %p, %p", VAR_13, VAR_14);

    VAR_16 = FUNC_2(VAR_13);

    if (VAR_16 == VAR_1 || VAR_16 > VAR_5 || VAR_13->post_action) {
        FUNC_4(VAR_13, VAR_14, VAR_16);
        return;
    }

    VAR_14->header_sent = 1;

    VAR_17 = VAR_13->connection;

    if (VAR_13->header_only) {

        if (!VAR_14->buffering) {
            FUNC_4(VAR_13, VAR_14, VAR_16);
            return;
        }

        if (!VAR_14->cacheable && !VAR_14->store) {
            FUNC_4(VAR_13, VAR_14, VAR_16);
            return;
        }

        VAR_14->pipe->downstream_error = 1;
    }

    if (VAR_13->request_body && VAR_13->request_body->temp_file
            && !VAR_14->conf->preserve_output) {
        FUNC_9(VAR_13->pool, VAR_13->request_body->temp_file->file.fd);
        VAR_13->request_body->temp_file->file.fd = VAR_3;
    }

    VAR_18 = FUNC_1(VAR_13, VAR_9);

    if (!VAR_14->buffering) {

        if (VAR_14->input_filter == ((void*)0)) {
            VAR_14->input_filter_init = FUNC_5;
            VAR_14->input_filter = VAR_10;
            VAR_14->input_filter_ctx = VAR_13;
        }

        VAR_14->read_event_handler = VAR_11;
        VAR_13->write_event_handler =
                             FUNC_6;

        VAR_13->limit_rate = 0;

        if (VAR_14->input_filter_init(VAR_14->input_filter_ctx) == VAR_1) {
            FUNC_4(VAR_13, VAR_14, VAR_1);
            return;
        }

        if (VAR_18->tcp_nodelay && VAR_17->tcp_nodelay == VAR_7) {
            FUNC_7(VAR_4, VAR_17->log, 0, "tcp_nodelay");

            VAR_15 = 1;

            if (FUNC_10(VAR_17->fd, VAR_0, VAR_8,
                               (const void *) &VAR_15, sizeof(int)) == -1)
            {
                FUNC_0(VAR_17, VAR_12,
                                     "setsockopt(TCP_NODELAY) failed");
                FUNC_4(VAR_13, VAR_14, VAR_1);
                return;
            }

            VAR_17->tcp_nodelay = VAR_6;
        }

        if (VAR_14->length == 0) {
            if (FUNC_3(VAR_13, VAR_2) == VAR_1) {
                FUNC_4(VAR_13, VAR_14, VAR_1);
                return;
            }

            FUNC_6(VAR_13);
        }

        return;
    }
}
