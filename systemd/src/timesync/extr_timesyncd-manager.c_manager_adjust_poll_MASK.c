
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int poll_resync; int poll_interval_usec; int poll_interval_min_usec; int poll_interval_max_usec; } ;
typedef TYPE_1__ Manager ;


 double VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 double FUNC_1 (double) ;

__attribute__((used)) static void FUNC_2(Manager *VAR_1, double VAR_2, bool VAR_3) {
        FUNC_0(VAR_1);

        if (VAR_1->poll_resync) {
                VAR_1->poll_interval_usec = VAR_1->poll_interval_min_usec;
                VAR_1->poll_resync = 0;
                return;
        }


        if (!VAR_3 && FUNC_1(VAR_2) > VAR_0) {
                VAR_1->poll_interval_usec = VAR_1->poll_interval_min_usec;
                return;
        }


        if (FUNC_1(VAR_2) < VAR_0 * 0.25) {
                if (VAR_1->poll_interval_usec < VAR_1->poll_interval_max_usec)
                        VAR_1->poll_interval_usec *= 2;
                return;
        }


        if (VAR_3 || FUNC_1(VAR_2) > VAR_0 * 0.75) {
                if (VAR_1->poll_interval_usec > VAR_1->poll_interval_min_usec)
                        VAR_1->poll_interval_usec /= 2;
                return;
        }
}
