
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int utc; int weekdays_bits; int end_of_month; int microsecond; int minute; int hour; int day; int month; int year; int timezone; } ;
typedef TYPE_1__ CalendarSpec ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,char*) ;

int FUNC_5(CalendarSpec *VAR_1) {
        FUNC_0(VAR_1);

        if (FUNC_4(VAR_1->timezone, "UTC")) {
                VAR_1->utc = 1;
                VAR_1->timezone = FUNC_2(VAR_1->timezone);
        }

        if (VAR_1->weekdays_bits <= 0 || VAR_1->weekdays_bits >= VAR_0)
                VAR_1->weekdays_bits = -1;

        if (VAR_1->end_of_month && !VAR_1->day)
                VAR_1->end_of_month = 0;

        FUNC_1(VAR_1->year);

        FUNC_3(&VAR_1->year);
        FUNC_3(&VAR_1->month);
        FUNC_3(&VAR_1->day);
        FUNC_3(&VAR_1->hour);
        FUNC_3(&VAR_1->minute);
        FUNC_3(&VAR_1->microsecond);

        return 0;
}
