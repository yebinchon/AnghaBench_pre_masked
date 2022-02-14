
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char**) ;
 int FUNC_5 (char*,unsigned int*) ;

__attribute__((used)) static const char* FUNC_6(void) {
        char *VAR_0;
        unsigned VAR_1;
        int VAR_2, VAR_3;

        VAR_2 = FUNC_2();
        if (FUNC_1(VAR_2))
                return "vm";
        if (FUNC_0(VAR_2))
                return "container";

        VAR_3 = FUNC_4("/sys/class/dmi/id/chassis_type", &VAR_0);
        if (VAR_3 < 0)
                goto try_acpi;

        VAR_3 = FUNC_5(VAR_0, &VAR_1);
        FUNC_3(VAR_0);
        if (VAR_3 < 0)
                goto try_acpi;
        switch (VAR_1) {

        case 0x3:
        case 0x4:
        case 0x6:
        case 0x7:
                return "desktop";

        case 0x8:
        case 0x9:
        case 0xA:
        case 0xE:
                return "laptop";

        case 0xB:
                return "handset";

        case 0x11:
        case 0x1C:
        case 0x1D:
                return "server";

        case 0x1E:
                return "tablet";

        case 0x1F:
        case 0x20:
                return "convertible";
        }

try_acpi:
        VAR_3 = FUNC_4("/sys/firmware/acpi/pm_profile", &VAR_0);
        if (VAR_3 < 0)
                return ((void*)0);

        VAR_3 = FUNC_5(VAR_0, &VAR_1);
        FUNC_3(VAR_0);
        if (VAR_3 < 0)
                return ((void*)0);
        switch(VAR_1) {

        case 1:
        case 3:
        case 6:
                return "desktop";

        case 2:
                return "laptop";

        case 4:
        case 5:
        case 7:
                return "server";

        case 8:
                return "tablet";
        }

        return ((void*)0);
}
