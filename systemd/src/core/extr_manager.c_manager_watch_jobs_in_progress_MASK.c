
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ usec_t ;
struct TYPE_6__ {scalar_t__ jobs_in_progress_event_source; int event; } ;
typedef TYPE_1__ Manager ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__*,int ,scalar_t__,int ,int ,TYPE_1__*) ;
 int FUNC_4 (scalar_t__,char*) ;

__attribute__((used)) static void FUNC_5(Manager *VAR_3) {
        usec_t VAR_4;
        int VAR_5;

        FUNC_0(VAR_3);




        if (!FUNC_1(VAR_3))
                return;

        if (VAR_3->jobs_in_progress_event_source)
                return;

        VAR_4 = FUNC_2(VAR_0) + VAR_1;
        VAR_5 = FUNC_3(
                        VAR_3->event,
                        &VAR_3->jobs_in_progress_event_source,
                        VAR_0,
                        VAR_4, 0,
                        VAR_2, VAR_3);
        if (VAR_5 < 0)
                return;

        (void) FUNC_4(VAR_3->jobs_in_progress_event_source, "manager-jobs-in-progress");
}
