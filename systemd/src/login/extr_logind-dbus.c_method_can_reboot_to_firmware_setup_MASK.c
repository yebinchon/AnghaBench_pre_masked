
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus_message ;
typedef int sd_bus_error ;
typedef int Manager ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int *,int ,char*,int *,int ,int *) ;
 int FUNC_5 (int *,char*,char*) ;

__attribute__((used)) static int FUNC_6(
                sd_bus_message *VAR_4,
                void *VAR_5,
                sd_bus_error *VAR_6) {

        Manager *VAR_7 = VAR_5;
        int VAR_8;

        FUNC_0(VAR_4);
        FUNC_0(VAR_7);

        VAR_8 = FUNC_2("SYSTEMD_REBOOT_TO_FIRMWARE_SETUP");
        if (VAR_8 == -VAR_1) {


                VAR_8 = FUNC_1();
                if (VAR_8 < 0) {
                        if (VAR_8 != -VAR_2)
                                FUNC_3(VAR_8, "Failed to determine whether reboot to firmware is supported: %m");

                        return FUNC_5(VAR_4, "s", "na");
                }

        } else if (VAR_8 <= 0) {


                if (VAR_8 < 0)
                        FUNC_3(VAR_8, "Failed to parse $SYSTEMD_REBOOT_TO_FIRMWARE_SETUP: %m");

                return FUNC_5(VAR_4, "s", "na");
        }

        return FUNC_4(
                        VAR_4,
                        VAR_0,
                        "org.freedesktop.login1.set-reboot-to-firmware-setup",
                        ((void*)0),
                        VAR_3,
                        VAR_6);
}
