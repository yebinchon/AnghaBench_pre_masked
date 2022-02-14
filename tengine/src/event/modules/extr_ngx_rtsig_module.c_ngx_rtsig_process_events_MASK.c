
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_13__ ;
typedef struct TYPE_14__ TYPE_12__ ;


struct timespec {int tv_sec; int tv_nsec; } ;
struct sigaction {int sa_mask; int sa_handler; } ;
struct TYPE_16__ {size_t si_fd; int si_band; } ;
typedef TYPE_1__ siginfo_t ;
typedef int ngx_uint_t ;
struct TYPE_17__ {int signo; } ;
typedef TYPE_2__ ngx_rtsig_conf_t ;
typedef int ngx_queue_t ;
typedef int ngx_msec_t ;
typedef int ngx_int_t ;
struct TYPE_18__ {int instance; int ready; int (* handler ) (TYPE_3__*) ;scalar_t__ active; scalar_t__ accept; } ;
typedef TYPE_3__ ngx_event_t ;
typedef scalar_t__ ngx_err_t ;
struct TYPE_19__ {int log; } ;
typedef TYPE_4__ ngx_cycle_t ;
struct TYPE_20__ {TYPE_3__* write; TYPE_3__* read; } ;
typedef TYPE_5__ ngx_connection_t ;
struct TYPE_15__ {TYPE_5__** files; int conf_ctx; } ;
struct TYPE_14__ {int process_events; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 TYPE_13__* VAR_18 ;
 scalar_t__ VAR_19 ;
 TYPE_12__ VAR_20 ;
 TYPE_2__* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,scalar_t__,char*,...) ;
 int FUNC_2 (int ,int ,int ,char*,int,size_t,int) ;
 int FUNC_3 (int ,int ,scalar_t__,char*,...) ;
 int FUNC_4 (struct sigaction*,int) ;
 int FUNC_5 (TYPE_3__*,int *) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_6 () ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_7 (int,struct sigaction*,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,TYPE_1__*,struct timespec*) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_3__*) ;

__attribute__((used)) static ngx_int_t
FUNC_12(ngx_cycle_t *VAR_28, ngx_msec_t VAR_29, ngx_uint_t VAR_30)
{
    int VAR_31;
    ngx_int_t VAR_32;
    ngx_err_t VAR_33;
    siginfo_t VAR_34;
    ngx_event_t *VAR_35, *VAR_36;
    ngx_queue_t *VAR_37;
    struct timespec VAR_38, *VAR_39;
    struct sigaction VAR_40;
    ngx_connection_t *VAR_41;
    ngx_rtsig_conf_t *VAR_42;

    if (VAR_29 == VAR_9) {
        VAR_39 = ((void*)0);

    } else {
        VAR_38.tv_sec = VAR_29 / 1000;
        VAR_38.tv_nsec = (VAR_29 % 1000) * 1000000;
        VAR_39 = &VAR_38;
    }

    FUNC_1(VAR_5, VAR_28->log, 0,
                   "rtsig timer: %M", VAR_29);



    VAR_31 = FUNC_9(&VAR_27, &VAR_34, VAR_39);

    if (VAR_31 == -1) {
        VAR_33 = VAR_19;

        FUNC_1(VAR_5, VAR_28->log, VAR_33,
                       "rtsig signo:%d", VAR_31);

        if (VAR_30 & VAR_10) {
            FUNC_6();
        }

        if (VAR_33 == VAR_1) {



            if (VAR_29 != VAR_9) {
                return VAR_0;
            }

            FUNC_3(VAR_4, VAR_28->log, VAR_33,
                          "sigtimedwait() returned EAGAIN without timeout");
            return VAR_3;
        }

        FUNC_3((VAR_33 == VAR_2) ? VAR_6 : VAR_4,
                      VAR_28->log, VAR_33, "sigtimedwait() failed");
        return VAR_3;
    }

    FUNC_2(VAR_5, VAR_28->log, 0,
                   "rtsig signo:%d fd:%d band:%04Xd",
                   VAR_31, VAR_34.si_fd, VAR_34.si_band);

    if (VAR_30 & VAR_10) {
        FUNC_6();
    }

    VAR_42 = FUNC_0(VAR_18->conf_ctx, VAR_23);

    if (VAR_31 == (int) VAR_42->signo || VAR_31 == (int) VAR_42->signo + 1) {

        if (VAR_25 && (ngx_uint_t) VAR_34.si_fd > VAR_26) {
            return VAR_7;
        }

        VAR_41 = VAR_18->files[VAR_34.si_fd];

        if (VAR_41 == ((void*)0)) {



            return VAR_7;
        }

        VAR_32 = VAR_31 - (int) VAR_42->signo;

        VAR_35 = VAR_41->read;

        if (VAR_35->instance != VAR_32) {






            FUNC_1(VAR_5, VAR_28->log, 0,
                           "rtsig: stale event %p", VAR_41);

            return VAR_7;
        }

        if ((VAR_34.si_band & (VAR_13|VAR_12|VAR_11)) && VAR_35->active) {

            VAR_35->ready = 1;

            if (VAR_30 & VAR_8) {
                VAR_37 = VAR_35->accept ? &VAR_21
                                    : &VAR_22;

                FUNC_5(VAR_35, VAR_37);

            } else {
                VAR_35->handler(VAR_35);
            }
        }

        VAR_36 = VAR_41->write;

        if ((VAR_34.si_band & (VAR_14|VAR_12|VAR_11)) && VAR_36->active) {

            VAR_36->ready = 1;

            if (VAR_30 & VAR_8) {
                FUNC_5(VAR_36, &VAR_22);

            } else {
                VAR_36->handler(VAR_36);
            }
        }

        return VAR_7;

    } else if (VAR_31 == VAR_15) {

        FUNC_6();

        return VAR_7;

    } else if (VAR_31 == VAR_16) {

        FUNC_3(VAR_4, VAR_28->log, 0,
                      "rt signal queue overflowed");



        FUNC_4(&VAR_40, sizeof(struct sigaction));
        VAR_40.sa_handler = VAR_17;
        FUNC_8(&VAR_40.sa_mask);

        if (FUNC_7(VAR_42->signo, &VAR_40, ((void*)0)) == -1) {
            FUNC_3(VAR_4, VAR_28->log, VAR_19,
                          "sigaction(%d, SIG_DFL) failed", VAR_42->signo);
        }

        if (FUNC_7(VAR_42->signo + 1, &VAR_40, ((void*)0)) == -1) {
            FUNC_3(VAR_4, VAR_28->log, VAR_19,
                          "sigaction(%d, SIG_DFL) failed", VAR_42->signo + 1);
        }

        VAR_25 = 1;
        VAR_26 = 0;
        VAR_20.process_events = VAR_24;

        return VAR_3;

    }

    FUNC_3(VAR_4, VAR_28->log, 0,
                  "sigtimedwait() returned unexpected signal: %d", VAR_31);

    return VAR_3;
}
