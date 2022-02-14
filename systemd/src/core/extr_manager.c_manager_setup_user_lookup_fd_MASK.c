
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__* user_lookup_fds; int user_lookup_event_source; int event; } ;
typedef TYPE_1__ Manager ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_6 ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int ,char*) ;
 int VAR_7 ;
 int FUNC_3 (scalar_t__*) ;
 int FUNC_4 (int ,int *,scalar_t__,int ,int ,TYPE_1__*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,int,int ,scalar_t__*) ;

__attribute__((used)) static int FUNC_9(Manager *VAR_8) {
        int VAR_9;

        FUNC_0(VAR_8);
        if (VAR_8->user_lookup_fds[0] < 0) {


                FUNC_3(VAR_8->user_lookup_fds);
                VAR_8->user_lookup_event_source = FUNC_7(VAR_8->user_lookup_event_source);

                if (FUNC_8(VAR_0, VAR_5|VAR_4, 0, VAR_8->user_lookup_fds) < 0)
                        return FUNC_2(VAR_6, "Failed to allocate user lookup socket: %m");

                (void) FUNC_1(VAR_8->user_lookup_fds[0], VAR_2);
        }

        if (!VAR_8->user_lookup_event_source) {
                VAR_9 = FUNC_4(VAR_8->event, &VAR_8->user_lookup_event_source, VAR_8->user_lookup_fds[0], VAR_1, VAR_7, VAR_8);
                if (VAR_9 < 0)
                        return FUNC_2(VAR_6, "Failed to allocate user lookup event source: %m");



                VAR_9 = FUNC_6(VAR_8->user_lookup_event_source, VAR_3-11);
                if (VAR_9 < 0)
                        return FUNC_2(VAR_6, "Failed to set priority of user lookup event source: %m");

                (void) FUNC_5(VAR_8->user_lookup_event_source, "user-lookup");
        }

        return 0;
}
