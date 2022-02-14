
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int u_char ;
typedef int ssize_t ;
typedef int ngx_int_t ;
struct TYPE_18__ {scalar_t__ state; int (* parse ) (TYPE_5__*) ;TYPE_4__* check_peer_addr; TYPE_3__* conf; TYPE_6__* check_data; } ;
typedef TYPE_5__ ngx_http_upstream_check_peer_t ;
struct TYPE_14__ {int * last; int * end; int * start; int * pos; } ;
struct TYPE_19__ {TYPE_1__ recv; } ;
typedef TYPE_6__ ngx_http_upstream_check_ctx_t ;
struct TYPE_20__ {int log; TYPE_8__* data; } ;
typedef TYPE_7__ ngx_event_t ;
typedef int ngx_err_t ;
struct TYPE_21__ {int (* recv ) (TYPE_8__*,int *,int) ;int error; int log; int pool; int read; TYPE_5__* data; } ;
typedef TYPE_8__ ngx_connection_t ;
struct TYPE_17__ {int name; } ;
struct TYPE_16__ {TYPE_2__* check_type_conf; } ;
struct TYPE_15__ {int name; } ;




 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_5__*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (TYPE_5__*,int) ;
 int FUNC_4 (int ,int ,int ,char*,int,int *) ;
 int FUNC_5 (int ,int ,int ,char*,int *,int *) ;
 int FUNC_6 (int *,int *,int) ;
 int VAR_4 ;
 void* FUNC_7 (int ,int) ;
 int VAR_5 ;
 int FUNC_8 (TYPE_8__*,int *,int) ;
 int FUNC_9 (TYPE_5__*) ;

__attribute__((used)) static void
FUNC_10(ngx_event_t *VAR_6)
{
    u_char *VAR_7;
    ssize_t VAR_8, VAR_9;
    ngx_int_t VAR_10;
    ngx_connection_t *VAR_11;
    ngx_http_upstream_check_ctx_t *VAR_12;
    ngx_http_upstream_check_peer_t *VAR_13;

    if (FUNC_2()) {
        return;
    }

    VAR_11 = VAR_6->data;
    VAR_13 = VAR_11->data;

    if (VAR_13->state != VAR_1) {

        if (FUNC_0(VAR_11->read, 0) != 128) {
            goto check_recv_fail;
        }

        return;
    }

    VAR_12 = VAR_13->check_data;

    if (VAR_12->recv.start == ((void*)0)) {

        VAR_12->recv.start = FUNC_7(VAR_11->pool, VAR_4 / 2);
        if (VAR_12->recv.start == ((void*)0)) {
            goto check_recv_fail;
        }

        VAR_12->recv.last = VAR_12->recv.pos = VAR_12->recv.start;
        VAR_12->recv.end = VAR_12->recv.start + VAR_4 / 2;
    }

    while (1) {
        VAR_9 = VAR_12->recv.end - VAR_12->recv.last;


        if (VAR_9 == 0) {
            VAR_8 = VAR_12->recv.end - VAR_12->recv.start;
            VAR_7 = FUNC_7(VAR_11->pool, VAR_8 * 2);
            if (VAR_7 == ((void*)0)) {
                goto check_recv_fail;
            }

            FUNC_6(VAR_7, VAR_12->recv.start, VAR_8);

            VAR_12->recv.pos = VAR_12->recv.start = VAR_7;
            VAR_12->recv.last = VAR_7 + VAR_8;
            VAR_12->recv.end = VAR_7 + VAR_8 * 2;

            VAR_9 = VAR_12->recv.end - VAR_12->recv.last;
        }

        VAR_8 = VAR_11->recv(VAR_11, VAR_12->recv.last, VAR_9);
        if (VAR_8 > 0) {
            VAR_12->recv.last += VAR_8;
            continue;
        } else if (VAR_8 == 0 || VAR_8 == 130) {
            break;
        } else {
            VAR_11->error = 1;
            goto check_recv_fail;
        }
    }

    VAR_10 = VAR_13->parse(VAR_13);

    FUNC_4(VAR_2, VAR_11->log, 0,
                   "http check parse rc: %i, peer: %V ",
                   VAR_10, &VAR_13->check_peer_addr->name);

    switch (VAR_10) {

    case 130:

        return;

    case 129:
        FUNC_5(VAR_3, VAR_6->log, 0,
                      "check protocol %V error with peer: %V ",
                      &VAR_13->conf->check_type_conf->name,
                      &VAR_13->check_peer_addr->name);

        FUNC_3(VAR_13, 0);
        break;

    case 128:


    default:
        FUNC_3(VAR_13, 1);
        break;
    }

    VAR_13->state = VAR_0;
    FUNC_1(VAR_13);
    return;

check_recv_fail:

    FUNC_3(VAR_13, 0);
    FUNC_1(VAR_13);
}
