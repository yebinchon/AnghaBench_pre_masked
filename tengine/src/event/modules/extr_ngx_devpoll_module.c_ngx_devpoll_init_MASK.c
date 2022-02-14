
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct pollfd {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef int ngx_msec_t ;
typedef int ngx_int_t ;
typedef int ngx_event_t ;
struct TYPE_6__ {int changes; int events; } ;
typedef TYPE_1__ ngx_devpoll_conf_t ;
struct TYPE_7__ {int log; int conf_ctx; } ;
typedef TYPE_2__ ngx_cycle_t ;
struct TYPE_8__ {int actions; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int VAR_9 ;
 int * VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int * FUNC_0 (int,int ) ;
 int VAR_14 ;
 TYPE_4__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 TYPE_1__* FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int VAR_19 ;
 int FUNC_3 (int ,int ,int ,char*) ;
 int VAR_20 ;
 int FUNC_4 (char*,int ) ;
 scalar_t__ FUNC_5 (int,int *,size_t) ;

__attribute__((used)) static ngx_int_t
FUNC_6(ngx_cycle_t *VAR_21, ngx_msec_t VAR_22)
{
    size_t VAR_23;
    ngx_devpoll_conf_t *VAR_24;

    VAR_24 = FUNC_1(VAR_21->conf_ctx, VAR_14);

    if (VAR_9 == -1) {
        VAR_9 = FUNC_4("/dev/poll", VAR_6);

        if (VAR_9 == -1) {
            FUNC_3(VAR_2, VAR_21->log, VAR_16,
                          "open(/dev/poll) failed");
            return VAR_0;
        }
    }

    if (VAR_11 < VAR_24->changes) {
        if (VAR_12) {
            VAR_23 = VAR_12 * sizeof(struct pollfd);
            if (FUNC_5(VAR_9, VAR_8, VAR_23) != (ssize_t) VAR_23) {
                FUNC_3(VAR_1, VAR_21->log, VAR_16,
                              "write(/dev/poll) failed");
                return VAR_0;
            }

            VAR_12 = 0;
        }

        if (VAR_8) {
            FUNC_2(VAR_8);
        }

        VAR_8 = FUNC_0(sizeof(struct pollfd) * VAR_24->changes,
                                VAR_21->log);
        if (VAR_8 == ((void*)0)) {
            return VAR_0;
        }

        if (VAR_7) {
            FUNC_2(VAR_7);
        }

        VAR_7 = FUNC_0(sizeof(ngx_event_t *) * VAR_24->changes,
                                 VAR_21->log);
        if (VAR_7 == ((void*)0)) {
            return VAR_0;
        }
    }

    VAR_11 = VAR_24->changes;

    if (VAR_13 < VAR_24->events) {
        if (VAR_10) {
            FUNC_2(VAR_10);
        }

        VAR_10 = FUNC_0(sizeof(struct pollfd) * VAR_24->events,
                               VAR_21->log);
        if (VAR_10 == ((void*)0)) {
            return VAR_0;
        }
    }

    VAR_13 = VAR_24->events;

    VAR_19 = VAR_20;

    VAR_17 = VAR_15.actions;

    VAR_18 = VAR_5|VAR_4;

    return VAR_3;
}
