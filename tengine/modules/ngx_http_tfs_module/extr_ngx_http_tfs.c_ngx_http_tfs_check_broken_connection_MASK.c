
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_10__ {void* client_abort; } ;
typedef TYPE_1__ ngx_http_tfs_t ;
struct TYPE_11__ {TYPE_4__* connection; int uri; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_12__ {int eof; scalar_t__ kq_errno; int error; int log; scalar_t__ write; scalar_t__ active; int pending_eof; } ;
typedef TYPE_3__ ngx_event_t ;
typedef scalar_t__ ngx_err_t ;
struct TYPE_13__ {int error; int fd; } ;
typedef TYPE_4__ ngx_connection_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_3__*,int ,int ) ;
 int VAR_9 ;
 TYPE_1__* FUNC_1 (TYPE_2__*,int ) ;
 int VAR_10 ;
 int FUNC_2 (int ,int ,scalar_t__,char*,int) ;
 int FUNC_3 (int ,int ,int ,char*,scalar_t__,int *) ;
 int FUNC_4 (int ,int ,scalar_t__,char*) ;
 scalar_t__ VAR_11 ;
 int FUNC_5 (int ,char*,int,int ) ;

__attribute__((used)) static void
FUNC_6(ngx_http_request_t *VAR_12,
    ngx_event_t *VAR_13)
{
    int VAR_14;
    char VAR_15[1];
    ngx_err_t VAR_16;
    ngx_int_t VAR_17;
    ngx_http_tfs_t *VAR_18;
    ngx_connection_t *VAR_19;

    FUNC_3(VAR_3, VAR_13->log, 0,
                   "http tfs check client, write event:%d, \"%V\"",
                   VAR_13->write, &VAR_12->uri);

    VAR_19 = VAR_12->connection;
    VAR_18 = FUNC_1(VAR_12, VAR_10);

    if (VAR_19->error) {
        if ((VAR_9 & VAR_7) && VAR_13->active) {

            VAR_17 = VAR_13->write ? VAR_8 : VAR_5;

            FUNC_0(VAR_13, VAR_17, 0);
        }

        VAR_18->client_abort = VAR_2;

        return;
    }
    VAR_14 = FUNC_5(VAR_19->fd, VAR_15, 1, VAR_0);

    VAR_16 = VAR_11;

    FUNC_2(VAR_3, VAR_13->log, VAR_16,
                   "http tfs recv(): %d", VAR_14);

    if (VAR_13->write && (VAR_14 >= 0 || VAR_16 == VAR_1)) {
        return;
    }

    if ((VAR_9 & VAR_7) && VAR_13->active) {

        VAR_17 = VAR_13->write ? VAR_8 : VAR_5;

        FUNC_0(VAR_13, VAR_17, 0);
    }

    if (VAR_14 > 0) {
        return;
    }

    if (VAR_14 == -1) {
        if (VAR_16 == VAR_1) {
            return;
        }

        VAR_13->error = 1;

    } else {
        VAR_16 = 0;
    }

    VAR_13->eof = 1;
    VAR_19->error = 1;

    FUNC_4(VAR_4, VAR_13->log, VAR_16,
                  "client prematurely closed connection");

    VAR_18->client_abort = VAR_2;
}
