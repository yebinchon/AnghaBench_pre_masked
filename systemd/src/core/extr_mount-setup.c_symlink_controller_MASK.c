
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int,char*,char const*,...) ;
 int FUNC_2 (char const*,char const*) ;
 char* FUNC_3 (char*,char const*) ;
 int FUNC_4 (char const*,char const*,int) ;

__attribute__((used)) static int FUNC_5(const char *VAR_1, const char *VAR_2) {
        const char *VAR_3;
        int VAR_4;

        FUNC_0(VAR_1);
        FUNC_0(VAR_2);

        VAR_3 = FUNC_3("/sys/fs/cgroup/", VAR_2);

        VAR_4 = FUNC_4(VAR_1, VAR_3, 0);
        if (VAR_4 < 0)
                return FUNC_1(VAR_4, "Failed to create symlink %s: %m", VAR_3);
        return 0;
}
