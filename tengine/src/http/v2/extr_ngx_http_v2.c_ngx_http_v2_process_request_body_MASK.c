
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int u_char ;
typedef scalar_t__ ngx_uint_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_15__ {int content_length_n; scalar_t__ chunked; } ;
struct TYPE_16__ {int request_body_in_file_only; scalar_t__ request_body_no_buffering; int read_event_handler; TYPE_1__ headers_in; TYPE_3__* request_body; TYPE_5__* connection; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_17__ {int (* post_handler ) (TYPE_2__*) ;int received; TYPE_6__* buf; scalar_t__ rest; } ;
typedef TYPE_3__ ngx_http_request_body_t ;
struct TYPE_18__ {int client_body_timeout; } ;
typedef TYPE_4__ ngx_http_core_loc_conf_t ;
struct TYPE_19__ {TYPE_8__* read; int log; } ;
typedef TYPE_5__ ngx_connection_t ;
struct TYPE_20__ {scalar_t__ sync; int * last; int * end; int * start; int * pos; } ;
typedef TYPE_6__ ngx_buf_t ;
struct TYPE_21__ {scalar_t__ timer_set; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_8__*,int ) ;
 int * FUNC_1 (int *,int *,size_t) ;
 int FUNC_2 (TYPE_8__*) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_4__* FUNC_3 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ,int ,int ,char*) ;
 int FUNC_6 (TYPE_8__*,int *) ;
 int VAR_5 ;
 int FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static ngx_int_t
FUNC_8(ngx_http_request_t *VAR_6, u_char *VAR_7,
    size_t VAR_8, ngx_uint_t VAR_9)
{
    ngx_buf_t *VAR_10;
    ngx_int_t VAR_11;
    ngx_connection_t *VAR_12;
    ngx_http_request_body_t *VAR_13;
    ngx_http_core_loc_conf_t *VAR_14;

    VAR_12 = VAR_6->connection;
    VAR_13 = VAR_6->request_body;
    VAR_10 = VAR_13->buf;

    if (VAR_8) {
        if (VAR_10->sync) {
            VAR_10->pos = VAR_10->start = VAR_7;
            VAR_10->last = VAR_10->end = VAR_7 + VAR_8;

            VAR_6->request_body_in_file_only = 1;

        } else {
            if (VAR_8 > (size_t) (VAR_10->end - VAR_10->last)) {
                FUNC_5(VAR_1, VAR_12->log, 0,
                              "client intended to send body data "
                              "larger than declared");

                return VAR_0;
            }

            VAR_10->last = FUNC_1(VAR_10->last, VAR_7, VAR_8);
        }
    }

    if (VAR_9) {
        VAR_13->rest = 0;

        if (VAR_12->read->timer_set) {
            FUNC_2(VAR_12->read);
        }

        if (VAR_6->request_body_no_buffering) {
            FUNC_6(VAR_12->read, &VAR_5);
            return VAR_2;
        }

        VAR_11 = FUNC_4(VAR_6);

        if (VAR_11 != VAR_2) {
            return VAR_11;
        }

        if (VAR_10->sync) {

            VAR_13->buf = ((void*)0);
        }

        if (VAR_6->headers_in.chunked) {
            VAR_6->headers_in.content_length_n = VAR_13->received;
        }

        VAR_6->read_event_handler = VAR_3;
        VAR_13->post_handler(VAR_6);

        return VAR_2;
    }

    if (VAR_8 == 0) {
        return VAR_2;
    }

    VAR_14 = FUNC_3(VAR_6, VAR_4);
    FUNC_0(VAR_12->read, VAR_14->client_body_timeout);

    if (VAR_6->request_body_no_buffering) {
        FUNC_6(VAR_12->read, &VAR_5);
        return VAR_2;
    }

    if (VAR_10->sync) {
        return FUNC_4(VAR_6);
    }

    return VAR_2;
}
