
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ usec_t ;
struct TYPE_8__ {scalar_t__ timer_event_source; TYPE_2__* manager; TYPE_1__* unit; void* begin_usec; void* begin_running_usec; } ;
struct TYPE_7__ {int event; } ;
struct TYPE_6__ {scalar_t__ job_running_timeout; scalar_t__ job_timeout; } ;
typedef TYPE_3__ Job ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__*,int ,scalar_t__,int ,int ,TYPE_3__*) ;
 int FUNC_2 (scalar_t__,scalar_t__*) ;
 int FUNC_3 (scalar_t__,char*) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (void*,scalar_t__) ;

int FUNC_6(Job *VAR_3, bool VAR_4) {
        int VAR_5;
        usec_t VAR_6, VAR_7;

        if (VAR_4) {
                VAR_3->begin_running_usec = FUNC_0(VAR_0);

                if (VAR_3->unit->job_running_timeout == VAR_1)
                        return 0;

                VAR_6 = FUNC_5(VAR_3->begin_running_usec, VAR_3->unit->job_running_timeout);

                if (VAR_3->timer_event_source) {

                        VAR_5 = FUNC_2(VAR_3->timer_event_source, &VAR_7);
                        if (VAR_5 < 0)
                                return VAR_5;

                        if (VAR_7 <= VAR_6)
                                return 0;

                        return FUNC_4(VAR_3->timer_event_source, VAR_6);
                }
        } else {
                if (VAR_3->timer_event_source)
                        return 0;

                VAR_3->begin_usec = FUNC_0(VAR_0);

                if (VAR_3->unit->job_timeout == VAR_1)
                        return 0;

                VAR_6 = FUNC_5(VAR_3->begin_usec, VAR_3->unit->job_timeout);
        }

        VAR_5 = FUNC_1(
                        VAR_3->manager->event,
                        &VAR_3->timer_event_source,
                        VAR_0,
                        VAR_6, 0,
                        VAR_2, VAR_3);
        if (VAR_5 < 0)
                return VAR_5;

        (void) FUNC_3(VAR_3->timer_event_source, "job-start");

        return 0;
}
