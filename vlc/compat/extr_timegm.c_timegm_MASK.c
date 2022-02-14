
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int tm_year; int tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_sec; } ;


 scalar_t__ FUNC_0 (int) ;

time_t FUNC_1(struct tm *VAR_0)
{
    static const unsigned VAR_1[12 + 1] = {
        0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334
    };

    if (VAR_0->tm_year < 70
     || VAR_0->tm_mon < 0 || VAR_0->tm_mon > 11
     || VAR_0->tm_mday < 1 || VAR_0->tm_mday > 31
     || VAR_0->tm_hour < 0 || VAR_0->tm_hour > 23
     || VAR_0->tm_min < 0 || VAR_0->tm_min > 59
     || VAR_0->tm_sec < 0 || VAR_0->tm_sec > 60 )
        return -1;


    unsigned VAR_2 = 365 * (VAR_0->tm_year - 70)
                 + VAR_1[VAR_0->tm_mon] + (VAR_0->tm_mday - 1);


    for (int VAR_3 = 70; VAR_3 < VAR_0->tm_year; VAR_3++)
        VAR_2 += FUNC_0(1900 + VAR_3);

    if (VAR_0->tm_mon > 1)
        VAR_2 += FUNC_0(1900 + VAR_0->tm_year);

    VAR_2 *= 24;
    VAR_2 += VAR_0->tm_hour;
    VAR_2 *= 60;
    VAR_2 += VAR_0->tm_min;
    VAR_2 *= 60;
    VAR_2 += VAR_0->tm_sec;
    return VAR_2;
}
