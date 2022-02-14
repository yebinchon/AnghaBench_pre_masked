
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uid_t ;
struct iovec_wrapper {int dummy; } ;
typedef int pid_t ;
struct TYPE_4__ {int pid; } ;
typedef TYPE_1__ Context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char**,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int *,char**) ;
 scalar_t__ FUNC_2 (int ,char**) ;
 scalar_t__ FUNC_3 (int ,char**) ;
 scalar_t__ FUNC_4 (int ,char**) ;
 scalar_t__ FUNC_5 (int ,int ,int ,char**) ;
 int FUNC_6 (int ,char**) ;
 scalar_t__ FUNC_7 (int ,char**) ;
 scalar_t__ FUNC_8 (int ,char**) ;
 scalar_t__ FUNC_9 (int ,char**) ;
 int FUNC_10 (int ,char**) ;
 scalar_t__ FUNC_11 (int ,char**) ;
 int FUNC_12 (struct iovec_wrapper*,char*,char*) ;
 int FUNC_13 (int,char*) ;
 int FUNC_14 (int,char*) ;
 char* FUNC_15 (int ,char*) ;
 scalar_t__ FUNC_16 (char const*,char**,int *) ;
 int FUNC_17 (TYPE_1__*,struct iovec_wrapper*) ;
 scalar_t__ FUNC_18 (int ,int *) ;
 scalar_t__ FUNC_19 (int ,char**) ;
 scalar_t__ FUNC_20 (int ,char**) ;
 scalar_t__ FUNC_21 (char*,char*) ;

__attribute__((used)) static int FUNC_22(struct iovec_wrapper *VAR_2, Context *VAR_3) {
        uid_t VAR_4;
        pid_t VAR_5;
        char *VAR_6;
        const char *VAR_7;
        int VAR_8;




        VAR_5 = VAR_3->pid;


        VAR_8 = FUNC_6(VAR_5, &VAR_6);
        if (VAR_8 < 0)
                return FUNC_13(VAR_8, "Failed to get COMM: %m");

        VAR_8 = FUNC_12(VAR_2, "COREDUMP_COMM=", VAR_6);
        if (VAR_8 < 0)
                return VAR_8;


        VAR_8 = FUNC_10(VAR_5, &VAR_6);
        if (VAR_8 >= 0)
                VAR_8 = FUNC_12(VAR_2, "COREDUMP_EXE=", VAR_6);
        if (VAR_8 < 0)
                FUNC_14(VAR_8, "Failed to get EXE, ignoring: %m");

        if (FUNC_2(VAR_5, &VAR_6) >= 0)
                (void) FUNC_12(VAR_2, "COREDUMP_UNIT=", VAR_6);


        if (FUNC_3(VAR_5, &VAR_6) >= 0)
                (void) FUNC_12(VAR_2, "COREDUMP_USER_UNIT=", VAR_6);

        if (FUNC_19(VAR_5, &VAR_6) >= 0)
                (void) FUNC_12(VAR_2, "COREDUMP_SESSION=", VAR_6);

        if (FUNC_18(VAR_5, &VAR_4) >= 0) {
                VAR_8 = FUNC_0(&VAR_6, VAR_1, VAR_4);
                if (VAR_8 > 0)
                        (void) FUNC_12(VAR_2, "COREDUMP_OWNER_UID=", VAR_6);
        }

        if (FUNC_20(VAR_5, &VAR_6) >= 0)
                (void) FUNC_12(VAR_2, "COREDUMP_SLICE=", VAR_6);

        if (FUNC_5(VAR_5, VAR_0, 0, &VAR_6) >= 0)
                (void) FUNC_12(VAR_2, "COREDUMP_CMDLINE=", VAR_6);

        if (FUNC_1(VAR_5, ((void*)0), &VAR_6) >= 0)
                (void) FUNC_12(VAR_2, "COREDUMP_CGROUP=", VAR_6);

        if (FUNC_4(VAR_5, &VAR_6) >= 0)
                (void) FUNC_12(VAR_2, "COREDUMP_OPEN_FDS=", VAR_6);

        VAR_7 = FUNC_15(VAR_5, "status");
        if (FUNC_16(VAR_7, &VAR_6, ((void*)0)) >= 0)
                (void) FUNC_12(VAR_2, "COREDUMP_PROC_STATUS=", VAR_6);

        VAR_7 = FUNC_15(VAR_5, "maps");
        if (FUNC_16(VAR_7, &VAR_6, ((void*)0)) >= 0)
                (void) FUNC_12(VAR_2, "COREDUMP_PROC_MAPS=", VAR_6);

        VAR_7 = FUNC_15(VAR_5, "limits");
        if (FUNC_16(VAR_7, &VAR_6, ((void*)0)) >= 0)
                (void) FUNC_12(VAR_2, "COREDUMP_PROC_LIMITS=", VAR_6);

        VAR_7 = FUNC_15(VAR_5, "cgroup");
        if (FUNC_16(VAR_7, &VAR_6, ((void*)0)) >=0)
                (void) FUNC_12(VAR_2, "COREDUMP_PROC_CGROUP=", VAR_6);

        VAR_7 = FUNC_15(VAR_5, "mountinfo");
        if (FUNC_16(VAR_7, &VAR_6, ((void*)0)) >=0)
                (void) FUNC_12(VAR_2, "COREDUMP_PROC_MOUNTINFO=", VAR_6);

        if (FUNC_8(VAR_5, &VAR_6) >= 0)
                (void) FUNC_12(VAR_2, "COREDUMP_CWD=", VAR_6);

        if (FUNC_11(VAR_5, &VAR_6) >= 0) {
                bool VAR_9;

                VAR_9 = FUNC_21(VAR_6, "/") == 0;

                (void) FUNC_12(VAR_2, "COREDUMP_ROOT=", VAR_6);



                if (VAR_9 && FUNC_7(VAR_5, &VAR_6) > 0)
                        (void) FUNC_12(VAR_2, "COREDUMP_CONTAINER_CMDLINE=", VAR_6);
        }

        if (FUNC_9(VAR_5, &VAR_6) >= 0)
                (void) FUNC_12(VAR_2, "COREDUMP_ENVIRON=", VAR_6);


        return FUNC_17(VAR_3, VAR_2);
}
