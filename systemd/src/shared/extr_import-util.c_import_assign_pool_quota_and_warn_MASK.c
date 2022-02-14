
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const*,int ,int) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 (char*) ;

int FUNC_5(const char *VAR_1) {
        int VAR_2;

        VAR_2 = FUNC_0("/var/lib/machines", 0, 1);
        if (VAR_2 == -VAR_0) {
                FUNC_2(VAR_2, "Failed to set up default quota hierarchy for /var/lib/machines, as directory is not on btrfs or not a subvolume. Ignoring.");
                return 0;
        }
        if (VAR_2 < 0)
                return FUNC_3(VAR_2, "Failed to set up default quota hierarchy for /var/lib/machines: %m");
        if (VAR_2 > 0)
                FUNC_4("Set up default quota hierarchy for /var/lib/machines.");

        VAR_2 = FUNC_0(VAR_1, 0, 1);
        if (VAR_2 == -VAR_0) {
                FUNC_2(VAR_2, "Failed to set up quota hierarchy for %s, as directory is not on btrfs or not a subvolume. Ignoring.", VAR_1);
                return 0;
        }
        if (VAR_2 < 0)
                return FUNC_3(VAR_2, "Failed to set up default quota hierarchy for %s: %m", VAR_1);
        if (VAR_2 > 0)
                FUNC_1("Set up default quota hierarchy for %s.", VAR_1);

        return 0;
}
