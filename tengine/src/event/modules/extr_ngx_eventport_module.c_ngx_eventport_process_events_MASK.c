
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u_int ;
struct timespec {int tv_sec; int tv_nsec; } ;
typedef int ngx_uint_t ;
typedef int ngx_queue_t ;
typedef int ngx_msec_t ;
typedef uintptr_t ngx_int_t ;
struct TYPE_11__ {uintptr_t instance; int ready; int (* handler ) (TYPE_1__*) ;int log; int accept; int closed; int active; TYPE_3__* data; } ;
typedef TYPE_1__ ngx_event_t ;
typedef scalar_t__ ngx_err_t ;
struct TYPE_12__ {int log; } ;
typedef TYPE_2__ ngx_cycle_t ;
struct TYPE_13__ {int fd; TYPE_1__* write; TYPE_1__* read; } ;
typedef TYPE_3__ ngx_connection_t ;
struct TYPE_14__ {int portev_source; int portev_events; scalar_t__ portev_object; TYPE_1__* portev_user; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 uintptr_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 uintptr_t VAR_6 ;
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
 TYPE_7__* VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_0 (int ,int ,int ,char*,...) ;
 int FUNC_1 (int ,int ,int ,char*,int,int) ;
 int FUNC_2 (int,int ,scalar_t__,char*,...) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_4 () ;
 int VAR_23 ;
 int FUNC_5 (int ,int const,int ,int,void*) ;
 int FUNC_6 (int ,TYPE_7__*,int,int*,struct timespec*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;

__attribute__((used)) static ngx_int_t
FUNC_10(ngx_cycle_t *VAR_24, ngx_msec_t VAR_25,
    ngx_uint_t VAR_26)
{
    int VAR_27, VAR_28;
    u_int VAR_29;
    ngx_err_t VAR_30;
    ngx_int_t VAR_31;
    ngx_uint_t VAR_32, VAR_33;
    ngx_event_t *VAR_34, *VAR_35, *VAR_36;
    ngx_queue_t *VAR_37;
    ngx_connection_t *VAR_38;
    struct timespec VAR_39, *VAR_40;

    if (VAR_25 == VAR_8) {
        VAR_40 = ((void*)0);

    } else {
        VAR_39.tv_sec = VAR_25 / 1000;
        VAR_39.tv_nsec = (VAR_25 % 1000) * 1000000;
        VAR_40 = &VAR_39;
    }

    FUNC_0(VAR_4, VAR_24->log, 0,
                   "eventport timer: %M", VAR_25);

    VAR_29 = 1;

    VAR_27 = FUNC_6(VAR_16, VAR_17, (u_int) VAR_18, &VAR_29, VAR_40);

    VAR_30 = VAR_20;

    if (VAR_26 & VAR_9) {
        FUNC_4();
    }

    if (VAR_27 == -1) {
        if (VAR_30 == VAR_0) {
            if (VAR_25 != VAR_8) {
                return VAR_6;
            }

            FUNC_2(VAR_3, VAR_24->log, 0,
                          "port_getn() returned no events without timeout");
            return VAR_2;
        }

        VAR_33 = (VAR_30 == VAR_1) ? VAR_5 : VAR_3;
        FUNC_2(VAR_33, VAR_24->log, VAR_30, "port_getn() failed");
        return VAR_2;
    }

    if (VAR_29 == 0) {
        if (VAR_25 != VAR_8) {
            return VAR_6;
        }

        FUNC_2(VAR_3, VAR_24->log, 0,
                      "port_getn() returned no events without timeout");
        return VAR_2;
    }

    for (VAR_32 = 0; VAR_32 < VAR_29; VAR_32++) {

        if (VAR_17[VAR_32].portev_source == VAR_15) {
            FUNC_4();
            continue;
        }

        VAR_34 = VAR_17[VAR_32].portev_user;

        switch (VAR_17[VAR_32].portev_source) {

        case 129:

            VAR_31 = (uintptr_t) VAR_34 & 1;
            VAR_34 = (ngx_event_t *) ((uintptr_t) VAR_34 & (uintptr_t) ~1);

            if (VAR_34->closed || VAR_34->instance != VAR_31) {






                FUNC_0(VAR_4, VAR_24->log, 0,
                               "eventport: stale event %p", VAR_34);
                continue;
            }

            VAR_28 = VAR_17[VAR_32].portev_events;

            FUNC_1(VAR_4, VAR_24->log, 0,
                           "eventport: fd:%d, ev:%04Xd",
                           (int) VAR_17[VAR_32].portev_object, VAR_28);

            if (VAR_28 & (VAR_10|VAR_11|VAR_13)) {
                FUNC_1(VAR_4, VAR_24->log, 0,
                               "port_getn() error fd:%d ev:%04Xd",
                               (int) VAR_17[VAR_32].portev_object, VAR_28);
            }

            if (VAR_28 & ~(VAR_12|VAR_14|VAR_10|VAR_11|VAR_13)) {
                FUNC_2(VAR_3, VAR_24->log, 0,
                              "strange port_getn() events fd:%d ev:%04Xd",
                              (int) VAR_17[VAR_32].portev_object, VAR_28);
            }

            if (VAR_28 & (VAR_10|VAR_11|VAR_13)) {






                VAR_28 |= VAR_12|VAR_14;
            }

            VAR_38 = VAR_34->data;
            VAR_35 = VAR_38->read;
            VAR_36 = VAR_38->write;

            VAR_35->active = 0;
            VAR_36->active = 0;

            if (VAR_28 & VAR_12) {
                VAR_35->ready = 1;

                if (VAR_26 & VAR_7) {
                    VAR_37 = VAR_35->accept ? &VAR_21
                                        : &VAR_22;

                    FUNC_3(VAR_35, VAR_37);

                } else {
                    VAR_35->handler(VAR_35);

                    if (VAR_34->closed || VAR_34->instance != VAR_31) {
                        continue;
                    }
                }

                if (VAR_35->accept) {
                    if (VAR_23) {
                        VAR_19 = 1;
                        continue;
                    }

                    if (FUNC_5(VAR_16, 129, VAR_38->fd, VAR_12,
                                       (void *) ((uintptr_t) VAR_34 | VAR_34->instance))
                        == -1)
                    {
                        FUNC_2(VAR_3, VAR_34->log, VAR_20,
                                      "port_associate() failed");
                        return VAR_2;
                    }
                }
            }

            if (VAR_28 & VAR_14) {
                VAR_36->ready = 1;

                if (VAR_26 & VAR_7) {
                    FUNC_3(VAR_36, &VAR_22);

                } else {
                    VAR_36->handler(VAR_36);
                }
            }

            continue;

        case 128:

            VAR_34->handler(VAR_34);

            continue;

        default:
            FUNC_2(VAR_3, VAR_24->log, 0,
                          "unexpected eventport object %d",
                          (int) VAR_17[VAR_32].portev_object);
            continue;
        }
    }

    return VAR_6;
}
