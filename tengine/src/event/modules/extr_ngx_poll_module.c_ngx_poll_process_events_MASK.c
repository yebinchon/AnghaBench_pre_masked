
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_12__ ;


typedef int u_int ;
typedef size_t ngx_uint_t ;
typedef int ngx_queue_t ;
typedef scalar_t__ ngx_msec_t ;
typedef int ngx_int_t ;
struct TYPE_15__ {int ready; scalar_t__ active; scalar_t__ accept; } ;
typedef TYPE_1__ ngx_event_t ;
typedef int ngx_err_t ;
struct TYPE_16__ {TYPE_7__* log; } ;
typedef TYPE_2__ ngx_cycle_t ;
struct TYPE_17__ {int fd; TYPE_1__* write; TYPE_1__* read; } ;
typedef TYPE_3__ ngx_connection_t ;
struct TYPE_19__ {int log_level; } ;
struct TYPE_18__ {int fd; int revents; int events; } ;
struct TYPE_14__ {TYPE_3__** files; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_4__* VAR_14 ;
 size_t VAR_15 ;
 TYPE_12__* VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_0 (int ,TYPE_7__*,int ,char*,scalar_t__) ;
 int FUNC_1 (int ,TYPE_7__*,int ,char*,int,size_t) ;
 int FUNC_2 (int ,TYPE_7__*,int ,char*,size_t,int,int ) ;
 int FUNC_3 (int ,TYPE_7__*,int ,char*,size_t,int,int ,int) ;
 int FUNC_4 (size_t,TYPE_7__*,int,char*,...) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_4__*,int ,int) ;

__attribute__((used)) static ngx_int_t
FUNC_8(ngx_cycle_t *VAR_21, ngx_msec_t VAR_22, ngx_uint_t VAR_23)
{
    int VAR_24, VAR_25;
    ngx_err_t VAR_26;
    ngx_uint_t VAR_27, VAR_28, VAR_29;
    ngx_event_t *VAR_30;
    ngx_queue_t *VAR_31;
    ngx_connection_t *VAR_32;
    FUNC_0(VAR_4, VAR_21->log, 0, "poll timer: %M", VAR_22);

    VAR_24 = FUNC_7(VAR_14, (u_int) VAR_15, (int) VAR_22);

    VAR_26 = (VAR_24 == -1) ? VAR_17 : 0;

    if (VAR_23 & VAR_8 || VAR_18) {
        FUNC_6();
    }

    FUNC_1(VAR_4, VAR_21->log, 0,
                   "poll ready %d of %ui", VAR_24, VAR_15);

    if (VAR_26) {
        if (VAR_26 == VAR_0) {

            if (VAR_18) {
                VAR_18 = 0;
                return VAR_6;
            }

            VAR_29 = VAR_5;

        } else {
            VAR_29 = VAR_2;
        }

        FUNC_4(VAR_29, VAR_21->log, VAR_26, "poll() failed");
        return VAR_1;
    }

    if (VAR_24 == 0) {
        if (VAR_22 != VAR_7) {
            return VAR_6;
        }

        FUNC_4(VAR_2, VAR_21->log, 0,
                      "poll() returned no events without timeout");
        return VAR_1;
    }

    for (VAR_27 = 0; VAR_27 < VAR_15 && VAR_24; VAR_27++) {

        VAR_25 = VAR_14[VAR_27].revents;


        FUNC_3(VAR_4, VAR_21->log, 0,
                       "poll: %ui: fd:%d ev:%04Xd rev:%04Xd",
                       VAR_27, VAR_14[VAR_27].fd, VAR_14[VAR_27].events, VAR_25);
        if (VAR_25 & VAR_12) {
            FUNC_4(VAR_2, VAR_21->log, 0,
                          "poll() error fd:%d ev:%04Xd rev:%04Xd",
                          VAR_14[VAR_27].fd, VAR_14[VAR_27].events, VAR_25);
        }

        if (VAR_25 & ~(VAR_11|VAR_13|VAR_9|VAR_10|VAR_12)) {
            FUNC_4(VAR_2, VAR_21->log, 0,
                          "strange poll() events fd:%d ev:%04Xd rev:%04Xd",
                          VAR_14[VAR_27].fd, VAR_14[VAR_27].events, VAR_25);
        }

        if (VAR_14[VAR_27].fd == -1) {




            continue;
        }

        VAR_32 = VAR_16->files[VAR_14[VAR_27].fd];

        if (VAR_32->fd == -1) {
            FUNC_4(VAR_2, VAR_21->log, 0, "unexpected event");






            if (VAR_27 == VAR_15 - 1) {
                VAR_15--;
            } else {
                VAR_14[VAR_27].fd = -1;
            }

            continue;
        }

        if (VAR_25 & (VAR_9|VAR_10|VAR_12)) {






            VAR_25 |= VAR_11|VAR_13;
        }

        VAR_28 = 0;

        if ((VAR_25 & VAR_11) && VAR_32->read->active) {
            VAR_28 = 1;

            VAR_30 = VAR_32->read;
            VAR_30->ready = 1;

            VAR_31 = VAR_30->accept ? &VAR_19
                               : &VAR_20;

            FUNC_5(VAR_30, VAR_31);
        }

        if ((VAR_25 & VAR_13) && VAR_32->write->active) {
            VAR_28 = 1;

            VAR_30 = VAR_32->write;
            VAR_30->ready = 1;

            FUNC_5(VAR_30, &VAR_20);
        }

        if (VAR_28) {
            VAR_24--;
            continue;
        }
    }

    if (VAR_24 != 0) {
        FUNC_4(VAR_2, VAR_21->log, 0, "poll ready != events");
    }

    return VAR_6;
}
