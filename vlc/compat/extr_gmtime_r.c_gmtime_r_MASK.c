
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct tm {int tm_sec; int tm_min; int tm_hour; int tm_wday; int tm_year; scalar_t__ tm_yday; size_t tm_mon; int tm_mday; scalar_t__ tm_isdst; } ;
struct TYPE_3__ {scalar_t__ quot; int rem; } ;
typedef TYPE_1__ lldiv_t ;


 TYPE_1__ FUNC_0 (scalar_t__,int) ;

struct tm *FUNC_1 (const time_t *VAR_0, struct tm *VAR_1)
{
    static const unsigned short VAR_2[12] =
        { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    static const unsigned short VAR_3[12] =
        { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    lldiv_t VAR_4;
    const unsigned short *VAR_5;



    VAR_4.quot = 60LL * 60 * 24 * (4 * 146097 + 135140) + *VAR_0;

    VAR_4 = FUNC_0 (VAR_4.quot, 60);
    if (*VAR_0 < 0)
    {
        VAR_4.rem += 60;
        VAR_4.quot--;
    }
    VAR_1->tm_sec = VAR_4.rem;

    VAR_4 = FUNC_0 (VAR_4.quot, 60);
    VAR_1->tm_min = VAR_4.rem;

    VAR_4 = FUNC_0 (VAR_4.quot, 24);
    VAR_1->tm_hour = VAR_4.rem;

    VAR_1->tm_wday = (VAR_4.quot + 6) % 7;

    VAR_4 = FUNC_0 (VAR_4.quot, 146097);
    VAR_1->tm_year = 400 * VAR_4.quot;

    if (VAR_4.rem >= 36525)
    {
        VAR_4.rem -= 36525;
        VAR_1->tm_year += 100;

        VAR_4 = FUNC_0 (VAR_4.rem, 36524);
        VAR_1->tm_year += VAR_4.quot * 100;
        if (VAR_4.rem >= 59)
            VAR_4.rem++;
    }
    VAR_1->tm_year -= 1900;

    VAR_4 = FUNC_0 (VAR_4.rem, 1461);
    VAR_1->tm_year += 4 * VAR_4.quot;

    if (VAR_4.rem >= 366)
    {
        VAR_4.rem -= 366;
        VAR_1->tm_year++;

        VAR_4 = FUNC_0 (VAR_4.rem, 365);
        VAR_1->tm_year += VAR_4.quot;
        VAR_5 = VAR_2;
    }
    else
        VAR_5 = VAR_3;
    VAR_1->tm_yday = VAR_4.rem;

    for (VAR_1->tm_mon = 0; VAR_4.rem >= VAR_5[VAR_1->tm_mon]; VAR_1->tm_mon++)
        VAR_4.rem -= VAR_5[VAR_1->tm_mon];
    VAR_1->tm_mday = VAR_4.rem + 1;

    VAR_1->tm_isdst = 0;
    return VAR_1;
}
