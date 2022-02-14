
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ usec_t ;
struct TYPE_5__ {scalar_t__ event_timer; int event; } ;
typedef TYPE_1__ Manager ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 () ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__*,int ,scalar_t__,int ,int ,TYPE_1__*) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;

__attribute__((used)) static int FUNC_7(Manager *VAR_2, usec_t VAR_3) {
        int VAR_4;

        FUNC_0(VAR_2);

        if (VAR_3 == 0) {
                VAR_2->event_timer = FUNC_6(VAR_2->event_timer);
                return 0;
        }

        if (VAR_2->event_timer) {
                VAR_4 = FUNC_5(VAR_2->event_timer, FUNC_2(FUNC_1()) + VAR_3);
                if (VAR_4 < 0)
                        return VAR_4;

                return FUNC_4(VAR_2->event_timer, VAR_0);
        }

        return FUNC_3(
                        VAR_2->event,
                        &VAR_2->event_timer,
                        FUNC_1(),
                        FUNC_2(FUNC_1()) + VAR_3, 0,
                        VAR_1, VAR_2);
}
