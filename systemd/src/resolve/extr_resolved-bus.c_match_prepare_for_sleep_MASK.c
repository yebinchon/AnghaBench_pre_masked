
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus_message ;
typedef int sd_bus_error ;
typedef int Manager ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,int*) ;

__attribute__((used)) static int FUNC_5(sd_bus_message *VAR_0, void *VAR_1, sd_bus_error *VAR_2) {
        Manager *VAR_3 = VAR_1;
        int VAR_4, VAR_5;

        FUNC_0(VAR_0);
        FUNC_0(VAR_3);

        VAR_5 = FUNC_4(VAR_0, "b", &VAR_4);
        if (VAR_5 < 0) {
                FUNC_2(VAR_5, "Failed to parse PrepareForSleep signal: %m");
                return 0;
        }

        if (VAR_4)
                return 0;

        FUNC_1("Coming back from suspend, verifying all RRs...");

        FUNC_3(VAR_3);
        return 0;
}
