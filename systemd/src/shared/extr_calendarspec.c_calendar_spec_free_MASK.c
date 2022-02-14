
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int timezone; int microsecond; int minute; int hour; int day; int month; int year; } ;
typedef TYPE_1__ CalendarSpec ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;

CalendarSpec* FUNC_3(CalendarSpec *VAR_0) {

        if (!VAR_0)
                return ((void*)0);

        FUNC_0(VAR_0->year);
        FUNC_0(VAR_0->month);
        FUNC_0(VAR_0->day);
        FUNC_0(VAR_0->hour);
        FUNC_0(VAR_0->minute);
        FUNC_0(VAR_0->microsecond);
        FUNC_1(VAR_0->timezone);

        return FUNC_2(VAR_0);
}
