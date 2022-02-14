
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ usec_t ;
typedef int uint64_t ;
struct dual_timestamp {scalar_t__ monotonic; } ;
typedef int sd_event_source ;
struct TYPE_6__ {scalar_t__ idle_action; scalar_t__ idle_action_usec; scalar_t__ idle_action_not_before_usec; int idle_action_event_source; int event; } ;
typedef TYPE_1__ Manager ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (TYPE_1__*,struct dual_timestamp*) ;
 int FUNC_6 (TYPE_1__*,int ,scalar_t__,int,int) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ,int *,int ,scalar_t__,int,int (*) (int *,int ,void*),TYPE_1__*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,scalar_t__) ;
 int FUNC_11 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_12(sd_event_source *VAR_5, uint64_t VAR_6, void *VAR_7) {
        Manager *VAR_8 = VAR_7;
        struct dual_timestamp VAR_9;
        usec_t VAR_10, VAR_11;
        int VAR_12;

        FUNC_1(VAR_8);

        if (VAR_8->idle_action == VAR_1 ||
            VAR_8->idle_action_usec <= 0)
                return 0;

        VAR_10 = FUNC_7(VAR_0);

        VAR_12 = FUNC_5(VAR_8, &VAR_9);
        if (VAR_12 <= 0)

                VAR_11 = VAR_10 + VAR_8->idle_action_usec;
        else {



                if (VAR_10 >= VAR_9.monotonic + VAR_8->idle_action_usec &&
                    (VAR_8->idle_action_not_before_usec <= 0 || VAR_10 >= VAR_8->idle_action_not_before_usec + VAR_8->idle_action_usec)) {
                        FUNC_4("System idle. Doing %s operation.", FUNC_2(VAR_8->idle_action));

                        FUNC_6(VAR_8, 0, VAR_8->idle_action, 0, 0);
                        VAR_8->idle_action_not_before_usec = VAR_10;
                }

                VAR_11 = FUNC_0(VAR_9.monotonic, VAR_8->idle_action_not_before_usec) + VAR_8->idle_action_usec;
        }

        if (!VAR_8->idle_action_event_source) {

                VAR_12 = FUNC_8(
                                VAR_8->event,
                                &VAR_8->idle_action_event_source,
                                VAR_0,
                                VAR_11, VAR_4*30,
                                FUNC_12, VAR_8);
                if (VAR_12 < 0)
                        return FUNC_3(VAR_12, "Failed to add idle event source: %m");

                VAR_12 = FUNC_10(VAR_8->idle_action_event_source, VAR_3+10);
                if (VAR_12 < 0)
                        return FUNC_3(VAR_12, "Failed to set idle event source priority: %m");
        } else {
                VAR_12 = FUNC_11(VAR_8->idle_action_event_source, VAR_11);
                if (VAR_12 < 0)
                        return FUNC_3(VAR_12, "Failed to set idle event timer: %m");

                VAR_12 = FUNC_9(VAR_8->idle_action_event_source, VAR_2);
                if (VAR_12 < 0)
                        return FUNC_3(VAR_12, "Failed to enable idle event timer: %m");
        }

        return 0;
}
