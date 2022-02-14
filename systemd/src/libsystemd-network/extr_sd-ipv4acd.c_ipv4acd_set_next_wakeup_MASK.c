
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int usec_t ;
struct TYPE_5__ {int event_priority; int timer_event_source; int event; } ;
typedef TYPE_1__ sd_ipv4acd ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int *,int ,int,int ,int ,TYPE_1__*,int ,char*,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_6(sd_ipv4acd *VAR_1, usec_t VAR_2, usec_t VAR_3) {
        usec_t VAR_4, VAR_5;

        FUNC_0(VAR_1);

        VAR_4 = VAR_2;

        if (VAR_3 > 0)
                VAR_4 += (usec_t) FUNC_4() % VAR_3;

        FUNC_1(FUNC_5(VAR_1->event, FUNC_2(), &VAR_5) >= 0);

        return FUNC_3(VAR_1->event, &VAR_1->timer_event_source,
                                FUNC_2(),
                                VAR_5 + VAR_4, 0,
                                VAR_0, VAR_1,
                                VAR_1->event_priority, "ipv4acd-timer", 1);
}
