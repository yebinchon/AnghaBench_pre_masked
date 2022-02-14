
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct timespec {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
struct kevent {int flags; scalar_t__ udata; scalar_t__ data; scalar_t__ fflags; int filter; scalar_t__ ident; } ;
typedef scalar_t__ ngx_msec_t ;
struct TYPE_6__ {int changes; int events; } ;
typedef TYPE_1__ ngx_kqueue_conf_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_7__ {int log; int conf_ctx; } ;
typedef TYPE_2__ ngx_cycle_t ;
struct TYPE_8__ {int actions; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 struct kevent* VAR_14 ;
 struct kevent* VAR_15 ;
 int FUNC_0 (int,struct kevent*,int,int *,int ,struct timespec*) ;
 int FUNC_1 () ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 struct kevent* FUNC_2 (int,int ) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 TYPE_1__* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct kevent*) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 TYPE_3__ VAR_25 ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ,char*) ;
 int VAR_26 ;

__attribute__((used)) static ngx_int_t
FUNC_7(ngx_cycle_t *VAR_27, ngx_msec_t VAR_28)
{
    ngx_kqueue_conf_t *VAR_29;
    struct timespec VAR_30;




    VAR_29 = FUNC_3(VAR_27->conf_ctx, VAR_24);

    if (VAR_23 == -1) {
        VAR_23 = FUNC_1();

        if (VAR_23 == -1) {
            FUNC_6(VAR_5, VAR_27->log, VAR_19,
                          "kqueue() failed");
            return VAR_3;
        }






    }

    if (VAR_16 < VAR_29->changes) {
        if (VAR_17) {
            VAR_30.tv_sec = 0;
            VAR_30.tv_nsec = 0;

            if (FUNC_0(VAR_23, VAR_14, (int) VAR_17, ((void*)0), 0, &VAR_30)
                == -1)
            {
                FUNC_6(VAR_4, VAR_27->log, VAR_19,
                              "kevent() failed");
                return VAR_3;
            }
            VAR_17 = 0;
        }

        if (VAR_14) {
            FUNC_4(VAR_14);
        }

        VAR_14 = FUNC_2(VAR_29->changes * sizeof(struct kevent),
                                VAR_27->log);
        if (VAR_14 == ((void*)0)) {
            return VAR_3;
        }
    }

    VAR_16 = VAR_29->changes;

    if (VAR_18 < VAR_29->events) {
        if (VAR_15) {
            FUNC_4(VAR_15);
        }

        VAR_15 = FUNC_2(VAR_29->events * sizeof(struct kevent), VAR_27->log);
        if (VAR_15 == ((void*)0)) {
            return VAR_3;
        }
    }

    VAR_21 = VAR_11
                      |VAR_8
                      |VAR_13;
    VAR_21 |= VAR_9;






    VAR_18 = VAR_29->events;

    VAR_22 = VAR_26;

    VAR_20 = VAR_25.actions;

    return VAR_6;
}
