
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ ngx_msec_t ;
struct TYPE_6__ {int threads; } ;
typedef TYPE_1__ ngx_iocp_conf_t ;
typedef int ngx_int_t ;
struct TYPE_7__ {int log; int conf_ctx; } ;
typedef TYPE_2__ ngx_cycle_t ;
struct TYPE_8__ {int actions; } ;


 int * FUNC_0 (int ,int *,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 (int **,int ,scalar_t__*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_1__* FUNC_2 (int ,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_3__ VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (int ,int ,int ,char*) ;
 int * VAR_16 ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_cycle_t *VAR_17, ngx_msec_t VAR_18)
{
    ngx_iocp_conf_t *VAR_19;

    VAR_19 = FUNC_2(VAR_17->conf_ctx, VAR_13);

    if (VAR_6 == ((void*)0)) {
        VAR_6 = FUNC_0(VAR_0, ((void*)0), 0,
                                      VAR_19->threads);
    }

    if (VAR_6 == ((void*)0)) {
        FUNC_3(VAR_2, VAR_17->log, VAR_8,
                      "CreateIoCompletionPort() failed");
        return VAR_1;
    }

    VAR_11 = VAR_12;

    VAR_9 = VAR_14.actions;

    VAR_10 = VAR_4;

    if (VAR_18 == 0) {
        return VAR_3;
    }






    if (VAR_16 == ((void*)0)) {

        VAR_7 = VAR_18;

        if (FUNC_1(&VAR_16, VAR_15, &VAR_7, VAR_17->log)
            != 0)
        {
            return VAR_1;
        }
    }

    VAR_10 |= VAR_5;

    return VAR_3;
}
