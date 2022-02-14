
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus_message ;
typedef int sd_bus_error ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,char const**) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char const*,char*) ;

__attribute__((used)) static int FUNC_6(sd_bus_message *VAR_0, void *VAR_1, sd_bus_error *VAR_2) {
        const char *VAR_3;
        int VAR_4;

        FUNC_0(VAR_0);

        VAR_4 = FUNC_3(VAR_0, "s", &VAR_3);
        if (VAR_4 < 0)
                return FUNC_1(VAR_4, "Failed to read interface name: %m");

        if (!FUNC_5(VAR_3, "org.freedesktop.timesync1.Manager"))
                return 0;

        return FUNC_4(FUNC_2(VAR_0));
}
