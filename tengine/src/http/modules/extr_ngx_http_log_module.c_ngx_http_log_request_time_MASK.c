
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_char ;
typedef int time_t ;
struct timeval {int tv_sec; int tv_usec; } ;
struct TYPE_8__ {int sec; int msec; } ;
typedef TYPE_1__ ngx_time_t ;
typedef int ngx_msec_int_t ;
struct TYPE_9__ {int start_sec; int start_msec; } ;
typedef TYPE_2__ ngx_http_request_t ;
typedef int ngx_http_log_op_t ;
struct TYPE_10__ {scalar_t__ request_time_cache; } ;
typedef TYPE_3__ ngx_http_core_loc_conf_t ;


 int FUNC_0 (struct timeval*) ;
 int VAR_0 ;
 TYPE_3__* FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int,int ) ;
 int * FUNC_3 (int *,char*,int,int) ;
 TYPE_1__* FUNC_4 () ;

__attribute__((used)) static u_char *
FUNC_5(ngx_http_request_t *VAR_1, u_char *VAR_2,
    ngx_http_log_op_t *VAR_3)
{
    ngx_time_t *VAR_4;
    ngx_msec_int_t VAR_5;
    VAR_4 = FUNC_4();

    VAR_5 = (ngx_msec_int_t)
             ((VAR_4->sec - VAR_1->start_sec) * 1000 + (VAR_4->msec - VAR_1->start_msec));


    VAR_5 = FUNC_2(VAR_5, 0);

    return FUNC_3(VAR_2, "%T.%03M", (time_t) VAR_5 / 1000, VAR_5 % 1000);
}
