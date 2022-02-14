
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus_error ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int *,int,char*) ;

int FUNC_6(sd_bus_error *VAR_0) {
        int VAR_1;

        VAR_1 = FUNC_3();
        if (VAR_1 < 0)
                return FUNC_5(VAR_0, VAR_1, "Failed to determine whether /var/lib/machines is located on btrfs: %m");
        if (VAR_1 == 0)
                return 0;

        (void) FUNC_2("/var/lib/machines");

        VAR_1 = FUNC_0("/var/lib/machines", 1);
        if (VAR_1 < 0)
                FUNC_4(VAR_1, "Failed to enable quota for /var/lib/machines, ignoring: %m");

        VAR_1 = FUNC_1("/var/lib/machines", 0, 1);
        if (VAR_1 < 0)
                FUNC_4(VAR_1, "Failed to set up default quota hierarchy for /var/lib/machines, ignoring: %m");

        return 1;
}
