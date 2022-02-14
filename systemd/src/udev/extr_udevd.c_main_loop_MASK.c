
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int* worker_watch; int fd_inotify; int event; int rules; int monitor; int inotify_event; int ctrl; int pid; } ;
typedef TYPE_1__ Manager ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int) ;
 int VAR_15 ;
 int FUNC_1 () ;
 int FUNC_2 (int,char*) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,TYPE_1__*) ;
 int FUNC_6 (int ,int *,int,int ,int ,TYPE_1__*) ;
 int FUNC_7 (int ,int *,int ,TYPE_1__*) ;
 int FUNC_8 (int ,int *,int ,int ,TYPE_1__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (int ,char*) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int,char*) ;
 int FUNC_15 (int,char*,int ) ;
 int FUNC_16 (int,int ,int ,int) ;
 scalar_t__ FUNC_17 (int ,int *,int ,int ,int ,int ,int) ;
 int FUNC_18 (int ,int,int ,int*) ;
 int FUNC_19 () ;
 int FUNC_20 (int ,int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ,int ,TYPE_1__*) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int *,int ) ;
 int FUNC_25 () ;
 int FUNC_26 () ;

__attribute__((used)) static int FUNC_27(Manager *VAR_24) {
        int VAR_25, VAR_26;

        VAR_24->pid = FUNC_1();


        VAR_26 = FUNC_18(VAR_0, VAR_10|VAR_9, 0, VAR_24->worker_watch);
        if (VAR_26 < 0)
                return FUNC_2(VAR_15, "Failed to create socketpair for communicating with workers: %m");

        VAR_25 = VAR_24->worker_watch[VAR_2];

        VAR_26 = FUNC_16(VAR_25, VAR_11, VAR_12, 1);
        if (VAR_26 < 0)
                return FUNC_2(VAR_26, "Failed to enable SO_PASSCRED: %m");

        VAR_26 = FUNC_25();
        if (VAR_26 < 0)
                return FUNC_2(VAR_26, "Failed to create inotify descriptor: %m");
        VAR_24->fd_inotify = VAR_26;

        FUNC_26();


        FUNC_0(FUNC_17(VAR_8, ((void*)0), VAR_7, VAR_6, VAR_5, VAR_4, -1) >= 0);

        VAR_26 = FUNC_9(&VAR_24->event);
        if (VAR_26 < 0)
                return FUNC_2(VAR_26, "Failed to allocate event loop: %m");

        VAR_26 = FUNC_8(VAR_24->event, ((void*)0), VAR_6, VAR_21, VAR_24);
        if (VAR_26 < 0)
                return FUNC_2(VAR_26, "Failed to create SIGINT event source: %m");

        VAR_26 = FUNC_8(VAR_24->event, ((void*)0), VAR_7, VAR_21, VAR_24);
        if (VAR_26 < 0)
                return FUNC_2(VAR_26, "Failed to create SIGTERM event source: %m");

        VAR_26 = FUNC_8(VAR_24->event, ((void*)0), VAR_5, VAR_20, VAR_24);
        if (VAR_26 < 0)
                return FUNC_2(VAR_26, "Failed to create SIGHUP event source: %m");

        VAR_26 = FUNC_8(VAR_24->event, ((void*)0), VAR_4, VAR_19, VAR_24);
        if (VAR_26 < 0)
                return FUNC_2(VAR_26, "Failed to create SIGCHLD event source: %m");

        VAR_26 = FUNC_11(VAR_24->event, 1);
        if (VAR_26 < 0)
                return FUNC_2(VAR_26, "Failed to create watchdog event source: %m");

        VAR_26 = FUNC_20(VAR_24->ctrl, VAR_24->event);
        if (VAR_26 < 0)
                return FUNC_2(VAR_26, "Failed to attach event to udev control: %m");

        VAR_26 = FUNC_22(VAR_24->ctrl, VAR_16, VAR_24);
        if (VAR_26 < 0)
                return FUNC_2(VAR_26, "Failed to start device monitor: %m");





        VAR_26 = FUNC_13(FUNC_21(VAR_24->ctrl), VAR_3);
        if (VAR_26 < 0)
                return FUNC_2(VAR_26, "Failed to set IDLE event priority for udev control event source: %m");

        VAR_26 = FUNC_6(VAR_24->event, &VAR_24->inotify_event, VAR_24->fd_inotify, VAR_1, VAR_17, VAR_24);
        if (VAR_26 < 0)
                return FUNC_2(VAR_26, "Failed to create inotify event source: %m");

        VAR_26 = FUNC_3(VAR_24->monitor, VAR_24->event);
        if (VAR_26 < 0)
                return FUNC_2(VAR_26, "Failed to attach event to device monitor: %m");

        VAR_26 = FUNC_5(VAR_24->monitor, VAR_22, VAR_24);
        if (VAR_26 < 0)
                return FUNC_2(VAR_26, "Failed to start device monitor: %m");

        (void) FUNC_12(FUNC_4(VAR_24->monitor), "device-monitor");

        VAR_26 = FUNC_6(VAR_24->event, ((void*)0), VAR_25, VAR_1, VAR_23, VAR_24);
        if (VAR_26 < 0)
                return FUNC_2(VAR_26, "Failed to create worker event source: %m");

        VAR_26 = FUNC_7(VAR_24->event, ((void*)0), VAR_18, VAR_24);
        if (VAR_26 < 0)
                return FUNC_2(VAR_26, "Failed to create post event source: %m");

        FUNC_19();

        VAR_26 = FUNC_24(&VAR_24->rules, VAR_14);
        if (!VAR_24->rules)
                return FUNC_2(VAR_26, "Failed to read udev rules: %m");

        VAR_26 = FUNC_23(VAR_24->rules);
        if (VAR_26 < 0)
                FUNC_2(VAR_26, "Failed to apply permissions on static device nodes: %m");

        (void) FUNC_15(0,
                          "READY=1\n"
                          "STATUS=Processing with %u children at max", VAR_13);

        VAR_26 = FUNC_10(VAR_24->event);
        if (VAR_26 < 0)
                FUNC_2(VAR_26, "Event loop failed: %m");

        FUNC_14(0,
                  "STOPPING=1\n"
                  "STATUS=Shutting down...");
        return VAR_26;
}
