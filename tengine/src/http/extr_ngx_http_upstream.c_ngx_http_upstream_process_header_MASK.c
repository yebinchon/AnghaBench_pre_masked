
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_42__ TYPE_9__ ;
typedef struct TYPE_41__ TYPE_8__ ;
typedef struct TYPE_40__ TYPE_7__ ;
typedef struct TYPE_39__ TYPE_6__ ;
typedef struct TYPE_38__ TYPE_5__ ;
typedef struct TYPE_37__ TYPE_4__ ;
typedef struct TYPE_36__ TYPE_3__ ;
typedef struct TYPE_35__ TYPE_30__ ;
typedef struct TYPE_34__ TYPE_2__ ;
typedef struct TYPE_33__ TYPE_1__ ;
typedef struct TYPE_32__ TYPE_13__ ;
typedef struct TYPE_31__ TYPE_10__ ;


typedef scalar_t__ ssize_t ;
typedef int ngx_table_elt_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_40__ {scalar_t__ status_n; int trailers; int headers; } ;
struct TYPE_38__ {scalar_t__ pos; scalar_t__ start; scalar_t__ last; scalar_t__ end; int temporary; int tag; } ;
struct TYPE_37__ {scalar_t__ cached; TYPE_10__* connection; } ;
struct TYPE_34__ {int tag; } ;
struct TYPE_41__ {scalar_t__ (* process_header ) (TYPE_9__*) ;TYPE_7__ headers_in; scalar_t__ start_time; TYPE_6__* state; TYPE_5__ buffer; TYPE_4__ peer; scalar_t__ valid_header_in; int read_timeout; TYPE_2__ output; TYPE_1__* conf; int request_sent; } ;
typedef TYPE_8__ ngx_http_upstream_t ;
struct TYPE_42__ {TYPE_3__* cache; int pool; } ;
typedef TYPE_9__ ngx_http_request_t ;
struct TYPE_31__ {scalar_t__ (* recv ) (TYPE_10__*,scalar_t__,scalar_t__) ;TYPE_13__* log; TYPE_30__* read; } ;
typedef TYPE_10__ ngx_connection_t ;
struct TYPE_39__ {scalar_t__ header_time; int bytes_received; } ;
struct TYPE_36__ {int header_start; } ;
struct TYPE_35__ {scalar_t__ timedout; } ;
struct TYPE_33__ {int buffer_size; } ;
struct TYPE_32__ {char* action; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_1 (TYPE_30__*,int ) ;
 int FUNC_2 (TYPE_9__*,TYPE_8__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_9__*,TYPE_8__*) ;
 int FUNC_4 (TYPE_9__*,TYPE_8__*,int ) ;
 scalar_t__ FUNC_5 (TYPE_9__*,TYPE_8__*) ;
 int FUNC_6 (TYPE_9__*,TYPE_8__*) ;
 scalar_t__ FUNC_7 (TYPE_10__*) ;
 scalar_t__ FUNC_8 (TYPE_9__*,TYPE_8__*) ;
 scalar_t__ FUNC_9 (int *,int ,int,int) ;
 int FUNC_10 (int ,TYPE_13__*,int ,char*) ;
 int FUNC_11 (int ,TYPE_13__*,int ,char*) ;
 int * FUNC_12 (int ,int) ;
 int VAR_12 ;
 scalar_t__ FUNC_13 (TYPE_10__*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_14 (TYPE_9__*) ;

__attribute__((used)) static void
FUNC_15(ngx_http_request_t *VAR_13, ngx_http_upstream_t *VAR_14)
{
    ssize_t VAR_15;
    ngx_int_t VAR_16;
    ngx_connection_t *VAR_17;

    VAR_17 = VAR_14->peer.connection;

    FUNC_10(VAR_8, VAR_17->log, 0,
                   "http upstream process header");

    VAR_17->log->action = "reading response header from upstream";

    if (VAR_17->read->timedout) {
        FUNC_4(VAR_13, VAR_14, VAR_6);
        return;
    }

    if (!VAR_14->request_sent && FUNC_7(VAR_17) != VAR_10) {
        FUNC_4(VAR_13, VAR_14, VAR_4);
        return;
    }

    if (VAR_14->buffer.start == ((void*)0)) {
        VAR_14->buffer.start = FUNC_12(VAR_13->pool, VAR_14->conf->buffer_size);
        if (VAR_14->buffer.start == ((void*)0)) {
            FUNC_2(VAR_13, VAR_14,
                                               VAR_2);
            return;
        }

        VAR_14->buffer.pos = VAR_14->buffer.start;
        VAR_14->buffer.last = VAR_14->buffer.start;
        VAR_14->buffer.end = VAR_14->buffer.start + VAR_14->conf->buffer_size;
        VAR_14->buffer.temporary = 1;

        VAR_14->buffer.tag = VAR_14->output.tag;

        if (FUNC_9(&VAR_14->headers_in.headers, VAR_13->pool, 8,
                          sizeof(ngx_table_elt_t))
            != VAR_10)
        {
            FUNC_2(VAR_13, VAR_14,
                                               VAR_2);
            return;
        }

        if (FUNC_9(&VAR_14->headers_in.trailers, VAR_13->pool, 2,
                          sizeof(ngx_table_elt_t))
            != VAR_10)
        {
            FUNC_2(VAR_13, VAR_14,
                                               VAR_2);
            return;
        }
    }

    for ( ;; ) {

        VAR_15 = VAR_17->recv(VAR_17, VAR_14->buffer.last, VAR_14->buffer.end - VAR_14->buffer.last);

        if (VAR_15 == VAR_0) {




            if (FUNC_1(VAR_17->read, 0) != VAR_10) {
                FUNC_2(VAR_13, VAR_14,
                                               VAR_2);
                return;
            }

            return;
        }

        if (VAR_15 == 0) {
            FUNC_11(VAR_9, VAR_17->log, 0,
                          "upstream prematurely closed connection");
        }

        if (VAR_15 == VAR_1 || VAR_15 == 0) {
            FUNC_4(VAR_13, VAR_14, VAR_4);
            return;
        }

        VAR_14->state->bytes_received += VAR_15;

        VAR_14->buffer.last += VAR_15;







        VAR_16 = VAR_14->process_header(VAR_13);

        if (VAR_16 == VAR_0) {

            if (VAR_14->buffer.last == VAR_14->buffer.end) {
                FUNC_11(VAR_9, VAR_17->log, 0,
                              "upstream sent too big header");

                FUNC_4(VAR_13, VAR_14,
                                       VAR_5);
                return;
            }

            continue;
        }

        break;
    }

    if (VAR_16 == VAR_7) {
        FUNC_4(VAR_13, VAR_14, VAR_5);
        return;
    }

    if (VAR_16 == VAR_1) {
        FUNC_2(VAR_13, VAR_14,
                                           VAR_2);
        return;
    }



    VAR_14->state->header_time = VAR_11 - VAR_14->start_time;

    if (VAR_14->headers_in.status_n >= VAR_3) {

        if (FUNC_8(VAR_13, VAR_14) == VAR_10) {
            return;
        }

        if (FUNC_3(VAR_13, VAR_14) == VAR_10) {
            return;
        }
    }

    if (FUNC_5(VAR_13, VAR_14) != VAR_10) {
        return;
    }

    FUNC_6(VAR_13, VAR_14);
}
