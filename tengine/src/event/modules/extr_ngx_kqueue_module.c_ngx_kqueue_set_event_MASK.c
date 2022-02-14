
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_short ;
struct timespec {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
struct kevent {short filter; int fflags; scalar_t__ data; int udata; scalar_t__ flags; int ident; } ;
typedef int ngx_uint_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_4__ {uintptr_t instance; size_t index; int log; scalar_t__ available; TYPE_2__* data; } ;
typedef TYPE_1__ ngx_event_t ;
struct TYPE_5__ {int fd; } ;
typedef TYPE_2__ ngx_connection_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (uintptr_t) ;
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
 struct kevent* VAR_15 ;
 int FUNC_1 (int ,struct kevent*,int,int *,int ,struct timespec*) ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_2 (int ,int ,int ,char*) ;
 int FUNC_3 (int ,int ,int ,char*,int ,scalar_t__,int) ;
 int FUNC_4 (int ,int ,int ,char*) ;

__attribute__((used)) static ngx_int_t
FUNC_5(ngx_event_t *VAR_20, ngx_int_t VAR_21, ngx_uint_t VAR_22)
{
    struct kevent *VAR_23;
    struct timespec VAR_24;
    ngx_connection_t *VAR_25;

    VAR_25 = VAR_20->data;

    FUNC_3(VAR_4, VAR_20->log, 0,
                   "kevent set event: %d: ft:%i fl:%04Xi",
                   VAR_25->fd, VAR_21, VAR_22);

    if (VAR_17 >= VAR_16) {
        FUNC_4(VAR_5, VAR_20->log, 0,
                      "kqueue change list is filled up");

        VAR_24.tv_sec = 0;
        VAR_24.tv_nsec = 0;

        if (FUNC_1(VAR_19, VAR_15, (int) VAR_17, ((void*)0), 0, &VAR_24)
            == -1)
        {
            FUNC_4(VAR_3, VAR_20->log, VAR_18, "kevent() failed");
            return VAR_1;
        }

        VAR_17 = 0;
    }

    VAR_23 = &VAR_15[VAR_17];

    VAR_23->ident = VAR_25->fd;
    VAR_23->filter = (short) VAR_21;
    VAR_23->flags = (u_short) VAR_22;
    VAR_23->udata = FUNC_0 ((uintptr_t) VAR_20 | VAR_20->instance);

    if (VAR_21 == VAR_0) {
        VAR_23->fflags = VAR_9|VAR_14|VAR_10
                                 |VAR_8|VAR_12




                      ;
        VAR_23->data = 0;

    } else {
        VAR_23->fflags = 0;
        VAR_23->data = 0;

    }

    VAR_20->index = VAR_17;
    VAR_17++;

    if (VAR_22 & VAR_2) {
        VAR_24.tv_sec = 0;
        VAR_24.tv_nsec = 0;

        FUNC_2(VAR_4, VAR_20->log, 0, "kevent flush");

        if (FUNC_1(VAR_19, VAR_15, (int) VAR_17, ((void*)0), 0, &VAR_24)
            == -1)
        {
            FUNC_4(VAR_3, VAR_20->log, VAR_18, "kevent() failed");
            return VAR_1;
        }

        VAR_17 = 0;
    }

    return VAR_7;
}
