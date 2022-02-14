
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int start; int stop; struct TYPE_3__* next; } ;
typedef TYPE_1__ CalendarComponent ;



__attribute__((used)) static void FUNC_0(CalendarComponent *VAR_0) {


        while (VAR_0) {
                if (VAR_0->start >= 0 && VAR_0->start < 70)
                        VAR_0->start += 2000;

                if (VAR_0->stop >= 0 && VAR_0->stop < 70)
                        VAR_0->stop += 2000;

                if (VAR_0->start >= 70 && VAR_0->start < 100)
                        VAR_0->start += 1900;

                if (VAR_0->stop >= 70 && VAR_0->stop < 100)
                        VAR_0->stop += 1900;

                VAR_0 = VAR_0->next;
        }
}
