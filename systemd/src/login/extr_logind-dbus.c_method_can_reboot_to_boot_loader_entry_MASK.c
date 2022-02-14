
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int sd_bus_message ;
typedef int sd_bus_error ;
typedef int Manager ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int *,int ,char*,int *,int ,int *) ;
 int FUNC_6 (int *,char*,char*) ;

__attribute__((used)) static int FUNC_7(
                sd_bus_message *VAR_4,
                void *VAR_5,
                sd_bus_error *VAR_6) {

        Manager *VAR_7 = VAR_5;
        int VAR_8;

        FUNC_1(VAR_4);
        FUNC_1(VAR_7);

        VAR_8 = FUNC_3("SYSTEMD_REBOOT_TO_BOOT_LOADER_ENTRY");
        if (VAR_8 == -VAR_2) {
                uint64_t VAR_9 = 0;



                VAR_8 = FUNC_2(&VAR_9);
                if (VAR_8 < 0)
                        FUNC_4(VAR_8, "Failed to determine whether reboot to boot loader entry is supported: %m");
                if (VAR_8 < 0 || !FUNC_0(VAR_9, VAR_1))
                        return FUNC_6(VAR_4, "s", "na");

        } else if (VAR_8 <= 0) {


                if (VAR_8 < 0)
                        FUNC_4(VAR_8, "Failed to parse $SYSTEMD_REBOOT_TO_BOOT_LOADER_ENTRY: %m");

                return FUNC_6(VAR_4, "s", "na");
        }

        return FUNC_5(
                        VAR_4,
                        VAR_0,
                        "org.freedesktop.login1.set-reboot-to-boot-loader-entry",
                        ((void*)0),
                        VAR_3,
                        VAR_6);
}
