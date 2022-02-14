
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int usec_t ;
struct TYPE_10__ {TYPE_1__* manager; } ;
struct TYPE_9__ {scalar_t__ timer_event_source; } ;
struct TYPE_8__ {int event; } ;
typedef TYPE_2__ Service ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_6__* FUNC_0 (TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,scalar_t__*,int ,int ,int ,int ,TYPE_2__*) ;
 int FUNC_3 (scalar_t__,char*) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (scalar_t__,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_6(Service *VAR_4, usec_t VAR_5) {
        int VAR_6;

        FUNC_1(VAR_4);

        if (VAR_4->timer_event_source) {
                VAR_6 = FUNC_5(VAR_4->timer_event_source, VAR_5);
                if (VAR_6 < 0)
                        return VAR_6;

                return FUNC_4(VAR_4->timer_event_source, VAR_1);
        }

        if (VAR_5 == VAR_2)
                return 0;

        VAR_6 = FUNC_2(
                        FUNC_0(VAR_4)->manager->event,
                        &VAR_4->timer_event_source,
                        VAR_0,
                        VAR_5, 0,
                        VAR_3, VAR_4);
        if (VAR_6 < 0)
                return VAR_6;

        (void) FUNC_3(VAR_4->timer_event_source, "service-timer");

        return 0;
}
