
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus_message ;
typedef int sd_bus_error ;


 int FUNC_0 (char**) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,char*,char*,char*,int *,char**) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5(sd_bus_message *VAR_0, void *VAR_1, sd_bus_error *VAR_2) {
        char **VAR_3 = VAR_1;
        int VAR_4;

        FUNC_0(VAR_3);

        VAR_4 = FUNC_2(
                        FUNC_3(VAR_0),
                        "org.freedesktop.systemd1",
                        "/org/freedesktop/systemd1",
                        "org.freedesktop.systemd1.Manager",
                        "SystemState",
                        ((void*)0),
                        VAR_3);

        FUNC_4(FUNC_1(FUNC_3(VAR_0)), VAR_4);
        return 0;
}
