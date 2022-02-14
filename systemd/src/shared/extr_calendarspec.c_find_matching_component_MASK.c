
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tm {int dummy; } ;
struct TYPE_6__ {int start; int stop; int repeat; struct TYPE_6__* next; } ;
struct TYPE_5__ {int utc; TYPE_2__ const* day; scalar_t__ end_of_month; } ;
typedef TYPE_1__ CalendarSpec ;
typedef TYPE_2__ CalendarComponent ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (struct tm*,int ,int) ;

__attribute__((used)) static int FUNC_4(const CalendarSpec *VAR_1, const CalendarComponent *VAR_2,
                                   struct tm *VAR_3, int *VAR_4) {
        const CalendarComponent *VAR_5 = VAR_2;
        int VAR_6, VAR_7, VAR_8 = -1;
        bool VAR_9 = 0;
        int VAR_10;

        FUNC_2(VAR_4);

        if (!VAR_2)
                return 0;

        while (VAR_2) {
                VAR_6 = VAR_2->start;
                VAR_7 = VAR_2->stop;

                if (VAR_1->end_of_month && VAR_5 == VAR_1->day) {
                        VAR_6 = FUNC_3(VAR_3, VAR_1->utc, VAR_6);
                        VAR_7 = FUNC_3(VAR_3, VAR_1->utc, VAR_7);

                        if (VAR_7 > 0)
                                FUNC_1(VAR_6, VAR_7);
                }

                if (VAR_6 >= *VAR_4) {

                        if (!VAR_9 || VAR_6 < VAR_8) {
                                VAR_8 = VAR_6;
                                VAR_9 = 1;
                        }

                } else if (VAR_2->repeat > 0) {
                        int VAR_11;

                        VAR_11 = VAR_6 + VAR_2->repeat * FUNC_0(*VAR_4 - VAR_6, VAR_2->repeat);

                        if ((!VAR_9 || VAR_11 < VAR_8) && (VAR_7 < 0 || VAR_11 <= VAR_7)) {
                                VAR_8 = VAR_11;
                                VAR_9 = 1;
                        }
                }

                VAR_2 = VAR_2->next;
        }

        if (!VAR_9)
                return -VAR_0;

        VAR_10 = *VAR_4 != VAR_8;
        *VAR_4 = VAR_8;
        return VAR_10;
}
