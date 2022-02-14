
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_14__ ;
typedef struct TYPE_15__ TYPE_13__ ;


typedef int rtsig_nr ;
typedef int rtsig_max ;
typedef size_t ngx_uint_t ;
struct TYPE_17__ {size_t overflow_events; size_t overflow_test; scalar_t__ overflow_threshold; } ;
typedef TYPE_1__ ngx_rtsig_conf_t ;
typedef int ngx_queue_t ;
typedef int ngx_msec_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_18__ {int ready; int (* handler ) (TYPE_2__*) ;int closed; scalar_t__ active; scalar_t__ accept; } ;
typedef TYPE_2__ ngx_event_t ;
typedef scalar_t__ ngx_err_t ;
struct TYPE_19__ {scalar_t__ connection_n; int log; TYPE_4__** files; } ;
typedef TYPE_3__ ngx_cycle_t ;
struct TYPE_20__ {int fd; TYPE_2__* write; TYPE_2__* read; } ;
typedef TYPE_4__ ngx_connection_t ;
struct TYPE_21__ {int fd; int events; int revents; } ;
struct TYPE_16__ {int conf_ctx; } ;
struct TYPE_15__ {scalar_t__ (* process_events ) (TYPE_3__*,int ,size_t) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 TYPE_14__* VAR_17 ;
 scalar_t__ VAR_18 ;
 TYPE_13__ VAR_19 ;
 TYPE_1__* FUNC_0 (int ,int ) ;
 scalar_t__ VAR_20 ;
 int FUNC_1 (int ,int ,int ,char*) ;
 int FUNC_2 (int ,int ,int ,char*,int) ;
 int FUNC_3 (int ,int ,int ,char*,int,int) ;
 int FUNC_4 (int ,int ,int ,char*) ;
 int FUNC_5 (TYPE_2__*,int *) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ FUNC_6 (TYPE_3__*,int ,size_t) ;
 int FUNC_7 () ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 TYPE_7__* VAR_26 ;
 int FUNC_8 (TYPE_7__*,size_t,int ) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (int*,int,int*,size_t*,int *,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_12(ngx_cycle_t *VAR_27, ngx_msec_t VAR_28,
    ngx_uint_t VAR_29)
{
    int VAR_30[2], VAR_31, VAR_32, VAR_33, VAR_34;
    size_t VAR_35;
    ngx_err_t VAR_36;
    ngx_uint_t VAR_37, VAR_38, VAR_39;
    ngx_event_t *VAR_40, *VAR_41;
    ngx_queue_t *VAR_42;
    ngx_connection_t *VAR_43;
    ngx_rtsig_conf_t *VAR_44;

    FUNC_1(VAR_6, VAR_27->log, 0,
                   "rtsig process overflow");

    VAR_44 = FUNC_0(VAR_17->conf_ctx, VAR_23);

    VAR_37 = 0;

    for ( ;; ) {

        VAR_38 = 0;
        while (VAR_38 < VAR_44->overflow_events) {

            if (VAR_25 == VAR_27->connection_n) {
                break;
            }

            VAR_43 = VAR_27->files[VAR_25++];

            if (VAR_43 == ((void*)0) || VAR_43->fd == -1) {
                continue;
            }

            VAR_33 = 0;

            if (VAR_43->read->active && VAR_43->read->handler) {
                VAR_33 |= VAR_13;
            }

            if (VAR_43->write->active && VAR_43->write->handler) {
                VAR_33 |= VAR_15;
            }

            if (VAR_33 == 0) {
                continue;
            }

            VAR_26[VAR_38].fd = VAR_43->fd;
            VAR_26[VAR_38].events = VAR_33;
            VAR_26[VAR_38].revents = 0;
            VAR_38++;
        }

        if (VAR_38 == 0) {
            break;
        }

        for ( ;; ) {
            VAR_34 = FUNC_8(VAR_26, VAR_38, 0);

            FUNC_2(VAR_6, VAR_27->log, 0,
                           "rtsig overflow poll:%d", VAR_34);

            if (VAR_34 == -1) {
                VAR_36 = VAR_18;
                FUNC_4((VAR_36 == VAR_3) ? VAR_7 : VAR_5,
                              VAR_27->log, 0,
                              "poll() failed while the overflow recover");

                if (VAR_36 == VAR_3) {
                    continue;
                }
            }

            break;
        }

        if (VAR_34 <= 0) {
            continue;
        }

        for (VAR_39 = 0; VAR_39 < VAR_38; VAR_39++) {
            VAR_43 = VAR_27->files[VAR_26[VAR_39].fd];

            if (VAR_43 == ((void*)0)) {
                continue;
            }

            VAR_40 = VAR_43->read;

            if (VAR_40->active
                && !VAR_40->closed
                && VAR_40->handler
                && (VAR_26[VAR_39].revents
                                          & (VAR_13|VAR_11|VAR_12|VAR_14)))
            {
                VAR_37++;

                VAR_40->ready = 1;

                if (VAR_29 & VAR_9) {
                    VAR_42 = VAR_40->accept ? &VAR_21
                                        : &VAR_22;

                    FUNC_5(VAR_40, VAR_42);

                } else {
                    VAR_40->handler(VAR_40);
                }
            }

            VAR_41 = VAR_43->write;

            if (VAR_41->active
                && !VAR_41->closed
                && VAR_41->handler
                && (VAR_26[VAR_39].revents
                                         & (VAR_15|VAR_11|VAR_12|VAR_14)))
            {
                VAR_37++;

                VAR_41->ready = 1;

                if (VAR_29 & VAR_9) {
                    FUNC_5(VAR_41, &VAR_22);

                } else {
                    VAR_41->handler(VAR_41);
                }
            }
        }

        if (VAR_37 >= VAR_44->overflow_test) {

            if (VAR_20) {
                VAR_30[0] = VAR_0;
                VAR_30[1] = VAR_1;
                VAR_35 = sizeof(VAR_31);

                if (FUNC_11(VAR_30, 2, &VAR_31, &VAR_35, ((void*)0), 0) == -1) {
                    FUNC_4(VAR_5, VAR_27->log, VAR_16,
                                  "sysctl(KERN_RTSIGMAX) failed");
                    return VAR_4;
                }


                VAR_30[1] = VAR_2;
                VAR_35 = sizeof(VAR_32);

                if (FUNC_11(VAR_30, 2, &VAR_32, &VAR_35, ((void*)0), 0) == -1) {
                    FUNC_4(VAR_5, VAR_27->log, VAR_16,
                                  "sysctl(KERN_RTSIGNR) failed");
                    return VAR_4;
                }







                if (VAR_31 / (int) VAR_44->overflow_threshold < VAR_32) {
                    FUNC_3(VAR_6, VAR_27->log, 0,
                                   "rtsig queue state: %d/%d",
                                   VAR_32, VAR_31);
                    while (FUNC_6(VAR_27, 0, VAR_29) == VAR_8)
                    {

                    }
                }

            } else {






                while (FUNC_6(VAR_27, 0, VAR_29) == VAR_8) {

                }
            }

            VAR_37 = 0;
        }
    }

    if (VAR_29 & VAR_10) {
        FUNC_7();
    }

    FUNC_4(VAR_5, VAR_27->log, 0,
                  "rt signal queue overflow recovered");

    VAR_24 = 0;
    VAR_19.process_events = FUNC_6;

    return VAR_8;
}
