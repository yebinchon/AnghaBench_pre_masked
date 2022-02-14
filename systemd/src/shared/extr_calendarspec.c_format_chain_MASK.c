
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int start; int repeat; int stop; struct TYPE_3__* next; } ;
typedef int FILE ;
typedef TYPE_1__ CalendarComponent ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,int,...) ;
 int FUNC_2 (char,int *) ;

__attribute__((used)) static void FUNC_3(FILE *VAR_1, int VAR_2, const CalendarComponent *VAR_3, bool VAR_4) {
        int VAR_5 = VAR_4 ? (int) VAR_0 : 1;

        FUNC_0(*VAR_1);

        if (!VAR_3) {
                FUNC_2('*', VAR_1);
                return;
        }

        if (VAR_4 && VAR_3->start == 0 && VAR_3->repeat == VAR_0 && !VAR_3->next) {
                FUNC_2('*', VAR_1);
                return;
        }

        FUNC_0(VAR_3->start >= 0);

        FUNC_1(VAR_1, "%0*i", VAR_2, VAR_3->start / VAR_5);
        if (VAR_3->start % VAR_5 > 0)
                FUNC_1(VAR_1, ".%06i", VAR_3->start % VAR_5);

        if (VAR_3->stop > 0)
                FUNC_1(VAR_1, "..%0*i", VAR_2, VAR_3->stop / VAR_5);
        if (VAR_3->stop % VAR_5 > 0)
                FUNC_1(VAR_1, ".%06i", VAR_3->stop % VAR_5);

        if (VAR_3->repeat > 0 && !(VAR_3->stop > 0 && VAR_3->repeat == VAR_5))
                FUNC_1(VAR_1, "/%i", VAR_3->repeat / VAR_5);
        if (VAR_3->repeat % VAR_5 > 0)
                FUNC_1(VAR_1, ".%06i", VAR_3->repeat % VAR_5);

        if (VAR_3->next) {
                FUNC_2(',', VAR_1);
                FUNC_3(VAR_1, VAR_2, VAR_3->next, VAR_4);
        }
}
