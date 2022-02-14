
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_46__ TYPE_9__ ;
typedef struct TYPE_45__ TYPE_8__ ;
typedef struct TYPE_44__ TYPE_7__ ;
typedef struct TYPE_43__ TYPE_6__ ;
typedef struct TYPE_42__ TYPE_5__ ;
typedef struct TYPE_41__ TYPE_4__ ;
typedef struct TYPE_40__ TYPE_3__ ;
typedef struct TYPE_39__ TYPE_2__ ;
typedef struct TYPE_38__ TYPE_1__ ;
typedef struct TYPE_37__ TYPE_13__ ;
typedef struct TYPE_36__ TYPE_10__ ;


typedef scalar_t__ ssize_t ;
typedef int ngx_table_elt_t ;
struct TYPE_43__ {TYPE_8__* cur; } ;
typedef TYPE_6__ ngx_multi_connection_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_40__ {scalar_t__ status_n; int trailers; int headers; } ;
struct TYPE_42__ {scalar_t__ cached; } ;
struct TYPE_36__ {scalar_t__ pos; scalar_t__ start; scalar_t__ last; scalar_t__ end; int temporary; int tag; } ;
struct TYPE_39__ {int tag; } ;
struct TYPE_44__ {scalar_t__ (* process_header ) (TYPE_8__*) ;int header_sent; TYPE_3__ headers_in; TYPE_1__* state; TYPE_5__ peer; scalar_t__ valid_header_in; TYPE_4__* conf; TYPE_10__ buffer; TYPE_2__ output; } ;
typedef TYPE_7__ ngx_http_upstream_t ;
struct TYPE_45__ {TYPE_9__* connection; TYPE_7__* upstream; int pool; } ;
typedef TYPE_8__ ngx_http_request_t ;
struct TYPE_46__ {scalar_t__ (* recv ) (TYPE_9__*,scalar_t__,scalar_t__) ;TYPE_13__* log; int read; TYPE_8__* data; } ;
typedef TYPE_9__ ngx_connection_t ;
typedef TYPE_10__ ngx_buf_t ;
struct TYPE_41__ {int buffer_size; int read_timeout; } ;
struct TYPE_38__ {void* response_time; void* header_time; } ;
struct TYPE_37__ {char* action; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_0 (int ,int ) ;
 void* VAR_16 ;
 TYPE_6__* FUNC_1 (TYPE_9__*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_9__*,scalar_t__) ;
 int FUNC_4 (TYPE_9__*,int ) ;
 int FUNC_5 (TYPE_8__*) ;
 int FUNC_6 (TYPE_8__*,TYPE_7__*) ;
 int FUNC_7 (TYPE_9__*) ;
 int FUNC_8 (TYPE_8__*,TYPE_7__*,scalar_t__) ;
 scalar_t__ FUNC_9 (TYPE_8__*,TYPE_7__*) ;
 scalar_t__ FUNC_10 (TYPE_8__*,TYPE_7__*) ;
 scalar_t__ FUNC_11 (TYPE_9__*) ;
 scalar_t__ FUNC_12 (TYPE_8__*,TYPE_7__*) ;
 scalar_t__ FUNC_13 (int *,int ,int,int) ;
 int FUNC_14 (int ,TYPE_13__*,int ,char*,TYPE_9__*) ;
 int FUNC_15 (int ,TYPE_13__*,int ,char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_16 (int ,TYPE_13__*,int ,char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_17 (int ,TYPE_13__*,int ,char*,...) ;
 int * FUNC_18 (int ,int) ;
 scalar_t__ FUNC_19 (TYPE_9__*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_20 (TYPE_8__*) ;

void
FUNC_21(ngx_connection_t *VAR_17)
{
    ssize_t VAR_18;
    ngx_int_t VAR_19;
    ngx_http_request_t *VAR_20, *VAR_21, *VAR_22;
    ngx_http_upstream_t *VAR_23, *VAR_24, *VAR_25;
    ngx_connection_t *VAR_26, *VAR_27;
    ngx_multi_connection_t *VAR_28;
    ngx_buf_t *VAR_29;

    VAR_26 = VAR_17;
    VAR_28 = FUNC_1(VAR_17);

    FUNC_14(VAR_11, VAR_17->log, 0,
                   "multi: http upstream read handler %p", VAR_17);

    VAR_17->log->action = "reading from multi upstream";

    if (FUNC_11(VAR_17) != VAR_15) {
        FUNC_4(VAR_17, VAR_5);
        return;
    }

    VAR_20 = VAR_17->data;
    VAR_23 = VAR_20->upstream;
    VAR_24 = VAR_20->upstream;

    VAR_21 = VAR_20;

    if (VAR_23->buffer.start == ((void*)0)) {
        VAR_23->buffer.start = FUNC_18(VAR_20->pool, VAR_23->conf->buffer_size);
        if (VAR_23->buffer.start == ((void*)0)) {
            FUNC_8(VAR_20, VAR_23,
                                               VAR_3);
            return;
        }

        VAR_23->buffer.pos = VAR_23->buffer.start;
        VAR_23->buffer.last = VAR_23->buffer.start;
        VAR_23->buffer.end = VAR_23->buffer.start + VAR_23->conf->buffer_size;
        VAR_23->buffer.temporary = 1;

        VAR_23->buffer.tag = VAR_23->output.tag;

        if (FUNC_13(&VAR_23->headers_in.headers, VAR_20->pool, 8,
                          sizeof(ngx_table_elt_t))
            != VAR_15)
        {
            FUNC_3(VAR_17,
                                                     VAR_3);
            return;
        }

        if (FUNC_13(&VAR_23->headers_in.trailers, VAR_20->pool, 2,
                          sizeof(ngx_table_elt_t))
            != VAR_15)
        {
            FUNC_3(VAR_17,
                                                     VAR_3);
            return;
        }
    }


    VAR_29 = &VAR_24->buffer;

    for ( ;; ) {
        if (VAR_29->last == VAR_29->end) {
            FUNC_15(VAR_11, VAR_17->log, 0,
                           "multi: read buffer full %p, %p, %p, %p"
                           , VAR_29->start, VAR_29->end, VAR_29->pos, VAR_29->last);
        } else {
            VAR_18 = VAR_26->recv(VAR_26, VAR_29->last, VAR_29->end - VAR_29->last);

            if (VAR_18 == VAR_0) {
                FUNC_0(VAR_17->read, VAR_23->conf->read_timeout);

                if (FUNC_2(VAR_26->read, 0) != VAR_15) {
                    FUNC_3(VAR_17,
                            VAR_3);
                    return;
                }

                return;
            }

            if (VAR_18 == 0) {
                FUNC_17(VAR_12, VAR_26->log, 0,
                        "upstream prematurely closed connection");
            }

            if (VAR_18 == VAR_1 || VAR_18 == 0) {
                FUNC_4(VAR_17, VAR_5);
                return;
            }

            VAR_29->last += VAR_18;
        }







        for ( ; ; ) {
            FUNC_16(VAR_11, VAR_26->log, 0
                    , "multi: process parse start: %d, %p, %p, %p, %p"
                    , VAR_29->last - VAR_29->pos, VAR_29->start, VAR_29->end, VAR_29->pos, VAR_29->last);
            VAR_19 = VAR_23->process_header(VAR_21);

            FUNC_16(VAR_11, VAR_26->log, 0
                    , "multi: process parse end: %d, %p, %p, %p, %p"
                    , VAR_29->last - VAR_29->pos, VAR_29->start, VAR_29->end, VAR_29->pos, VAR_29->last);

            if (VAR_19 == VAR_0) {
                if (VAR_29->last == VAR_29->end && VAR_29->pos == VAR_29->last) {
                    VAR_29->pos = VAR_29->start;
                    VAR_29->last = VAR_29->start;
                }

                break;
            }

            if (VAR_19 == VAR_9) {
                FUNC_4(VAR_17, VAR_6);
                return;
            }

            if (VAR_19 == VAR_1) {
                FUNC_3(VAR_17, VAR_3);
                return;
            }



            if (!VAR_28->cur) {
                FUNC_17(VAR_12, VAR_26->log, 0,
                              "multi: upstream next because parse cur is empty");
                FUNC_3(VAR_17, VAR_3);
                return;
            }

            VAR_22 = VAR_28->cur;
            VAR_25 = VAR_22->upstream;
            VAR_27 = VAR_22->connection;

            if (VAR_19 == VAR_8) {
                VAR_25->state->header_time = VAR_16 - VAR_25->state->response_time;

                if (VAR_25->headers_in.status_n >= VAR_4) {

                    if (FUNC_12(VAR_22, VAR_25) == VAR_15) {
                        continue;
                    }

                    if (FUNC_9(VAR_22, VAR_25) == VAR_15) {
                        continue;
                    }
                }

                if (FUNC_10(VAR_22, VAR_25) != VAR_15) {
                    continue;
                }

                FUNC_6(VAR_22, VAR_25);
            } else if (VAR_19 == VAR_7) {
                if (!VAR_25->header_sent) {
                    FUNC_17(VAR_13, VAR_26->log, 0,
                                  "multi: get body immediate %p", VAR_21);

                    VAR_25->state->header_time = VAR_16 - VAR_25->state->response_time;
                    if (VAR_25->headers_in.status_n >= VAR_4) {
                        if (FUNC_12(VAR_22, VAR_25) == VAR_15) {
                            continue;
                        }

                        if (FUNC_9(VAR_22, VAR_25) == VAR_15) {
                            continue;
                        }
                    }

                    if (FUNC_10(VAR_22, VAR_25) != VAR_15) {
                        continue;
                    }

                    FUNC_6(VAR_22, VAR_25);
                }

                FUNC_5(VAR_22);
            } else if (VAR_19 == VAR_10) {
                FUNC_17(VAR_14, VAR_26->log, 0,
                              "multi: parse get error %p", VAR_21);
                if (!VAR_25->header_sent) {
                    FUNC_8(VAR_22, VAR_25, VAR_2);
                } else {
                    FUNC_8(VAR_22, VAR_25, VAR_1);
                }
            } else {
                FUNC_17(VAR_12, VAR_26->log, 0,
                              "multi: parse code unknown: %d", VAR_19);
                if (!VAR_25->header_sent) {
                    FUNC_8(VAR_22, VAR_25, VAR_3);
                } else {
                    FUNC_8(VAR_22, VAR_25, VAR_1);
                }
            }

            FUNC_7(VAR_27);
        }
    }
}
