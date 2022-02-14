
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_char ;
typedef scalar_t__ time_t ;
struct timeval {scalar_t__ tv_sec; } ;
struct TYPE_7__ {int ngx_tm_mon; int ngx_tm_sec; int ngx_tm_min; int ngx_tm_hour; int ngx_tm_mday; int ngx_tm_year; } ;
typedef TYPE_1__ ngx_tm_t ;
struct TYPE_8__ {scalar_t__ sec; } ;
typedef TYPE_2__ ngx_time_t ;
struct TYPE_10__ {int * data; } ;
struct TYPE_9__ {int * data; } ;


 int VAR_0 ;
 int ** VAR_1 ;
 int VAR_2 ;
 int ** VAR_3 ;
 TYPE_2__* VAR_4 ;
 int * VAR_5 ;
 TYPE_5__ VAR_6 ;
 TYPE_4__ VAR_7 ;
 int FUNC_0 (struct timeval*) ;
 int FUNC_1 (scalar_t__,TYPE_1__*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,char*,int ,int,int ,int ,int ,...) ;
 int VAR_8 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 size_t VAR_9 ;

void
FUNC_6(void)
{
    u_char *VAR_10, *VAR_11;
    ngx_tm_t VAR_12;
    time_t VAR_13;
    ngx_time_t *VAR_14;
    struct timeval VAR_15;

    if (!FUNC_4(&VAR_8)) {
        return;
    }

    FUNC_0(&VAR_15);

    VAR_13 = VAR_15.tv_sec;

    VAR_14 = &VAR_4[VAR_9];

    if (VAR_14->sec == VAR_13) {
        FUNC_5(&VAR_8);
        return;
    }

    if (VAR_9 == VAR_0 - 1) {
        VAR_9 = 0;
    } else {
        VAR_9++;
    }

    VAR_14 = &VAR_4[VAR_9];

    VAR_14->sec = 0;

    FUNC_1(VAR_13 + VAR_2 * 60, &VAR_12);

    VAR_10 = &VAR_1[VAR_9][0];

    (void) FUNC_3(VAR_10, "%4d/%02d/%02d %02d:%02d:%02d",
                       VAR_12.ngx_tm_year, VAR_12.ngx_tm_mon,
                       VAR_12.ngx_tm_mday, VAR_12.ngx_tm_hour,
                       VAR_12.ngx_tm_min, VAR_12.ngx_tm_sec);

    VAR_11 = &VAR_3[VAR_9][0];

    (void) FUNC_3(VAR_11, "%s %2d %02d:%02d:%02d",
                       VAR_5[VAR_12.ngx_tm_mon - 1], VAR_12.ngx_tm_mday,
                       VAR_12.ngx_tm_hour, VAR_12.ngx_tm_min, VAR_12.ngx_tm_sec);

    FUNC_2();

    VAR_6.data = VAR_10;
    VAR_7.data = VAR_11;

    FUNC_5(&VAR_8);
}
