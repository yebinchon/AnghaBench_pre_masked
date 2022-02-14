
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus_message ;
typedef int sd_bus_error ;
typedef int WaitForItem ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int *,char*,char const**) ;
 int FUNC_3 (char const*,char*) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static int FUNC_5(sd_bus_message *VAR_0, void *VAR_1, sd_bus_error *VAR_2) {
        WaitForItem *VAR_3 = VAR_1;
        const char *VAR_4;
        int VAR_5;

        FUNC_0(VAR_3);

        VAR_5 = FUNC_2(VAR_0, "s", &VAR_4);
        if (VAR_5 < 0) {
                FUNC_1(VAR_5, "Failed to parse PropertiesChanged signal: %m");
                return 0;
        }

        if (!FUNC_3(VAR_4, "org.freedesktop.systemd1.Unit"))
                return 0;

        VAR_5 = FUNC_4(VAR_3, VAR_0);
        if (VAR_5 < 0)
                FUNC_1(VAR_5, "Failed to process PropertiesChanged signal: %m");

        return 0;
}
