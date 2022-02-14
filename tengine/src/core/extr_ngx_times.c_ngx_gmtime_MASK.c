
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int time_t ;
typedef int ngx_uint_t ;
typedef scalar_t__ ngx_tm_year_t ;
typedef scalar_t__ ngx_tm_wday_t ;
struct TYPE_3__ {scalar_t__ ngx_tm_wday; scalar_t__ ngx_tm_year; scalar_t__ ngx_tm_mon; scalar_t__ ngx_tm_mday; scalar_t__ ngx_tm_hour; scalar_t__ ngx_tm_min; scalar_t__ ngx_tm_sec; } ;
typedef TYPE_1__ ngx_tm_t ;
typedef scalar_t__ ngx_tm_sec_t ;
typedef scalar_t__ ngx_tm_mon_t ;
typedef scalar_t__ ngx_tm_min_t ;
typedef scalar_t__ ngx_tm_mday_t ;
typedef scalar_t__ ngx_tm_hour_t ;
typedef int ngx_int_t ;



void
FUNC_0(time_t VAR_0, ngx_tm_t *VAR_1)
{
    ngx_int_t VAR_2;
    ngx_uint_t VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;



    if (VAR_0 < 0) {
        VAR_0 = 0;
    }

    VAR_10 = VAR_0 / 86400;
    VAR_3 = VAR_0 % 86400;






    if (VAR_10 > 2932896) {
        VAR_10 = 2932896;
        VAR_3 = 86399;
    }



    VAR_9 = (4 + VAR_10) % 7;

    VAR_5 = VAR_3 / 3600;
    VAR_3 %= 3600;
    VAR_4 = VAR_3 / 60;
    VAR_3 %= 60;







    VAR_10 = VAR_10 - (31 + 28) + 719527;
    VAR_8 = (VAR_10 + 2) * 400 / (365 * 400 + 100 - 4 + 1);

    VAR_2 = VAR_10 - (365 * VAR_8 + VAR_8 / 4 - VAR_8 / 100 + VAR_8 / 400);

    if (VAR_2 < 0) {
        VAR_11 = (VAR_8 % 4 == 0) && (VAR_8 % 100 || (VAR_8 % 400 == 0));
        VAR_2 = 365 + VAR_11 + VAR_2;
        VAR_8--;
    }
    VAR_7 = (VAR_2 + 31) * 10 / 306;



    VAR_6 = VAR_2 - (367 * VAR_7 / 12 - 30) + 1;

    if (VAR_2 >= 306) {

        VAR_8++;
        VAR_7 -= 10;







    } else {

        VAR_7 += 2;






    }

    VAR_1->ngx_tm_sec = (ngx_tm_sec_t) VAR_3;
    VAR_1->ngx_tm_min = (ngx_tm_min_t) VAR_4;
    VAR_1->ngx_tm_hour = (ngx_tm_hour_t) VAR_5;
    VAR_1->ngx_tm_mday = (ngx_tm_mday_t) VAR_6;
    VAR_1->ngx_tm_mon = (ngx_tm_mon_t) VAR_7;
    VAR_1->ngx_tm_year = (ngx_tm_year_t) VAR_8;
    VAR_1->ngx_tm_wday = (ngx_tm_wday_t) VAR_9;
}
