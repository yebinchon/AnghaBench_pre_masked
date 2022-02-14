
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int polkit_registry; } ;
typedef TYPE_1__ sd_bus_message ;
typedef int sd_bus_error ;
typedef TYPE_1__ Manager ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,char*,int *,int,int ,int *,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int VAR_6 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (int *,int ,char*) ;
 int FUNC_7 (TYPE_1__*,char*,int*) ;
 int FUNC_8 (TYPE_1__*,int *) ;
 int FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (char*) ;

__attribute__((used)) static int FUNC_11(
                sd_bus_message *VAR_7,
                void *VAR_8,
                sd_bus_error *VAR_9) {

        Manager *VAR_10 = VAR_8;
        bool VAR_11;
        int VAR_12, VAR_13;

        FUNC_0(VAR_7);
        FUNC_0(VAR_10);

        VAR_13 = FUNC_7(VAR_7, "b", &VAR_12);
        if (VAR_13 < 0)
                return VAR_13;

        VAR_13 = FUNC_4("SYSTEMD_REBOOT_TO_FIRMWARE_SETUP");
        if (VAR_13 == -VAR_2) {


                VAR_13 = FUNC_2();
                if (VAR_13 == -VAR_3)
                        return FUNC_6(VAR_9, VAR_4, "Firmware does not support boot into firmware.");
                if (VAR_13 < 0)
                        return VAR_13;

                VAR_11 = 1;

        } else if (VAR_13 <= 0) {


                if (VAR_13 < 0)
                        FUNC_5(VAR_13, "Failed to parse $SYSTEMD_REBOOT_TO_FIRMWARE_SETUP: %m");

                return FUNC_6(VAR_9, VAR_4, "Firmware does not support boot into firmware.");
        } else

                VAR_11 = 0;

        VAR_13 = FUNC_1(VAR_7,
                                    VAR_0,
                                    "org.freedesktop.login1.set-reboot-to-firmware-setup",
                                    ((void*)0),
                                    0,
                                    VAR_5,
                                    &VAR_10->polkit_registry,
                                    VAR_9);
        if (VAR_13 < 0)
                return VAR_13;
        if (VAR_13 == 0)
                return 1;

        if (VAR_11) {
                VAR_13 = FUNC_3(VAR_12);
                if (VAR_13 < 0)
                        return VAR_13;
        } else {
                if (VAR_12) {
                        VAR_13 = FUNC_9("/run/systemd/reboot-to-firmware-setup");
                        if (VAR_13 < 0)
                                return VAR_13;
                } else {
                        if (FUNC_10("/run/systemd/reboot-to-firmware-setup") < 0 && VAR_6 != VAR_1)
                                return -VAR_6;
                }
        }

        return FUNC_8(VAR_7, ((void*)0));
}
