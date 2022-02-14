
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct pollfd {int dummy; } ;
struct TYPE_6__ {int overflow_events; scalar_t__ signo; } ;
typedef TYPE_1__ ngx_rtsig_conf_t ;
typedef int ngx_msec_t ;
typedef int ngx_int_t ;
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
 int VAR_7 ;
 int VAR_8 ;
 int * FUNC_0 (int,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_1__* FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int VAR_12 ;
 int FUNC_3 (int ,int ,int ,char*) ;
 int VAR_13 ;
 int VAR_14 ;
 TYPE_3__ VAR_15 ;
 int * VAR_16 ;
 int VAR_17 ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *,int *) ;

__attribute__((used)) static ngx_int_t
FUNC_7(ngx_cycle_t *VAR_18, ngx_msec_t VAR_19)
{
    ngx_rtsig_conf_t *VAR_20;

    VAR_20 = FUNC_1(VAR_18->conf_ctx, VAR_14);

    FUNC_5(&VAR_17);
    FUNC_4(&VAR_17, (int) VAR_20->signo);
    FUNC_4(&VAR_17, (int) VAR_20->signo + 1);
    FUNC_4(&VAR_17, VAR_7);
    FUNC_4(&VAR_17, VAR_6);

    if (FUNC_6(VAR_8, &VAR_17, ((void*)0)) == -1) {
        FUNC_3(VAR_1, VAR_18->log, VAR_9,
                      "sigprocmask() failed");
        return VAR_0;
    }

    if (VAR_16) {
        FUNC_2(VAR_16);
    }

    VAR_16 = FUNC_0(sizeof(struct pollfd) * VAR_20->overflow_events,
                              VAR_18->log);
    if (VAR_16 == ((void*)0)) {
        return VAR_0;
    }

    VAR_12 = VAR_13;

    VAR_10 = VAR_15.actions;

    VAR_11 = VAR_5
                      |VAR_4
                      |VAR_3;

    return VAR_2;
}
