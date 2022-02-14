
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_12__ ;


typedef int u_char ;
typedef scalar_t__ ssize_t ;
struct TYPE_25__ {size_t client_header_buffer_size; } ;
typedef TYPE_2__ ngx_http_core_srv_conf_t ;
struct TYPE_26__ {scalar_t__ proxy_protocol; int conf_ctx; } ;
typedef TYPE_3__ ngx_http_connection_t ;
struct TYPE_27__ {int (* handler ) (TYPE_4__*) ;int timer_set; scalar_t__ timedout; TYPE_5__* data; } ;
typedef TYPE_4__ ngx_event_t ;
struct TYPE_28__ {scalar_t__ (* recv ) (TYPE_5__*,int *,size_t) ;TYPE_3__* data; TYPE_12__* log; int received; int pool; scalar_t__ async_enable; TYPE_1__* listening; TYPE_6__* buffer; scalar_t__ close; } ;
typedef TYPE_5__ ngx_connection_t ;
struct TYPE_29__ {int * start; int * last; int * pos; int * end; } ;
typedef TYPE_6__ ngx_buf_t ;
struct TYPE_24__ {int post_accept_timeout; } ;
struct TYPE_23__ {char* action; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_4__*,int ) ;
 TYPE_6__* FUNC_1 (int ,size_t) ;
 scalar_t__ FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (TYPE_5__*) ;
 int VAR_6 ;
 TYPE_3__* FUNC_4 (TYPE_5__*) ;
 TYPE_2__* FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (int ,TYPE_12__*,int ,char*) ;
 int FUNC_8 (int ,TYPE_12__*,int ,char*) ;
 int * FUNC_9 (int ,size_t) ;
 scalar_t__ FUNC_10 (int ,int *) ;
 int FUNC_11 (TYPE_4__*,int *) ;
 int VAR_7 ;
 int * FUNC_12 (TYPE_5__*,int *,int *) ;
 int FUNC_13 (TYPE_5__*,int) ;
 int FUNC_14 (TYPE_5__*) ;
 scalar_t__ FUNC_15 (TYPE_5__*,int *,size_t) ;

__attribute__((used)) static void
FUNC_16(ngx_event_t *VAR_8)
{
    u_char *VAR_9;
    size_t VAR_10;
    ssize_t VAR_11;
    ngx_buf_t *VAR_12;
    ngx_connection_t *VAR_13;
    ngx_http_connection_t *VAR_14;
    ngx_http_core_srv_conf_t *VAR_15;

    VAR_13 = VAR_8->data;

    FUNC_7(VAR_3, VAR_13->log, 0, "http wait request handler");

    if (VAR_8->timedout) {
        FUNC_8(VAR_4, VAR_13->log, VAR_2, "client timed out");
        FUNC_3(VAR_13);
        return;
    }

    if (VAR_13->close) {
        FUNC_3(VAR_13);
        return;
    }

    VAR_14 = VAR_13->data;
    VAR_15 = FUNC_5(VAR_14->conf_ctx, VAR_6);

    VAR_10 = VAR_15->client_header_buffer_size;

    VAR_12 = VAR_13->buffer;

    if (VAR_12 == ((void*)0)) {
        VAR_12 = FUNC_1(VAR_13->pool, VAR_10);
        if (VAR_12 == ((void*)0)) {
            FUNC_3(VAR_13);
            return;
        }

        VAR_13->buffer = VAR_12;

    } else if (VAR_12->start == ((void*)0)) {

        VAR_12->start = FUNC_9(VAR_13->pool, VAR_10);
        if (VAR_12->start == ((void*)0)) {
            FUNC_3(VAR_13);
            return;
        }

        VAR_12->pos = VAR_12->start;
        VAR_12->last = VAR_12->start;
        VAR_12->end = VAR_12->last + VAR_10;
    }

    VAR_11 = VAR_13->recv(VAR_13, VAR_12->last, VAR_10);

    if (VAR_11 == VAR_0) {

        if (!VAR_8->timer_set) {
            FUNC_0(VAR_8, VAR_13->listening->post_accept_timeout);
            FUNC_13(VAR_13, 1);
        }

        if (FUNC_2(VAR_8, 0) != VAR_5) {
            FUNC_3(VAR_13);
            return;
        }
            if (FUNC_10(VAR_13->pool, VAR_12->start) == VAR_5) {
                VAR_12->start = ((void*)0);
            }




        return;
    }

    if (VAR_11 == VAR_1) {
        FUNC_3(VAR_13);
        return;
    }

    if (VAR_11 == 0) {
        FUNC_8(VAR_4, VAR_13->log, 0,
                      "client closed connection");
        FUNC_3(VAR_13);
        return;
    }

    VAR_12->last += VAR_11;




    if (VAR_14->proxy_protocol) {
        VAR_14->proxy_protocol = 0;

        VAR_9 = FUNC_12(VAR_13, VAR_12->pos, VAR_12->last);

        if (VAR_9 == ((void*)0)) {
            FUNC_3(VAR_13);
            return;
        }

        VAR_12->pos = VAR_9;

        if (VAR_12->pos == VAR_12->last) {
            VAR_13->log->action = "waiting for request";
            VAR_12->pos = VAR_12->start;
            VAR_12->last = VAR_12->start;
            FUNC_11(VAR_8, &VAR_7);
            return;
        }
    }

    VAR_13->log->action = "reading client request line";

    FUNC_13(VAR_13, 0);

    VAR_13->data = FUNC_4(VAR_13);
    if (VAR_13->data == ((void*)0)) {
        FUNC_3(VAR_13);
        return;
    }

    VAR_8->handler = FUNC_6;
    FUNC_6(VAR_8);
}
