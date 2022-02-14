
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int socklen_t ;
typedef int ngx_int_t ;
struct TYPE_12__ {int * connection; } ;
struct TYPE_13__ {TYPE_1__ peer; int cacheable; } ;
typedef TYPE_2__ ngx_http_upstream_t ;
struct TYPE_14__ {scalar_t__ stream; TYPE_2__* upstream; TYPE_5__* connection; int uri; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_15__ {int eof; scalar_t__ kq_errno; int error; int log; scalar_t__ write; scalar_t__ active; int pending_eof; } ;
typedef TYPE_4__ ngx_event_t ;
typedef scalar_t__ ngx_err_t ;
struct TYPE_16__ {int error; scalar_t__ num_async_fds; scalar_t__ async_enable; int fd; } ;
typedef TYPE_5__ ngx_connection_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ,int ,int ,void*,int*) ;
 int FUNC_1 (TYPE_5__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_4__*,int ,int ) ;
 int VAR_15 ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*,int ) ;
 int FUNC_4 (int ,int ,scalar_t__,char*,int) ;
 int FUNC_5 (int ,int ,int ,char*,scalar_t__,int *) ;
 int FUNC_6 (int ,int ,scalar_t__,char*) ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_7 (int ,char*,int,int ) ;

__attribute__((used)) static void
FUNC_8(ngx_http_request_t *VAR_18,
    ngx_event_t *VAR_19)
{
    int VAR_20;
    char VAR_21[1];
    ngx_err_t VAR_22;
    ngx_int_t VAR_23;
    ngx_connection_t *VAR_24;
    ngx_http_upstream_t *VAR_25;

    FUNC_5(VAR_5, VAR_19->log, 0,
                   "http upstream check client, write event:%d, \"%V\"",
                   VAR_19->write, &VAR_18->uri);

    VAR_24 = VAR_18->connection;
    VAR_25 = VAR_18->upstream;

    if (VAR_24->error) {
        if ((VAR_15 & VAR_11) && VAR_19->active) {

            VAR_23 = VAR_19->write ? VAR_12 : VAR_8;
            if (FUNC_2(VAR_19, VAR_23, 0) != VAR_7) {
                FUNC_3(VAR_18, VAR_25,
                                               VAR_4);
                return;
            }
        }

        if (!VAR_25->cacheable) {
            FUNC_3(VAR_18, VAR_25,
                                               VAR_3);
        }

        return;
    }
    VAR_20 = FUNC_7(VAR_24->fd, VAR_21, 1, VAR_0);

    VAR_22 = VAR_16;

    FUNC_4(VAR_5, VAR_19->log, VAR_22,
                   "http upstream recv(): %d", VAR_20);

    if (VAR_19->write && (VAR_20 >= 0 || VAR_22 == VAR_2)) {
        return;
    }

    if ((VAR_15 & VAR_11) && VAR_19->active) {

        VAR_23 = VAR_19->write ? VAR_12 : VAR_8;
        if (FUNC_2(VAR_19, VAR_23, 0) != VAR_7) {
            FUNC_3(VAR_18, VAR_25,
                                               VAR_4);
            return;
        }
    }

    if (VAR_20 > 0) {
        return;
    }

    if (VAR_20 == -1) {
        if (VAR_22 == VAR_2) {
            return;
        }

        VAR_19->error = 1;

    } else {
        VAR_22 = 0;
    }

    VAR_19->eof = 1;
    VAR_24->error = 1;

    if (!VAR_25->cacheable && VAR_25->peer.connection) {
        FUNC_6(VAR_6, VAR_19->log, VAR_22,
                      "client prematurely closed connection, "
                      "so upstream connection is closed too");
        FUNC_3(VAR_18, VAR_25,
                                           VAR_3);
        return;
    }

    FUNC_6(VAR_6, VAR_19->log, VAR_22,
                  "client prematurely closed connection");

    if (VAR_25->peer.connection == ((void*)0)) {
        FUNC_3(VAR_18, VAR_25,
                                           VAR_3);
    }
}
