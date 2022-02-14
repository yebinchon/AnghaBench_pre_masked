
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ usec_t ;
struct TYPE_12__ {scalar_t__ state; scalar_t__ begin_usec; scalar_t__ begin_running_usec; int timer_event_source; TYPE_2__* manager; TYPE_1__* unit; } ;
struct TYPE_11__ {int event; } ;
struct TYPE_10__ {scalar_t__ job_timeout; scalar_t__ job_running_timeout; } ;
typedef TYPE_3__ Job ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int VAR_3 ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (int ,int *,int ,scalar_t__,int ,int ,TYPE_3__*) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__) ;

int FUNC_11(Job *VAR_4) {
        int VAR_5;
        usec_t VAR_6 = VAR_2;

        FUNC_1(VAR_4);



        (void) FUNC_2(VAR_4);

        if (VAR_4->state == VAR_1)
                FUNC_4(VAR_4);


        FUNC_3(VAR_4);



        if (VAR_4->begin_usec == 0)
                return 0;

        if (VAR_4->unit->job_timeout != VAR_2)
                VAR_6 = FUNC_10(VAR_4->begin_usec, VAR_4->unit->job_timeout);

        if (FUNC_9(VAR_4->begin_running_usec))
                VAR_6 = FUNC_0(VAR_6, FUNC_10(VAR_4->begin_running_usec, VAR_4->unit->job_running_timeout));

        if (VAR_6 == VAR_2)
                return 0;

        VAR_4->timer_event_source = FUNC_8(VAR_4->timer_event_source);

        VAR_5 = FUNC_6(
                        VAR_4->manager->event,
                        &VAR_4->timer_event_source,
                        VAR_0,
                        VAR_6, 0,
                        VAR_3, VAR_4);
        if (VAR_5 < 0)
                FUNC_5(VAR_5, "Failed to restart timeout for job: %m");

        (void) FUNC_7(VAR_4->timer_event_source, "job-timeout");

        return VAR_5;
}
