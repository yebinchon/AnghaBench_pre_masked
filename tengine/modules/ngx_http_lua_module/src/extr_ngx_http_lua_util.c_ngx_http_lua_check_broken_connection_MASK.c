
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_7__ {scalar_t__ stream; TYPE_3__* connection; int uri; } ;
typedef TYPE_1__ ngx_http_request_t ;
struct TYPE_8__ {int eof; scalar_t__ kq_errno; int error; int log; scalar_t__ write; scalar_t__ active; int pending_eof; } ;
typedef TYPE_2__ ngx_event_t ;
typedef scalar_t__ ngx_err_t ;
struct TYPE_9__ {int fd; scalar_t__ error; } ;
typedef TYPE_3__ ngx_connection_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (TYPE_2__*,scalar_t__,int ) ;
 int VAR_11 ;
 int FUNC_2 (int ,int ,scalar_t__,char*,int) ;
 int FUNC_3 (int ,int ,int ,char*,scalar_t__,int *) ;
 int FUNC_4 (int ,int ,scalar_t__,char*) ;
 scalar_t__ VAR_12 ;
 int FUNC_5 (int ,char*,int,int ) ;

ngx_int_t
FUNC_6(ngx_http_request_t *VAR_13, ngx_event_t *VAR_14)
{
    int VAR_15;
    char VAR_16[1];
    ngx_err_t VAR_17;
    ngx_int_t VAR_18;
    ngx_connection_t *VAR_19;

    FUNC_3(VAR_4, VAR_14->log, 0,
                   "http lua check client, write event:%d, \"%V\"",
                   VAR_14->write, &VAR_13->uri);

    VAR_19 = VAR_13->connection;

    if (VAR_19->error) {
        if ((VAR_11 & VAR_9) && VAR_14->active) {

            VAR_18 = VAR_14->write ? VAR_10 : VAR_7;

            if (FUNC_1(VAR_14, VAR_18, 0) != VAR_6) {
                return VAR_3;
            }
        }

        return VAR_2;
    }
    VAR_15 = FUNC_5(VAR_19->fd, VAR_16, 1, VAR_0);

    VAR_17 = VAR_12;

    FUNC_2(VAR_4, VAR_14->log, VAR_17,
                   "http lua recv(): %d", VAR_15);

    if (VAR_14->write && (VAR_15 >= 0 || VAR_17 == VAR_1)) {
        return VAR_6;
    }

    if ((VAR_11 & VAR_9) && VAR_14->active) {
        FUNC_0("event is active");

        VAR_18 = VAR_14->write ? VAR_10 : VAR_7;


        if (FUNC_1(VAR_14, VAR_18, 0) != VAR_6) {
            return VAR_3;
        }

    }

    FUNC_0("HERE %d", (int) VAR_15);

    if (VAR_15 > 0) {
        return VAR_6;
    }

    if (VAR_15 == -1) {
        if (VAR_17 == VAR_1) {
            FUNC_0("HERE");
            return VAR_6;
        }

        VAR_14->error = 1;

    } else {
        VAR_17 = 0;
    }

    VAR_14->eof = 1;

    FUNC_4(VAR_5, VAR_14->log, VAR_17,
                  "client prematurely closed connection");

    return VAR_2;
}
