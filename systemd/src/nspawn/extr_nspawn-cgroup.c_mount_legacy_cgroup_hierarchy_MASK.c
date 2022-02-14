
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
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int,char*,char const*) ;
 int FUNC_1 (char const*,int) ;
 int FUNC_2 (int ,char*,char const*,char const*,int,char const*) ;
 int FUNC_3 (char const*,char const*,int ) ;
 int FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char const*,int ) ;
 char* FUNC_6 (int ,char*,char const*) ;

__attribute__((used)) static int FUNC_7(
                const char *VAR_10,
                const char *VAR_11,
                const char *VAR_12,
                bool VAR_13) {

        const char *VAR_14, *VAR_15, *VAR_16;
        int VAR_17;

        VAR_14 = FUNC_6(FUNC_4(VAR_10), "/sys/fs/cgroup/", VAR_12);

        VAR_17 = FUNC_3(VAR_14, VAR_10, 0);
        if (VAR_17 < 0 && VAR_17 != -VAR_0)
                return FUNC_0(VAR_17, "Failed to determine if %s is mounted already: %m", VAR_14);
        if (VAR_17 > 0)
                return 0;

        (void) FUNC_1(VAR_14, 0755);



        if (FUNC_5(VAR_11, VAR_8)) {
                VAR_15 = "cgroup2";
                VAR_16 = ((void*)0);
        } else if (FUNC_5(VAR_11, VAR_9)) {
                VAR_15 = "cgroup";
                VAR_16 = "none,name=systemd,xattr";
        } else {
                VAR_15 = "cgroup";
                VAR_16 = VAR_11;
        }

        VAR_17 = FUNC_2(VAR_1, "cgroup", VAR_14, VAR_15, VAR_5|VAR_4|VAR_3, VAR_16);
        if (VAR_17 < 0)
                return VAR_17;


        if (VAR_13) {
                VAR_17 = FUNC_2(VAR_1, ((void*)0), VAR_14, ((void*)0),
                                  VAR_2|VAR_7|VAR_5|VAR_4|VAR_3|VAR_6, ((void*)0));
                if (VAR_17 < 0)
                        return VAR_17;
        }

        return 1;
}
