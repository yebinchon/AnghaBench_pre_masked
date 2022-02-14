
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ usec_t ;
typedef int sd_event_source ;
struct TYPE_5__ {int timer_event_source; } ;
typedef TYPE_1__ Service ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int,char*,int ) ;
 int FUNC_3 (int ,char const**) ;
 int FUNC_4 (int *,scalar_t__*) ;
 int FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (char const*) ;

__attribute__((used)) static void FUNC_7(Service *VAR_0, sd_event_source *VAR_1, usec_t VAR_2) {
        usec_t VAR_3;
        int VAR_4;

        FUNC_1(VAR_0);




        if (!VAR_1)
                return;

        VAR_4 = FUNC_4(VAR_1, &VAR_3);
        if (VAR_4 < 0) {
                const char *VAR_5;
                (void) FUNC_3(VAR_0->timer_event_source, &VAR_5);
                FUNC_2(FUNC_0(VAR_0), VAR_4, "Failed to retrieve timeout time for event source '%s', ignoring: %m", FUNC_6(VAR_5));
                return;
        }

        if (VAR_3 >= VAR_2)
                return;

        VAR_4 = FUNC_5(VAR_1, VAR_2);
        if (VAR_4 < 0) {
                const char *VAR_6;
                (void) FUNC_3(VAR_0->timer_event_source, &VAR_6);
                FUNC_2(FUNC_0(VAR_0), VAR_4, "Failed to set timeout time for even source '%s', ignoring %m", FUNC_6(VAR_6));
        }
}
