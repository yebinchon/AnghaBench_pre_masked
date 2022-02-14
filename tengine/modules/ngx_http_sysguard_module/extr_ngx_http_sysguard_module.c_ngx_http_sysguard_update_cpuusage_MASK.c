
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int time_t ;
typedef int ngx_int_t ;
typedef int ngx_http_request_t ;
struct TYPE_4__ {int usr; int nice; int sys; int iowait; int irq; int softirq; int idle; } ;
typedef TYPE_1__ ngx_cpuinfo_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_0 () ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_http_request_t *VAR_5, time_t VAR_6)
{
    time_t VAR_7, VAR_8;
    ngx_cpuinfo_t VAR_9, VAR_10;

    VAR_9 = VAR_4;
    VAR_10 = VAR_3;

    VAR_2 = FUNC_0() + VAR_6;

    VAR_7 = (VAR_10.usr + VAR_10.nice + VAR_10.sys) - (VAR_9.usr + VAR_9.nice + VAR_9.sys);

    VAR_8 = (VAR_10.usr + VAR_10.nice + VAR_10.sys + VAR_10.iowait + VAR_10.irq
                 + VAR_10.softirq + VAR_10.idle)
                 - (VAR_9.usr + VAR_9.nice + VAR_9.sys + VAR_9.iowait + VAR_9.irq
                 + VAR_9.softirq + VAR_9.idle);

    if (VAR_8 == 0) {
        VAR_8 = 1;
    }

    VAR_1 = VAR_7 * 100 * 100 / VAR_8;

    return VAR_0;
}
