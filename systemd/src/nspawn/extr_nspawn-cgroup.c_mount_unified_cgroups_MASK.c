
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char const*,int ) ;
 int FUNC_2 (char const*) ;
 int VAR_8 ;
 int FUNC_3 (int,char*,char const*) ;
 int FUNC_4 (char const*,int) ;
 int FUNC_5 (int ,char*,char const*,char*,int,int *) ;
 int FUNC_6 (char const*,char const*,int ) ;
 char* FUNC_7 (char const*,char*) ;

__attribute__((used)) static int FUNC_8(const char *VAR_9) {
        const char *VAR_10;
        int VAR_11;

        FUNC_2(VAR_9);

        VAR_10 = FUNC_7(VAR_9, "/sys/fs/cgroup");

        (void) FUNC_4(VAR_10, 0755);

        VAR_11 = FUNC_6(VAR_10, VAR_9, VAR_0);
        if (VAR_11 < 0)
                return FUNC_3(VAR_11, "Failed to determine if %s is mounted already: %m", VAR_10);
        if (VAR_11 > 0) {
                VAR_10 = FUNC_7(VAR_9, "/sys/fs/cgroup/cgroup.procs");
                if (FUNC_1(VAR_10, VAR_3) >= 0)
                        return 0;
                if (VAR_8 != VAR_2)
                        return FUNC_3(VAR_8, "Failed to determine if mount point %s contains the unified cgroup hierarchy: %m", VAR_10);

                return FUNC_3(FUNC_0(VAR_1),
                                       "%s is already mounted but not a unified cgroup hierarchy. Refusing.", VAR_10);
        }

        return FUNC_5(VAR_4, "cgroup", VAR_10, "cgroup2", VAR_7|VAR_6|VAR_5, ((void*)0));
}
