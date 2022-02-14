
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ngx_uint_t ;
struct TYPE_5__ {unsigned int sec; unsigned int msec; } ;
typedef TYPE_1__ ngx_time_t ;
typedef int ngx_log_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_6__ {scalar_t__ rlim_cur; } ;


 long VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,TYPE_2__*) ;
 long VAR_8 ;
 int FUNC_2 () ;
 int VAR_9 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ,int *,int ,char*) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_5 (int *) ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 TYPE_1__* FUNC_6 () ;
 TYPE_2__ VAR_15 ;
 int FUNC_7 (unsigned int) ;
 void* FUNC_8 (int ) ;

ngx_int_t
FUNC_9(ngx_log_t *VAR_16)
{
    ngx_time_t *VAR_17;
    ngx_uint_t VAR_18;
    if (FUNC_3(VAR_16) != VAR_3) {
        return VAR_1;
    }

    VAR_12 = FUNC_0();
    VAR_8 = VAR_0;

    for (VAR_18 = VAR_12; VAR_18 >>= 1; VAR_13++) { }







    if (VAR_11 < 1) {
        VAR_11 = 1;
    }
    FUNC_2();

    if (FUNC_1(VAR_4, &VAR_15) == -1) {
        FUNC_4(VAR_2, VAR_16, VAR_7,
                      "getrlimit(RLIMIT_NOFILE) failed");
        return VAR_1;
    }

    VAR_10 = (ngx_int_t) VAR_15.rlim_cur;




    VAR_9 = 0;


    VAR_17 = FUNC_6();
    FUNC_7(((unsigned) VAR_14 << 16) ^ VAR_17->sec ^ VAR_17->msec);

    return VAR_3;
}
