
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ n_running_jobs; scalar_t__ n_on_console; int run_queue; } ;
typedef TYPE_1__ sd_event_source ;
struct TYPE_11__ {TYPE_1__* in_run_queue; TYPE_1__* installed; } ;
typedef TYPE_1__ Manager ;
typedef TYPE_3__ Job ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_3__* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(sd_event_source *VAR_0, void *VAR_1) {
        Manager *VAR_2 = VAR_1;
        Job *VAR_3;

        FUNC_0(VAR_0);
        FUNC_0(VAR_2);

        while ((VAR_3 = FUNC_4(VAR_2->run_queue))) {
                FUNC_0(VAR_3->installed);
                FUNC_0(VAR_3->in_run_queue);

                (void) FUNC_1(VAR_3);
        }

        if (VAR_2->n_running_jobs > 0)
                FUNC_3(VAR_2);

        if (VAR_2->n_on_console > 0)
                FUNC_2(VAR_2);

        return 1;
}
