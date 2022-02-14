
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


typedef int u_char ;
typedef scalar_t__ time_t ;
struct timeval {scalar_t__ tv_sec; int tv_usec; } ;
typedef void* ngx_uint_t ;
struct TYPE_16__ {size_t ngx_tm_wday; int ngx_tm_mon; int ngx_tm_gmtoff; int ngx_tm_sec; int ngx_tm_min; int ngx_tm_hour; int ngx_tm_mday; int ngx_tm_year; int ngx_tm_isdst; } ;
typedef TYPE_1__ ngx_tm_t ;
struct TYPE_17__ {scalar_t__ sec; int gmtoff; void* usec; void* msec; } ;
typedef TYPE_2__ ngx_time_t ;
typedef void* ngx_int_t ;
struct TYPE_20__ {int * data; } ;
struct TYPE_19__ {int * data; } ;
struct TYPE_18__ {int * data; } ;
struct TYPE_15__ {int * data; } ;
struct TYPE_14__ {int * data; } ;


 int VAR_0 ;
 int ** VAR_1 ;
 void* VAR_2 ;
 int ** VAR_3 ;
 int ** VAR_4 ;
 TYPE_1__* VAR_5 ;
 int ** VAR_6 ;
 int ** VAR_7 ;
 TYPE_2__* VAR_8 ;
 int * VAR_9 ;
 int FUNC_0 (int) ;
 TYPE_11__ VAR_10 ;
 TYPE_10__ VAR_11 ;
 TYPE_9__ VAR_12 ;
 TYPE_8__ VAR_13 ;
 TYPE_7__ VAR_14 ;
 TYPE_2__* VAR_15 ;
 TYPE_1__* VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (struct timeval*) ;
 int FUNC_2 () ;
 int FUNC_3 (scalar_t__,TYPE_1__*) ;
 int FUNC_4 (scalar_t__,TYPE_1__*) ;
 int FUNC_5 () ;
 int FUNC_6 (scalar_t__,void*) ;
 int FUNC_7 (int *,char*,int ,int,int ,int ,int ,...) ;
 int VAR_18 ;
 void* FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 size_t VAR_19 ;
 int * VAR_20 ;

void
FUNC_11(void)
{
    u_char *VAR_21, *VAR_22, *VAR_23, *VAR_24, *VAR_25;
    ngx_tm_t VAR_26, VAR_27;
    time_t VAR_28;
    ngx_uint_t VAR_29;
    ngx_time_t *VAR_30;
    struct timeval VAR_31;




    if (!FUNC_9(&VAR_18)) {
        return;
    }

    FUNC_1(&VAR_31);

    VAR_28 = VAR_31.tv_sec;
    VAR_29 = VAR_31.tv_usec / 1000;




    VAR_17 = FUNC_6(VAR_28, VAR_29);

    VAR_30 = &VAR_8[VAR_19];

    if (VAR_30->sec == VAR_28) {
        VAR_30->msec = VAR_29;



        FUNC_10(&VAR_18);
        return;
    }

    if (VAR_19 == VAR_0 - 1) {
        VAR_19 = 0;
    } else {
        VAR_19++;
    }

    VAR_30 = &VAR_8[VAR_19];

    VAR_30->sec = VAR_28;
    VAR_30->msec = VAR_29;




    FUNC_3(VAR_28, &VAR_27);


    VAR_21 = &VAR_6[VAR_19][0];

    (void) FUNC_7(VAR_21, "%s, %02d %s %4d %02d:%02d:%02d GMT",
                       VAR_20[VAR_27.ngx_tm_wday], VAR_27.ngx_tm_mday,
                       VAR_9[VAR_27.ngx_tm_mon - 1], VAR_27.ngx_tm_year,
                       VAR_27.ngx_tm_hour, VAR_27.ngx_tm_min, VAR_27.ngx_tm_sec);
    FUNC_4(VAR_28, &VAR_26);
    VAR_2 = FUNC_8(VAR_26.ngx_tm_isdst);
    VAR_30->gmtoff = VAR_2;







    VAR_22 = &VAR_1[VAR_19][0];

    (void) FUNC_7(VAR_22, "%4d/%02d/%02d %02d:%02d:%02d",
                       VAR_26.ngx_tm_year, VAR_26.ngx_tm_mon,
                       VAR_26.ngx_tm_mday, VAR_26.ngx_tm_hour,
                       VAR_26.ngx_tm_min, VAR_26.ngx_tm_sec);


    VAR_23 = &VAR_4[VAR_19][0];

    (void) FUNC_7(VAR_23, "%02d/%s/%d:%02d:%02d:%02d %c%02i%02i",
                       VAR_26.ngx_tm_mday, VAR_9[VAR_26.ngx_tm_mon - 1],
                       VAR_26.ngx_tm_year, VAR_26.ngx_tm_hour,
                       VAR_26.ngx_tm_min, VAR_26.ngx_tm_sec,
                       VAR_30->gmtoff < 0 ? '-' : '+',
                       FUNC_0(VAR_30->gmtoff / 60), FUNC_0(VAR_30->gmtoff % 60));

    VAR_24 = &VAR_3[VAR_19][0];

    (void) FUNC_7(VAR_24, "%4d-%02d-%02dT%02d:%02d:%02d%c%02i:%02i",
                       VAR_26.ngx_tm_year, VAR_26.ngx_tm_mon,
                       VAR_26.ngx_tm_mday, VAR_26.ngx_tm_hour,
                       VAR_26.ngx_tm_min, VAR_26.ngx_tm_sec,
                       VAR_30->gmtoff < 0 ? '-' : '+',
                       FUNC_0(VAR_30->gmtoff / 60), FUNC_0(VAR_30->gmtoff % 60));

    VAR_25 = &VAR_7[VAR_19][0];

    (void) FUNC_7(VAR_25, "%s %2d %02d:%02d:%02d",
                       VAR_9[VAR_26.ngx_tm_mon - 1], VAR_26.ngx_tm_mday,
                       VAR_26.ngx_tm_hour, VAR_26.ngx_tm_min, VAR_26.ngx_tm_sec);

    FUNC_5();




    VAR_15 = VAR_30;
    VAR_13.data = VAR_21;
    VAR_10.data = VAR_22;
    VAR_12.data = VAR_23;
    VAR_11 = VAR_24;
    VAR_14.data = VAR_25;

    FUNC_10(&VAR_18);
}
