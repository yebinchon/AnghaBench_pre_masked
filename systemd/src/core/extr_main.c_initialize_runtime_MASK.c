
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (char const**) ;
 int FUNC_1 () ;
 int FUNC_2 (struct rlimit*) ;
 int FUNC_3 (struct rlimit*) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__) ;
 int VAR_14 ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int,char*) ;
 int FUNC_12 (int,char*,...) ;
 int FUNC_13 () ;
 int FUNC_14 (int *,int ,int *) ;
 int FUNC_15 () ;
 scalar_t__ FUNC_16 (int ,int,...) ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 scalar_t__ FUNC_19 (int ) ;
 int FUNC_20 (int) ;
 int FUNC_21 (int) ;
 int FUNC_22 (scalar_t__) ;
 int FUNC_23 (int *) ;
 int FUNC_24 () ;

__attribute__((used)) static int FUNC_25(
                bool VAR_15,
                struct rlimit *VAR_16,
                struct rlimit *VAR_17,
                const char **VAR_18) {
        int VAR_19;

        FUNC_0(VAR_18);
        if (VAR_5 != VAR_0)
                return 0;

        FUNC_20(VAR_15);
        FUNC_21(VAR_15);

        if (VAR_11) {

                FUNC_10();

                if (!VAR_15) {
                        VAR_19 = FUNC_15();
                        if (VAR_19 < 0) {
                                *VAR_18 = "Failed to mount cgroup hierarchies";
                                return VAR_19;
                        }

                        FUNC_17();
                        FUNC_9();
                        FUNC_14(((void*)0), VAR_7, ((void*)0));
                        FUNC_13();
                        FUNC_4();
                        FUNC_1();
                        FUNC_18();
                        FUNC_24();
                }

                if (VAR_13) {
                        VAR_19 = FUNC_22(VAR_13);
                        if (VAR_19 < 0)
                                FUNC_12(VAR_19, "Failed to set watchdog device to %s, ignoring: %m", VAR_13);
                }

                if (FUNC_19(VAR_9))
                        FUNC_23(&VAR_9);
        }

        if (VAR_12 != VAR_1)
                if (FUNC_16(VAR_4, VAR_12) < 0)
                        FUNC_12(VAR_14, "Failed to adjust timer slack, ignoring: %m");

        if (VAR_11 && !FUNC_5(VAR_6)) {
                VAR_19 = FUNC_7(VAR_6);
                if (VAR_19 < 0) {
                        *VAR_18 = "Failed to drop capability bounding set of usermode helpers";
                        return FUNC_11(VAR_19, "Failed to drop capability bounding set of usermode helpers: %m");
                }

                VAR_19 = FUNC_6(VAR_6, 1);
                if (VAR_19 < 0) {
                        *VAR_18 = "Failed to drop capability bounding set";
                        return FUNC_11(VAR_19, "Failed to drop capability bounding set: %m");
                }
        }

        if (VAR_11 && VAR_8) {
                if (FUNC_16(VAR_3, 1, 0, 0, 0) < 0) {
                        *VAR_18 = "Failed to disable new privileges";
                        return FUNC_11(VAR_14, "Failed to disable new privileges: %m");
                }
        }

        if (VAR_10) {
                VAR_19 = FUNC_8(VAR_10);
                if (VAR_19 < 0) {
                        *VAR_18 = "Failed to set syscall architectures";
                        return VAR_19;
                }
        }

        if (!VAR_11)

                if (FUNC_16(VAR_2, 1) < 0)
                        FUNC_12(VAR_14, "Failed to make us a subreaper: %m");


        (void) FUNC_3(VAR_16);
        (void) FUNC_2(VAR_17);

        return 0;
}
