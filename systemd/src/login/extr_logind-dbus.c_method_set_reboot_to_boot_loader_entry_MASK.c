
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_8__ {int polkit_registry; } ;
typedef TYPE_1__ sd_bus_message ;
typedef int sd_bus_error ;
typedef TYPE_1__ Manager ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (TYPE_1__*,int ,char*,int *,int,int ,int *,int *) ;
 scalar_t__ FUNC_4 (char const*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,char*,int *,int ) ;
 int FUNC_7 (int ,char*,char const*) ;
 int VAR_8 ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (char const*) ;
 int FUNC_10 (int,char*) ;
 int FUNC_11 (int *,int ,char*,...) ;
 int FUNC_12 (TYPE_1__*,char*,char const**) ;
 int FUNC_13 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_14 (char*) ;
 int FUNC_15 (char*,char const*) ;

__attribute__((used)) static int FUNC_16(
                sd_bus_message *VAR_9,
                void *VAR_10,
                sd_bus_error *VAR_11) {

        Manager *VAR_12 = VAR_10;
        bool VAR_13;
        const char *VAR_14;
        int VAR_15;

        FUNC_1(VAR_9);
        FUNC_1(VAR_12);

        VAR_15 = FUNC_12(VAR_9, "s", &VAR_14);
        if (VAR_15 < 0)
                return VAR_15;

        if (FUNC_9(VAR_14))
                VAR_14 = ((void*)0);
        else if (FUNC_4(VAR_14)) {
                VAR_15 = FUNC_2(VAR_14);
                if (VAR_15 < 0)
                        return VAR_15;
                if (VAR_15 == 0)
                        return FUNC_11(VAR_11, VAR_6, "Boot loader entry '%s' is not known.", VAR_14);
        } else
                return FUNC_11(VAR_11, VAR_5, "Boot loader entry name '%s' is not valid, refusing.", VAR_14);

        VAR_15 = FUNC_8("SYSTEMD_REBOOT_TO_BOOT_LOADER_ENTRY");
        if (VAR_15 == -VAR_4) {
                uint64_t VAR_16;



                VAR_15 = FUNC_5(&VAR_16);
                if (VAR_15 < 0)
                        FUNC_10(VAR_15, "Failed to determine whether reboot into boot loader entry is supported: %m");
                if (VAR_15 < 0 || !FUNC_0(VAR_16, VAR_1))
                        return FUNC_11(VAR_11, VAR_6, "Loader does not support boot into boot loader entry.");

                VAR_13 = 1;

        } else if (VAR_15 <= 0) {


                if (VAR_15 < 0)
                        FUNC_10(VAR_15, "Failed to parse $SYSTEMD_REBOOT_TO_BOOT_LOADER_ENTRY: %m");

                return FUNC_11(VAR_11, VAR_6, "Loader does not support boot into boot loader entry.");
        } else

                VAR_13 = 0;

        VAR_15 = FUNC_3(VAR_9,
                                    VAR_0,
                                    "org.freedesktop.login1.set-reboot-to-boot-loader-entry",
                                    ((void*)0),
                                    0,
                                    VAR_7,
                                    &VAR_12->polkit_registry,
                                    VAR_11);
        if (VAR_15 < 0)
                return VAR_15;
        if (VAR_15 == 0)
                return 1;

        if (VAR_13) {
                if (FUNC_9(VAR_14))

                        VAR_15 = FUNC_6(VAR_2, "LoaderEntryOneShot", ((void*)0), 0);
                else
                        VAR_15 = FUNC_7(VAR_2, "LoaderEntryOneShot", VAR_14);
                if (VAR_15 < 0)
                        return VAR_15;
        } else {
                if (FUNC_9(VAR_14)) {
                        if (FUNC_14("/run/systemd/reboot-to-boot-loader-entry") < 0 && VAR_8 != VAR_3)
                                return -VAR_8;
                } else {
                        VAR_15 = FUNC_15("/run/systemd/reboot-boot-to-loader-entry", VAR_14);
                        if (VAR_15 < 0)
                                return VAR_15;
                }
        }

        return FUNC_13(VAR_9, ((void*)0));
}
