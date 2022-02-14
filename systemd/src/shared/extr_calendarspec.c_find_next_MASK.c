
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usec_t ;
typedef struct tm {int tm_year; int tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_sec; int utc; int microsecond; int minute; int hour; int weekdays_bits; int day; int month; int year; int dst; int tm_isdst; } const tm ;
typedef struct tm CalendarSpec ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tm const*) ;
 int FUNC_1 (struct tm const*,int ,struct tm const*,int*) ;
 int FUNC_2 (int ,struct tm const*,int ) ;
 int FUNC_3 (struct tm const*,int ) ;
 int FUNC_4 (struct tm const*,int ) ;

__attribute__((used)) static int FUNC_5(const CalendarSpec *VAR_2, struct tm *VAR_3, usec_t *VAR_4) {
        struct tm VAR_5;
        int VAR_6;
        int VAR_7;



        FUNC_0(VAR_2);
        FUNC_0(VAR_3);

        VAR_5 = *VAR_3;
        VAR_6 = *VAR_4;

        for (;;) {

                (void) FUNC_3(&VAR_5, VAR_2->utc);
                VAR_5.tm_isdst = VAR_2->dst;

                VAR_5.tm_year += 1900;
                VAR_7 = FUNC_1(VAR_2, VAR_2->year, &VAR_5, &VAR_5.tm_year);
                VAR_5.tm_year -= 1900;

                if (VAR_7 > 0) {
                        VAR_5.tm_mon = 0;
                        VAR_5.tm_mday = 1;
                        VAR_5.tm_hour = VAR_5.tm_min = VAR_5.tm_sec = VAR_6 = 0;
                }
                if (VAR_7 < 0)
                        return VAR_7;
                if (FUNC_4(&VAR_5, VAR_2->utc) <= 0)
                        return -VAR_0;

                VAR_5.tm_mon += 1;
                VAR_7 = FUNC_1(VAR_2, VAR_2->month, &VAR_5, &VAR_5.tm_mon);
                VAR_5.tm_mon -= 1;

                if (VAR_7 > 0) {
                        VAR_5.tm_mday = 1;
                        VAR_5.tm_hour = VAR_5.tm_min = VAR_5.tm_sec = VAR_6 = 0;
                }
                if (VAR_7 < 0 || (VAR_7 = FUNC_4(&VAR_5, VAR_2->utc)) < 0) {
                        VAR_5.tm_year++;
                        VAR_5.tm_mon = 0;
                        VAR_5.tm_mday = 1;
                        VAR_5.tm_hour = VAR_5.tm_min = VAR_5.tm_sec = VAR_6 = 0;
                        continue;
                }
                if (VAR_7 == 0)
                        continue;

                VAR_7 = FUNC_1(VAR_2, VAR_2->day, &VAR_5, &VAR_5.tm_mday);
                if (VAR_7 > 0)
                        VAR_5.tm_hour = VAR_5.tm_min = VAR_5.tm_sec = VAR_6 = 0;
                if (VAR_7 < 0 || (VAR_7 = FUNC_4(&VAR_5, VAR_2->utc)) < 0) {
                        VAR_5.tm_mon++;
                        VAR_5.tm_mday = 1;
                        VAR_5.tm_hour = VAR_5.tm_min = VAR_5.tm_sec = VAR_6 = 0;
                        continue;
                }
                if (VAR_7 == 0)
                        continue;

                if (!FUNC_2(VAR_2->weekdays_bits, &VAR_5, VAR_2->utc)) {
                        VAR_5.tm_mday++;
                        VAR_5.tm_hour = VAR_5.tm_min = VAR_5.tm_sec = VAR_6 = 0;
                        continue;
                }

                VAR_7 = FUNC_1(VAR_2, VAR_2->hour, &VAR_5, &VAR_5.tm_hour);
                if (VAR_7 > 0)
                        VAR_5.tm_min = VAR_5.tm_sec = VAR_6 = 0;
                if (VAR_7 < 0 || (VAR_7 = FUNC_4(&VAR_5, VAR_2->utc)) < 0) {
                        VAR_5.tm_mday++;
                        VAR_5.tm_hour = VAR_5.tm_min = VAR_5.tm_sec = VAR_6 = 0;
                        continue;
                }
                if (VAR_7 == 0)



                        continue;

                VAR_7 = FUNC_1(VAR_2, VAR_2->minute, &VAR_5, &VAR_5.tm_min);
                if (VAR_7 > 0)
                        VAR_5.tm_sec = VAR_6 = 0;
                if (VAR_7 < 0 || (VAR_7 = FUNC_4(&VAR_5, VAR_2->utc)) < 0) {
                        VAR_5.tm_hour++;
                        VAR_5.tm_min = VAR_5.tm_sec = VAR_6 = 0;
                        continue;
                }
                if (VAR_7 == 0)
                        continue;

                VAR_5.tm_sec = VAR_5.tm_sec * VAR_1 + VAR_6;
                VAR_7 = FUNC_1(VAR_2, VAR_2->microsecond, &VAR_5, &VAR_5.tm_sec);
                VAR_6 = VAR_5.tm_sec % VAR_1;
                VAR_5.tm_sec /= VAR_1;

                if (VAR_7 < 0 || (VAR_7 = FUNC_4(&VAR_5, VAR_2->utc)) < 0) {
                        VAR_5.tm_min++;
                        VAR_5.tm_sec = VAR_6 = 0;
                        continue;
                }
                if (VAR_7 == 0)
                        continue;

                *VAR_3 = VAR_5;
                *VAR_4 = VAR_6;
                return 0;
        }
}
