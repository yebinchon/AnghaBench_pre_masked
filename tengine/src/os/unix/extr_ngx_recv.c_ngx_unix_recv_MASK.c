
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
typedef scalar_t__ ssize_t ;
struct TYPE_5__ {scalar_t__ available; size_t kq_errno; int eof; int error; scalar_t__ ready; scalar_t__ pending_eof; } ;
typedef TYPE_1__ ngx_event_t ;
typedef scalar_t__ ngx_err_t ;
struct TYPE_6__ {int log; scalar_t__ fd; TYPE_1__* read; } ;
typedef TYPE_2__ ngx_connection_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (TYPE_2__*,scalar_t__,char*) ;
 int VAR_8 ;
 int FUNC_1 (int ,int ,scalar_t__,char*) ;
 int FUNC_2 (int ,int ,int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_3 (int ,int ,int ,char*,scalar_t__,scalar_t__,size_t) ;
 int FUNC_4 (size_t) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_5 (scalar_t__,int *,size_t,int ) ;

ssize_t
FUNC_6(ngx_connection_t *VAR_11, u_char *VAR_12, size_t VAR_13)
{
    ssize_t VAR_14;
    ngx_err_t VAR_15;
    ngx_event_t *VAR_16;

    VAR_16 = VAR_11->read;
    do {
        VAR_14 = FUNC_5(VAR_11->fd, VAR_12, VAR_13, 0);

        FUNC_3(VAR_4, VAR_11->log, 0,
                       "recv: fd:%d %z of %uz", VAR_11->fd, VAR_14, VAR_13);

        if (VAR_14 == 0) {
            VAR_16->ready = 0;
            VAR_16->eof = 1;
            return 0;
        }

        if (VAR_14 > 0) {
            if ((size_t) VAR_14 < VAR_13
                && !(VAR_8 & VAR_6))
            {
                VAR_16->ready = 0;
            }

            return VAR_14;
        }

        VAR_15 = VAR_9;

        if (VAR_15 == VAR_1 || VAR_15 == VAR_2) {
            FUNC_1(VAR_4, VAR_11->log, VAR_15,
                           "recv() not ready");
            VAR_14 = VAR_0;

        } else {
            VAR_14 = FUNC_0(VAR_11, VAR_15, "recv() failed");
            break;
        }

    } while (VAR_15 == VAR_2);

    VAR_16->ready = 0;

    if (VAR_14 == VAR_3) {
        VAR_16->error = 1;
    }

    return VAR_14;
}
