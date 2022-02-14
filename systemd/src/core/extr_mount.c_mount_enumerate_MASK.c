
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int mount_event_source; int event; scalar_t__ mount_monitor; } ;
typedef TYPE_1__ Manager ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (scalar_t__,int,int *) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 () ;
 int VAR_2 ;
 int FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int ,int *,int,int ,int ,TYPE_1__*) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_13(Manager *VAR_3) {
        int VAR_4;

        FUNC_0(VAR_3);

        FUNC_3(0);

        if (!VAR_3->mount_monitor) {
                int VAR_5;

                VAR_3->mount_monitor = FUNC_7();
                if (!VAR_3->mount_monitor) {
                        FUNC_2();
                        goto fail;
                }

                VAR_4 = FUNC_4(VAR_3->mount_monitor, 1);
                if (VAR_4 < 0) {
                        FUNC_1(VAR_4, "Failed to enable watching of kernel mount events: %m");
                        goto fail;
                }

                VAR_4 = FUNC_5(VAR_3->mount_monitor, 1, ((void*)0));
                if (VAR_4 < 0) {
                        FUNC_1(VAR_4, "Failed to enable watching of userspace mount events: %m");
                        goto fail;
                }


                VAR_5 = VAR_4 = FUNC_6(VAR_3->mount_monitor);
                if (VAR_4 < 0) {
                        FUNC_1(VAR_4, "Failed to acquire watch file descriptor: %m");
                        goto fail;
                }

                VAR_4 = FUNC_10(VAR_3->event, &VAR_3->mount_event_source, VAR_5, VAR_0, VAR_2, VAR_3);
                if (VAR_4 < 0) {
                        FUNC_1(VAR_4, "Failed to watch mount file descriptor: %m");
                        goto fail;
                }

                VAR_4 = FUNC_12(VAR_3->mount_event_source, VAR_1-10);
                if (VAR_4 < 0) {
                        FUNC_1(VAR_4, "Failed to adjust mount watch priority: %m");
                        goto fail;
                }

                (void) FUNC_11(VAR_3->mount_event_source, "mount-monitor-dispatch");
        }

        VAR_4 = FUNC_8(VAR_3, 0);
        if (VAR_4 < 0)
                goto fail;

        return;

fail:
        FUNC_9(VAR_3);
}
