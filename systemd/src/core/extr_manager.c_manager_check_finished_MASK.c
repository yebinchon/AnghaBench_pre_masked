
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ timestamps; int * confirm_spawn; scalar_t__ jobs_in_progress_event_source; int jobs; } ;
typedef TYPE_1__ Manager ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,int) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*,int) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (scalar_t__,scalar_t__) ;

void FUNC_15(Manager *VAR_3) {
        FUNC_3(VAR_3);

        if (FUNC_1(VAR_3))
                return;


        if (!FUNC_2(VAR_3))
                return;

        FUNC_6(VAR_3);

        if (FUNC_5(VAR_3->jobs) > 0) {
                if (VAR_3->jobs_in_progress_event_source)

                        (void) FUNC_14(VAR_3->jobs_in_progress_event_source, FUNC_13(VAR_0) + VAR_1);

                return;
        }

        FUNC_9(VAR_3, 0);


        FUNC_8(VAR_3);


        VAR_3->confirm_spawn = ((void*)0);


        FUNC_7(VAR_3);


        FUNC_12(VAR_3, 0);

        if (FUNC_0(VAR_3))
                return;

        FUNC_4(VAR_3->timestamps + VAR_2);

        FUNC_11(VAR_3);

        FUNC_10(VAR_3);
}
