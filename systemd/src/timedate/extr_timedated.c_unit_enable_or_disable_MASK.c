
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int name; int unit_file_state; } ;
typedef TYPE_1__ sd_bus_error ;
typedef TYPE_1__ sd_bus ;
typedef TYPE_1__ UnitStatusInfo ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,char*,int ) ;
 int FUNC_3 (TYPE_1__*,char*,char*) ;
 int FUNC_4 (TYPE_1__*,char*,char*,char*,char*,TYPE_1__*,int *,char*,...) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int FUNC_6(UnitStatusInfo *VAR_0, sd_bus *VAR_1, sd_bus_error *VAR_2, bool VAR_3) {
        int VAR_4;

        FUNC_0(VAR_0);
        FUNC_0(VAR_1);
        FUNC_0(VAR_2);



        if (FUNC_5(VAR_0->unit_file_state, "enabled") == VAR_3) {
                FUNC_2(VAR_0, "already %sd.", FUNC_1(VAR_3));
                return 0;
        }

        FUNC_3(VAR_0, "%s unit.", VAR_3 ? "Enabling" : "Disabling");

        if (VAR_3)
                VAR_4 = FUNC_4(
                                VAR_1,
                                "org.freedesktop.systemd1",
                                "/org/freedesktop/systemd1",
                                "org.freedesktop.systemd1.Manager",
                                "EnableUnitFiles",
                                VAR_2,
                                ((void*)0),
                                "asbb", 1,
                                VAR_0->name,
                                0, 1);
        else
                VAR_4 = FUNC_4(
                                VAR_1,
                                "org.freedesktop.systemd1",
                                "/org/freedesktop/systemd1",
                                "org.freedesktop.systemd1.Manager",
                                "DisableUnitFiles",
                                VAR_2,
                                ((void*)0),
                                "asb", 1,
                                VAR_0->name,
                                0);
        if (VAR_4 < 0)
                return VAR_4;

        VAR_4 = FUNC_4(
                        VAR_1,
                        "org.freedesktop.systemd1",
                        "/org/freedesktop/systemd1",
                        "org.freedesktop.systemd1.Manager",
                        "Reload",
                        VAR_2,
                        ((void*)0),
                        ((void*)0));
        if (VAR_4 < 0)
                return VAR_4;

        return 0;
}
