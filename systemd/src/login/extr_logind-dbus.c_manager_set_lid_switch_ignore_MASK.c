
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ usec_t ;
struct TYPE_5__ {scalar_t__ lid_switch_ignore_event_source; int event; } ;
typedef TYPE_1__ Manager ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__*,int ,scalar_t__,int ,int ,TYPE_1__*) ;
 int FUNC_3 (scalar_t__,scalar_t__*) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;

int FUNC_5(Manager *VAR_2, usec_t VAR_3) {
        int VAR_4;

        FUNC_0(VAR_2);

        if (VAR_3 <= FUNC_1(VAR_0))
                return 0;






        if (VAR_2->lid_switch_ignore_event_source) {
                usec_t VAR_5;

                VAR_4 = FUNC_3(VAR_2->lid_switch_ignore_event_source, &VAR_5);
                if (VAR_4 < 0)
                        return VAR_4;

                if (VAR_3 <= VAR_5)
                        return 0;

                VAR_4 = FUNC_4(VAR_2->lid_switch_ignore_event_source, VAR_3);
        } else
                VAR_4 = FUNC_2(
                                VAR_2->event,
                                &VAR_2->lid_switch_ignore_event_source,
                                VAR_0,
                                VAR_3, 0,
                                VAR_1, VAR_2);

        return VAR_4;
}
