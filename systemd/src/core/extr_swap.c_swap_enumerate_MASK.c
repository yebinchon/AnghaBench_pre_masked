
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int swap_event_source; scalar_t__ proc_swaps; int event; } ;
typedef TYPE_1__ Manager ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (scalar_t__,char*) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (scalar_t__,char*) ;
 int FUNC_6 (int ,int *,int ,int ,int ,TYPE_1__*) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ,scalar_t__) ;
 int VAR_4 ;
 int FUNC_9 (TYPE_1__*,int) ;
 int FUNC_10 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_11(Manager *VAR_5) {
        int VAR_6;

        FUNC_0(VAR_5);

        if (!VAR_5->proc_swaps) {
                VAR_5->proc_swaps = FUNC_2("/proc/swaps", "re");
                if (!VAR_5->proc_swaps) {
                        if (VAR_3 == VAR_0)
                                FUNC_3(VAR_3, "Not swap enabled, skipping enumeration.");
                        else
                                FUNC_5(VAR_3, "Failed to open /proc/swaps, ignoring: %m");

                        return;
                }

                VAR_6 = FUNC_6(VAR_5->event, &VAR_5->swap_event_source, FUNC_1(VAR_5->proc_swaps), VAR_1, VAR_4, VAR_5);
                if (VAR_6 < 0) {
                        FUNC_4(VAR_6, "Failed to watch /proc/swaps: %m");
                        goto fail;
                }




                VAR_6 = FUNC_8(VAR_5->swap_event_source, VAR_2-10);
                if (VAR_6 < 0) {
                        FUNC_4(VAR_6, "Failed to change /proc/swaps priority: %m");
                        goto fail;
                }

                (void) FUNC_7(VAR_5->swap_event_source, "swap-proc");
        }

        VAR_6 = FUNC_9(VAR_5, 0);
        if (VAR_6 < 0)
                goto fail;

        return;

fail:
        FUNC_10(VAR_5);
}
