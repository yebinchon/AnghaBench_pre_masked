
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_15__ {TYPE_6__* connection; int connect_port; int connect_host; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_14__ {int * connection; } ;
struct TYPE_16__ {TYPE_1__ peer; } ;
typedef TYPE_3__ ngx_http_proxy_connect_upstream_t ;
struct TYPE_17__ {TYPE_3__* u; } ;
typedef TYPE_4__ ngx_http_proxy_connect_ctx_t ;
struct TYPE_18__ {int eof; scalar_t__ kq_errno; int error; int log; scalar_t__ write; scalar_t__ active; int pending_eof; } ;
typedef TYPE_5__ ngx_event_t ;
typedef scalar_t__ ngx_err_t ;
struct TYPE_19__ {int error; int fd; } ;
typedef TYPE_6__ ngx_connection_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (TYPE_5__*,int ,int ) ;
 int VAR_11 ;
 TYPE_4__* FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*,int ) ;
 int VAR_12 ;
 int FUNC_3 (int ,int ,scalar_t__,char*,int) ;
 int FUNC_4 (int ,int ,int ,char*,scalar_t__,int *,int *) ;
 int FUNC_5 (int ,int ,scalar_t__,char*) ;
 scalar_t__ VAR_13 ;
 int FUNC_6 (int ,char*,int,int ) ;

__attribute__((used)) static void
FUNC_7(ngx_http_request_t *VAR_14,
    ngx_event_t *VAR_15)
{
    int VAR_16;
    char VAR_17[1];
    ngx_err_t VAR_18;
    ngx_int_t VAR_19;
    ngx_connection_t *VAR_20;
    ngx_http_proxy_connect_ctx_t *VAR_21;
    ngx_http_proxy_connect_upstream_t *VAR_22;

    FUNC_4(VAR_4, VAR_15->log, 0,
                   "proxy_connect: check client, write event:%d, \"%V:%V\"",
                   VAR_15->write, &VAR_14->connect_host, &VAR_14->connect_port);

    VAR_20 = VAR_14->connection;
    VAR_21 = FUNC_1(VAR_14, VAR_12);
    VAR_22 = VAR_21->u;

    if (VAR_20->error) {
        if ((VAR_11 & VAR_9) && VAR_15->active) {

            VAR_19 = VAR_15->write ? VAR_10 : VAR_7;

            if (FUNC_0(VAR_15, VAR_19, 0) != VAR_6) {
                FUNC_2(VAR_14, VAR_22,
                                               VAR_3);
                return;
            }
        }

        FUNC_2(VAR_14, VAR_22,
                                               VAR_2);

        return;
    }
    VAR_16 = FUNC_6(VAR_20->fd, VAR_17, 1, VAR_0);

    VAR_18 = VAR_13;

    FUNC_3(VAR_4, VAR_15->log, VAR_18,
                   "proxy_connect: upstream recv(): %d", VAR_16);

    if (VAR_15->write && (VAR_16 >= 0 || VAR_18 == VAR_1)) {
        return;
    }

    if ((VAR_11 & VAR_9) && VAR_15->active) {

        VAR_19 = VAR_15->write ? VAR_10 : VAR_7;

        if (FUNC_0(VAR_15, VAR_19, 0) != VAR_6) {
            FUNC_2(VAR_14, VAR_22,
                                               VAR_3);
            return;
        }
    }

    if (VAR_16 > 0) {
        return;
    }

    if (VAR_16 == -1) {
        if (VAR_18 == VAR_1) {
            return;
        }

        VAR_15->error = 1;

    } else {
        VAR_18 = 0;
    }

    VAR_15->eof = 1;
    VAR_20->error = 1;

    if (VAR_22->peer.connection) {
        FUNC_5(VAR_5, VAR_15->log, VAR_18,
                      "proxy_connect: client prematurely closed connection, "
                      "so upstream connection is closed too");
        FUNC_2(VAR_14, VAR_22,
                                           VAR_2);
        return;
    }

    FUNC_5(VAR_5, VAR_15->log, VAR_18,
                  "proxy_connect: client prematurely closed connection");

    if (VAR_22->peer.connection == ((void*)0)) {
        FUNC_2(VAR_14, VAR_22,
                                           VAR_2);
    }
}
