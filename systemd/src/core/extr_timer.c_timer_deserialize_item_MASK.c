
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef char const Unit ;
typedef scalar_t__ TimerState ;
typedef scalar_t__ TimerResult ;
struct TYPE_4__ {int monotonic; int realtime; } ;
struct TYPE_5__ {TYPE_1__ last_trigger; scalar_t__ result; scalar_t__ deserialized_state; } ;
typedef TYPE_2__ Timer ;
typedef char const FDSet ;


 TYPE_2__* FUNC_0 (char const*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*,int *) ;
 int FUNC_3 (char const*,char*,char const*) ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 scalar_t__ FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char const*) ;

__attribute__((used)) static int FUNC_7(Unit *VAR_1, const char *VAR_2, const char *VAR_3, FDSet *VAR_4) {
        Timer *VAR_5 = FUNC_0(VAR_1);

        FUNC_1(VAR_1);
        FUNC_1(VAR_2);
        FUNC_1(VAR_3);
        FUNC_1(VAR_4);

        if (FUNC_4(VAR_2, "state")) {
                TimerState VAR_6;

                VAR_6 = FUNC_6(VAR_3);
                if (VAR_6 < 0)
                        FUNC_3(VAR_1, "Failed to parse state value: %s", VAR_3);
                else
                        VAR_5->deserialized_state = VAR_6;

        } else if (FUNC_4(VAR_2, "result")) {
                TimerResult VAR_7;

                VAR_7 = FUNC_5(VAR_3);
                if (VAR_7 < 0)
                        FUNC_3(VAR_1, "Failed to parse result value: %s", VAR_3);
                else if (VAR_7 != VAR_0)
                        VAR_5->result = VAR_7;

        } else if (FUNC_4(VAR_2, "last-trigger-realtime"))
                (void) FUNC_2(VAR_3, &VAR_5->last_trigger.realtime);
        else if (FUNC_4(VAR_2, "last-trigger-monotonic"))
                (void) FUNC_2(VAR_3, &VAR_5->last_trigger.monotonic);
        else
                FUNC_3(VAR_1, "Unknown serialization key: %s", VAR_2);

        return 0;
}
