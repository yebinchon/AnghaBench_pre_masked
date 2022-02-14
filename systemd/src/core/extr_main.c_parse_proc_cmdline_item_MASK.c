
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (char const*,char*,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 char** VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int *,char const*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*,char const*,...) ;
 int FUNC_11 (int,char*,char const*,...) ;
 int FUNC_12 (char const*) ;
 int FUNC_13 (char const*,char**) ;
 int FUNC_14 (char const*,scalar_t__*) ;
 int FUNC_15 (char const*,int,int *) ;
 int FUNC_16 (char const*,scalar_t__*) ;
 int FUNC_17 (char const*,scalar_t__*) ;
 scalar_t__ FUNC_18 (char const*) ;
 scalar_t__ FUNC_19 (char const*,char*) ;
 scalar_t__ FUNC_20 (char const*,char const*) ;
 char* FUNC_21 (char const*) ;
 int FUNC_22 (char const*) ;
 int FUNC_23 (char const*,char*) ;
 int FUNC_24 (char const*) ;
 scalar_t__ FUNC_25 (char const*,char*) ;
 char** FUNC_26 (char**,char const*) ;
 int FUNC_27 (char const*,int) ;

__attribute__((used)) static int FUNC_28(const char *VAR_22, const char *VAR_23, void *VAR_24) {

        int VAR_25;

        FUNC_1(VAR_22);

        if (FUNC_0(VAR_22, "systemd.unit", "rd.systemd.unit")) {

                if (FUNC_20(VAR_22, VAR_23))
                        return 0;

                if (!FUNC_27(VAR_23, VAR_4|VAR_3))
                        FUNC_10("Unit name specified on %s= is not valid, ignoring: %s", VAR_22, VAR_23);
                else if (FUNC_7() == !!FUNC_23(VAR_22, "rd.")) {
                        if (FUNC_6(&VAR_15, VAR_23) < 0)
                                return FUNC_8();
                }

        } else if (FUNC_19(VAR_22, "systemd.dump_core")) {

                VAR_25 = VAR_23 ? FUNC_12(VAR_23) : 1;
                if (VAR_25 < 0)
                        FUNC_11(VAR_25, "Failed to parse dump core switch %s, ignoring: %m", VAR_23);
                else
                        VAR_16 = VAR_25;

        } else if (FUNC_19(VAR_22, "systemd.early_core_pattern")) {

                if (FUNC_20(VAR_22, VAR_23))
                        return 0;

                if (FUNC_18(VAR_23))
                        (void) FUNC_15(VAR_23, 0, &VAR_17);
                else
                        FUNC_10("Specified core pattern '%s' is not an absolute path, ignoring.", VAR_23);

        } else if (FUNC_19(VAR_22, "systemd.crash_chvt")) {

                if (!VAR_23)
                        VAR_8 = 0;
                else {
                        VAR_25 = FUNC_14(VAR_23, &VAR_8);
                        if (VAR_25 < 0)
                                FUNC_11(VAR_25, "Failed to parse crash chvt switch %s, ignoring: %m", VAR_23);
                }

        } else if (FUNC_19(VAR_22, "systemd.crash_shell")) {

                VAR_25 = VAR_23 ? FUNC_12(VAR_23) : 1;
                if (VAR_25 < 0)
                        FUNC_11(VAR_25, "Failed to parse crash shell switch %s, ignoring: %m", VAR_23);
                else
                        VAR_10 = VAR_25;

        } else if (FUNC_19(VAR_22, "systemd.crash_reboot")) {

                VAR_25 = VAR_23 ? FUNC_12(VAR_23) : 1;
                if (VAR_25 < 0)
                        FUNC_11(VAR_25, "Failed to parse crash reboot switch %s, ignoring: %m", VAR_23);
                else
                        VAR_9 = VAR_25;

        } else if (FUNC_19(VAR_22, "systemd.confirm_spawn")) {
                char *VAR_26;

                VAR_25 = FUNC_13(VAR_23, &VAR_26);
                if (VAR_25 < 0)
                        FUNC_11(VAR_25, "Failed to parse confirm_spawn switch %s, ignoring: %m", VAR_23);
                else
                        FUNC_5(VAR_7, VAR_26);

        } else if (FUNC_19(VAR_22, "systemd.service_watchdogs")) {

                VAR_25 = VAR_23 ? FUNC_12(VAR_23) : 1;
                if (VAR_25 < 0)
                        FUNC_11(VAR_25, "Failed to parse service watchdog switch %s, ignoring: %m", VAR_23);
                else
                        VAR_18 = VAR_25;

        } else if (FUNC_19(VAR_22, "systemd.show_status")) {

                if (VAR_23) {
                        VAR_25 = FUNC_17(VAR_23, &VAR_19);
                        if (VAR_25 < 0)
                                FUNC_11(VAR_25, "Failed to parse show status switch %s, ignoring: %m", VAR_23);
                } else
                        VAR_19 = VAR_2;

        } else if (FUNC_19(VAR_22, "systemd.status_unit_format")) {

                if (FUNC_20(VAR_22, VAR_23))
                        return 0;

                VAR_25 = FUNC_24(VAR_23);
                if (VAR_25 < 0)
                        FUNC_11(VAR_25, "Failed to parse %s=%s, ignoring: %m", VAR_22, VAR_23);
                else
                        VAR_20 = VAR_25;

        } else if (FUNC_19(VAR_22, "systemd.default_standard_output")) {

                if (FUNC_20(VAR_22, VAR_23))
                        return 0;

                VAR_25 = FUNC_4(VAR_23);
                if (VAR_25 < 0)
                        FUNC_11(VAR_25, "Failed to parse default standard output switch %s, ignoring: %m", VAR_23);
                else
                        VAR_13 = VAR_25;

        } else if (FUNC_19(VAR_22, "systemd.default_standard_error")) {

                if (FUNC_20(VAR_22, VAR_23))
                        return 0;

                VAR_25 = FUNC_4(VAR_23);
                if (VAR_25 < 0)
                        FUNC_11(VAR_25, "Failed to parse default standard error switch %s, ignoring: %m", VAR_23);
                else
                        VAR_12 = VAR_25;

        } else if (FUNC_25(VAR_22, "systemd.setenv")) {

                if (FUNC_20(VAR_22, VAR_23))
                        return 0;

                if (FUNC_3(VAR_23)) {
                        char **VAR_27;

                        VAR_27 = FUNC_26(VAR_11, VAR_23);
                        if (!VAR_27)
                                return FUNC_8();

                        VAR_11 = VAR_27;
                } else
                        FUNC_10("Environment variable name '%s' is not valid. Ignoring.", VAR_23);

        } else if (FUNC_19(VAR_22, "systemd.machine_id")) {

                if (FUNC_20(VAR_22, VAR_23))
                        return 0;

                VAR_25 = FUNC_22(VAR_23);
                if (VAR_25 < 0)
                        FUNC_11(VAR_25, "MachineID '%s' is not valid, ignoring: %m", VAR_23);

        } else if (FUNC_19(VAR_22, "systemd.default_timeout_start_sec")) {

                if (FUNC_20(VAR_22, VAR_23))
                        return 0;

                VAR_25 = FUNC_16(VAR_23, &VAR_14);
                if (VAR_25 < 0)
                        FUNC_11(VAR_25, "Failed to parse default start timeout '%s', ignoring: %m", VAR_23);

                if (VAR_14 <= 0)
                        VAR_14 = VAR_5;

        } else if (FUNC_19(VAR_22, "systemd.watchdog_device")) {

                if (FUNC_20(VAR_22, VAR_23))
                        return 0;

                (void) FUNC_15(VAR_23, 0, &VAR_21);

        } else if (FUNC_25(VAR_22, "quiet") && !VAR_23) {

                if (VAR_19 == VAR_6)
                        VAR_19 = VAR_1;

        } else if (FUNC_25(VAR_22, "debug") && !VAR_23) {




                if (FUNC_2() > 0)
                        FUNC_9(VAR_0);

        } else if (!VAR_23) {
                const char *VAR_28;


                VAR_28 = FUNC_21(VAR_22);
                if (VAR_28)
                        return FUNC_6(&VAR_15, VAR_28);
        }

        return 0;
}
