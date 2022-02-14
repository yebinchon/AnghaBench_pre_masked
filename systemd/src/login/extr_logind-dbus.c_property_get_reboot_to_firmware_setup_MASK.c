
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void sd_bus_message ;
typedef int sd_bus_error ;
typedef void sd_bus ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 int FUNC_1 (void*) ;
 int FUNC_2 () ;
 int VAR_4 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (void*,char*,int) ;

__attribute__((used)) static int FUNC_6(
                sd_bus *VAR_5,
                const char *VAR_6,
                const char *VAR_7,
                const char *VAR_8,
                sd_bus_message *VAR_9,
                void *VAR_10,
                sd_bus_error *VAR_11) {
        int VAR_12;

        FUNC_1(VAR_5);
        FUNC_1(VAR_9);
        FUNC_1(VAR_10);

        VAR_12 = FUNC_3("SYSTEMD_REBOOT_TO_FIRMWARE_SETUP");
        if (VAR_12 == -VAR_1) {

                VAR_12 = FUNC_2();
                if (VAR_12 < 0 && VAR_12 != -VAR_2)
                        FUNC_4(VAR_12, "Failed to determine reboot-to-firmware-setup state: %m");
        } else if (VAR_12 < 0)
                FUNC_4(VAR_12, "Failed to parse $SYSTEMD_REBOOT_TO_FIRMWARE_SETUP: %m");
        else if (VAR_12 > 0) {

                if (FUNC_0("/run/systemd/reboot-to-firmware-setup", VAR_3) < 0) {
                        if (VAR_4 != VAR_0)
                                FUNC_4(VAR_4, "Failed to check whether /run/systemd/reboot-to-firmware-setup exists: %m");

                        VAR_12 = 0;
                } else
                        VAR_12 = 1;
        }

        return FUNC_5(VAR_9, "b", VAR_12 > 0);
}
