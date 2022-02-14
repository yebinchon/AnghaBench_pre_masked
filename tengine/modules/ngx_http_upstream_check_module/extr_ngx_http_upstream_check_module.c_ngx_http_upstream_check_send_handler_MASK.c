
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_13__ ;


typedef scalar_t__ ssize_t ;
struct TYPE_17__ {scalar_t__ state; scalar_t__ (* init ) (TYPE_3__*) ;TYPE_4__* check_data; TYPE_1__* check_peer_addr; int pool; } ;
typedef TYPE_3__ ngx_http_upstream_check_peer_t ;
struct TYPE_16__ {scalar_t__ last; scalar_t__ pos; } ;
struct TYPE_18__ {TYPE_2__ send; } ;
typedef TYPE_4__ ngx_http_upstream_check_ctx_t ;
struct TYPE_19__ {int log; TYPE_6__* data; } ;
typedef TYPE_5__ ngx_event_t ;
typedef int ngx_err_t ;
struct TYPE_20__ {scalar_t__ (* send ) (TYPE_6__*,scalar_t__,scalar_t__) ;int error; int requests; int log; int write; int * pool; TYPE_3__* data; } ;
typedef TYPE_6__ ngx_connection_t ;
struct TYPE_15__ {int name; } ;
struct TYPE_14__ {int log; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_13__* VAR_7 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (int ,int ,int ,char*) ;
 int FUNC_5 (int ,int ,int ,char*,scalar_t__) ;
 int FUNC_6 (int ,int ,int ,char*,scalar_t__,...) ;
 TYPE_4__* FUNC_7 (int ,int) ;
 int VAR_8 ;
 scalar_t__ FUNC_8 (TYPE_3__*) ;
 scalar_t__ FUNC_9 (TYPE_6__*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_10(ngx_event_t *VAR_9)
{
    ssize_t VAR_10;
    ngx_connection_t *VAR_11;
    ngx_http_upstream_check_ctx_t *VAR_12;
    ngx_http_upstream_check_peer_t *VAR_13;

    if (FUNC_2()) {
        return;
    }

    VAR_11 = VAR_9->data;
    VAR_13 = VAR_11->data;

    FUNC_4(VAR_4, VAR_11->log, 0, "http check send.");

    if (VAR_11->pool == ((void*)0)) {
        FUNC_6(VAR_5, VAR_9->log, 0,
                      "check pool NULL with peer: %V ",
                      &VAR_13->check_peer_addr->name);

        goto check_send_fail;
    }

    if (VAR_13->state != VAR_1) {
        if (FUNC_0(VAR_11->write, 0) != VAR_6) {

            FUNC_6(VAR_5, VAR_9->log, 0,
                          "check handle write event error with peer: %V ",
                          &VAR_13->check_peer_addr->name);

            goto check_send_fail;
        }

        return;
    }

    if (VAR_13->check_data == ((void*)0)) {

        VAR_13->check_data = FUNC_7(VAR_13->pool,
                                       sizeof(ngx_http_upstream_check_ctx_t));
        if (VAR_13->check_data == ((void*)0)) {
            goto check_send_fail;
        }

        if (VAR_13->init == ((void*)0) || VAR_13->init(VAR_13) != VAR_6) {

            FUNC_6(VAR_5, VAR_9->log, 0,
                          "check init error with peer: %V ",
                          &VAR_13->check_peer_addr->name);

            goto check_send_fail;
        }
    }

    VAR_12 = VAR_13->check_data;

    FUNC_5(VAR_4, VAR_11->log, 0,
                   "http check send total: %z",
                   VAR_12->send.last - VAR_12->send.pos);

    while (VAR_12->send.pos < VAR_12->send.last) {

        VAR_10 = VAR_11->send(VAR_11, VAR_12->send.pos, VAR_12->send.last - VAR_12->send.pos);
        if (VAR_10 >= 0) {
            VAR_12->send.pos += VAR_10;
        } else if (VAR_10 == VAR_0) {
            return;
        } else {
            VAR_11->error = 1;
            goto check_send_fail;
        }
    }

    if (VAR_12->send.pos == VAR_12->send.last) {
        FUNC_4(VAR_4, VAR_11->log, 0, "http check send done.");
        VAR_13->state = VAR_2;
        VAR_11->requests++;
    }

    return;

check_send_fail:
    FUNC_3(VAR_13, 0);
    FUNC_1(VAR_13);
}
