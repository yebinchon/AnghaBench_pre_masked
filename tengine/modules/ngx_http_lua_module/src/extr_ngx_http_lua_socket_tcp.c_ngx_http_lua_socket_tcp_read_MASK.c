
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_37__ TYPE_9__ ;
typedef struct TYPE_36__ TYPE_8__ ;
typedef struct TYPE_35__ TYPE_7__ ;
typedef struct TYPE_34__ TYPE_6__ ;
typedef struct TYPE_33__ TYPE_5__ ;
typedef struct TYPE_32__ TYPE_4__ ;
typedef struct TYPE_31__ TYPE_3__ ;
typedef struct TYPE_30__ TYPE_2__ ;
typedef struct TYPE_29__ TYPE_1__ ;
typedef struct TYPE_28__ TYPE_10__ ;


typedef scalar_t__ ssize_t ;
typedef int off_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_33__ {size_t request_length; TYPE_4__* request_body; TYPE_3__* connection; int args; int uri; TYPE_1__* header_in; } ;
typedef TYPE_5__ ngx_http_request_t ;
struct TYPE_28__ {size_t last; size_t pos; size_t end; } ;
struct TYPE_30__ {TYPE_9__* connection; } ;
struct TYPE_34__ {int eof; scalar_t__ (* input_filter ) (int ,size_t) ;int read_timeout; scalar_t__ body_downstream; int socket_errno; scalar_t__ raw_downstream; TYPE_10__ buffer; scalar_t__ read_waiting; scalar_t__ ft_type; int input_filter_ctx; TYPE_2__ peer; } ;
typedef TYPE_6__ ngx_http_lua_socket_tcp_upstream_t ;
struct TYPE_35__ {scalar_t__ check_client_abort; } ;
typedef TYPE_7__ ngx_http_lua_loc_conf_t ;
struct TYPE_36__ {scalar_t__ timer_set; scalar_t__ active; scalar_t__ ready; } ;
typedef TYPE_8__ ngx_event_t ;
struct TYPE_37__ {scalar_t__ (* recv ) (TYPE_9__*,size_t,size_t) ;TYPE_8__* read; int log; } ;
typedef TYPE_9__ ngx_connection_t ;
typedef TYPE_10__ ngx_buf_t ;
struct TYPE_32__ {size_t rest; } ;
struct TYPE_31__ {int log; } ;
struct TYPE_29__ {int last; int pos; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (TYPE_8__*,int ) ;
 void* FUNC_2 (size_t,int,size_t) ;
 int FUNC_3 (TYPE_8__*) ;
 scalar_t__ FUNC_4 (TYPE_8__*,int ) ;
 TYPE_7__* FUNC_5 (TYPE_5__*,int ) ;
 scalar_t__ FUNC_6 (TYPE_5__*,TYPE_8__*) ;
 int VAR_8 ;
 int FUNC_7 (TYPE_5__*,int,size_t) ;
 scalar_t__ FUNC_8 (TYPE_5__*,TYPE_6__*) ;
 int FUNC_9 (TYPE_5__*,TYPE_6__*,int ) ;
 int FUNC_10 (TYPE_5__*,TYPE_6__*) ;
 int FUNC_11 (int ,int ,int ,char*) ;
 int FUNC_12 (int ,int ,int ,char*,int) ;
 int FUNC_13 (int ,int ,int ,char*,int,int *,int *) ;
 int FUNC_14 (int ,int ,int ,char*,int,int,int *,int *) ;
 int VAR_9 ;
 scalar_t__ FUNC_15 (int ,size_t) ;
 scalar_t__ FUNC_16 (TYPE_9__*,size_t,size_t) ;

__attribute__((used)) static ngx_int_t
FUNC_17(ngx_http_request_t *VAR_10,
    ngx_http_lua_socket_tcp_upstream_t *VAR_11)
{
    ngx_int_t VAR_12;
    ngx_connection_t *VAR_13;
    ngx_buf_t *VAR_14;
    ngx_event_t *VAR_15;
    size_t VAR_16;
    ssize_t VAR_17;
    unsigned VAR_18;
    off_t VAR_19 = 0;
    ngx_http_lua_loc_conf_t *VAR_20;

    VAR_13 = VAR_11->peer.connection;
    VAR_15 = VAR_13->read;

    FUNC_12(VAR_6, VAR_13->log, 0,
                   "lua tcp socket read data: wait:%d",
                   (int) VAR_11->read_waiting);

    VAR_14 = &VAR_11->buffer;
    VAR_18 = 0;

    for ( ;; ) {

        VAR_16 = VAR_14->last - VAR_14->pos;

        if (VAR_16 || VAR_11->eof) {

            VAR_12 = VAR_11->input_filter(VAR_11->input_filter_ctx, VAR_16);

            if (VAR_12 == VAR_7) {

                FUNC_14(VAR_6, VAR_10->connection->log, 0,
                               "lua tcp socket receive done: wait:%d, eof:%d, "
                               "uri:\"%V?%V\"", (int) VAR_11->read_waiting,
                               (int) VAR_11->eof, &VAR_10->uri, &VAR_10->args);

                if (VAR_11->body_downstream
                    && VAR_14->last == VAR_14->pos
                    && VAR_10->request_body->rest == 0)
                {

                    VAR_20 = FUNC_5(VAR_10, VAR_8);

                    if (VAR_20->check_client_abort) {
                        VAR_12 = FUNC_6(VAR_10, VAR_15);

                        if (VAR_12 == VAR_7) {
                            goto success;
                        }

                        if (VAR_12 == VAR_2) {
                            FUNC_9(VAR_10, VAR_11,
                                          VAR_3);

                        } else {
                            FUNC_9(VAR_10, VAR_11,
                                             VAR_4);
                        }

                        return VAR_1;
                    }
                }


                if (FUNC_4(VAR_15, 0) != VAR_7) {
                    FUNC_9(VAR_10, VAR_11,
                                     VAR_4);
                    return VAR_1;
                }


success:

                FUNC_10(VAR_10, VAR_11);
                return VAR_7;
            }

            if (VAR_12 == VAR_1) {
                FUNC_0("input filter error: ft_type:%d wait:%d",
                   (int) VAR_11->ft_type, (int) VAR_11->read_waiting);

                FUNC_9(VAR_10, VAR_11,
                                                VAR_4);
                return VAR_1;
            }



            if (VAR_11->body_downstream && VAR_10->request_body->rest == 0) {
                VAR_11->eof = 1;
            }

            continue;
        }

        if (VAR_18 && !VAR_15->ready) {
            VAR_12 = VAR_0;
            break;
        }

        VAR_16 = VAR_14->end - VAR_14->last;

        if (VAR_16 == 0) {
            VAR_12 = FUNC_8(VAR_10, VAR_11);
            if (VAR_12 == VAR_1) {
                FUNC_9(VAR_10, VAR_11,
                                                VAR_5);

                return VAR_1;
            }

            VAR_14 = &VAR_11->buffer;
            VAR_16 = (size_t) (VAR_14->end - VAR_14->last);
        }

        if (VAR_11->raw_downstream) {
            VAR_19 = VAR_10->header_in->last - VAR_10->header_in->pos;

            if (VAR_19) {

                if ((off_t) VAR_16 > VAR_19) {
                    VAR_16 = (size_t) VAR_19;
                }

                FUNC_7(VAR_10,
                                                              VAR_10->header_in->pos,
                                                              VAR_16);

                VAR_14->last = FUNC_2(VAR_14->last, VAR_10->header_in->pos, VAR_16);
                VAR_10->header_in->pos += VAR_16;
                continue;
            }

        } else if (VAR_11->body_downstream) {

            if (VAR_10->request_body->rest == 0) {

                FUNC_0("request body rest is zero");

                VAR_11->eof = 1;

                FUNC_11(VAR_6, VAR_10->connection->log, 0,
                               "lua request body exhausted");

                continue;
            }



            VAR_19 = VAR_10->header_in->last - VAR_10->header_in->pos;

            if (VAR_19) {



                FUNC_12(VAR_6, VAR_10->connection->log, 0,
                               "http client request body preread %O", VAR_19);

                if (VAR_19 >= VAR_10->request_body->rest) {
                    VAR_19 = VAR_10->request_body->rest;
                }

                if ((off_t) VAR_16 > VAR_19) {
                    VAR_16 = (size_t) VAR_19;
                }

                FUNC_7(VAR_10,
                                                              VAR_10->header_in->pos,
                                                              VAR_16);

                VAR_14->last = FUNC_2(VAR_14->last, VAR_10->header_in->pos, VAR_16);

                VAR_10->header_in->pos += VAR_16;
                VAR_10->request_length += VAR_16;

                if (VAR_10->request_body->rest) {
                    VAR_10->request_body->rest -= VAR_16;
                }

                continue;
            }

            if (VAR_16 > (size_t) VAR_10->request_body->rest) {
                VAR_16 = (size_t) VAR_10->request_body->rest;
            }
        }


        if (VAR_15->active && !VAR_15->ready) {
            VAR_12 = VAR_0;
            break;
        }


        FUNC_13(VAR_6, VAR_10->connection->log, 0,
                       "lua tcp socket try to recv data %uz: \"%V?%V\"",
                       VAR_16, &VAR_10->uri, &VAR_10->args);

        VAR_17 = VAR_13->recv(VAR_13, VAR_14->last, VAR_16);

        FUNC_0("read event ready: %d", (int) VAR_13->read->ready);

        VAR_18 = 1;

        FUNC_13(VAR_6, VAR_10->connection->log, 0,
                       "lua tcp socket recv returned %d: \"%V?%V\"",
                       (int) VAR_17, &VAR_10->uri, &VAR_10->args);

        if (VAR_17 == VAR_0) {
            VAR_12 = VAR_0;
            FUNC_0("socket recv busy");
            break;
        }

        if (VAR_17 == 0) {

            if (VAR_11->raw_downstream || VAR_11->body_downstream) {

                VAR_20 = FUNC_5(VAR_10, VAR_8);

                if (VAR_20->check_client_abort) {

                    FUNC_9(VAR_10, VAR_11,
                                          VAR_3);
                    return VAR_1;
                }



                if (VAR_11->body_downstream && VAR_10->request_body->rest) {
                    FUNC_9(VAR_10, VAR_11,
                                          VAR_3);
                    return VAR_1;
                }
            }

            VAR_11->eof = 1;

            FUNC_11(VAR_6, VAR_10->connection->log, 0,
                           "lua tcp socket closed");

            continue;
        }

        if (VAR_17 == VAR_1) {
            VAR_11->socket_errno = VAR_9;
            FUNC_9(VAR_10, VAR_11,
                                                  VAR_4);
            return VAR_1;
        }

        VAR_14->last += VAR_17;

        if (VAR_11->body_downstream) {
            VAR_10->request_length += VAR_17;
            VAR_10->request_body->rest -= VAR_17;
        }
    }


    if (FUNC_4(VAR_15, 0) != VAR_7) {
        FUNC_9(VAR_10, VAR_11,
                                              VAR_4);
        return VAR_1;
    }


    if (VAR_15->active) {
        FUNC_1(VAR_15, VAR_11->read_timeout);

    } else if (VAR_15->timer_set) {
        FUNC_3(VAR_15);
    }

    return VAR_12;
}
