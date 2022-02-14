
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_device_enumerator ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 int FUNC_1 (int *,char*,char*,int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,char*) ;

__attribute__((used)) static int FUNC_4(sd_device_enumerator *VAR_1) {
        int VAR_2 = 0;

        FUNC_2("sd-device-enumerator: Scan all dirs");

        if (FUNC_0("/sys/subsystem", VAR_0) >= 0) {

                VAR_2 = FUNC_1(VAR_1, "subsystem", "devices", ((void*)0));
                if (VAR_2 < 0)
                        return FUNC_3(VAR_2, "sd-device-enumerator: Failed to scan /sys/subsystem: %m");
        } else {
                int VAR_3;

                VAR_3 = FUNC_1(VAR_1, "bus", "devices", ((void*)0));
                if (VAR_3 < 0) {
                        FUNC_3(VAR_3, "sd-device-enumerator: Failed to scan /sys/bus: %m");
                        VAR_2 = VAR_3;
                }

                VAR_3 = FUNC_1(VAR_1, "class", ((void*)0), ((void*)0));
                if (VAR_3 < 0) {
                        FUNC_3(VAR_3, "sd-device-enumerator: Failed to scan /sys/class: %m");
                        VAR_2 = VAR_3;
                }
        }

        return VAR_2;
}
