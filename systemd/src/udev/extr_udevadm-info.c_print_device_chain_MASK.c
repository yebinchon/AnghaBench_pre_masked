
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_device ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int *,char const**) ;
 scalar_t__ FUNC_3 (int *,char const**) ;
 scalar_t__ FUNC_4 (int *,int **) ;
 scalar_t__ FUNC_5 (int *,char const**) ;
 int FUNC_6 (int *,char const**) ;

__attribute__((used)) static int FUNC_7(sd_device *VAR_0) {
        sd_device *VAR_1, *VAR_2;
        const char *VAR_3;

        FUNC_1("\n"
               "Udevadm info starts with the device specified by the devpath and then\n"
               "walks up the chain of parent devices. It prints for every device\n"
               "found, all possible attributes in the udev rules key format.\n"
               "A rule to match, can be composed by the attributes of the device\n"
               "and the attributes from one single parent device.\n"
               "\n");

        (void) FUNC_2(VAR_0, &VAR_3);
        FUNC_1("  looking at device '%s':\n", VAR_3);
        (void) FUNC_6(VAR_0, &VAR_3);
        FUNC_1("    KERNEL==\"%s\"\n", VAR_3);
        if (FUNC_5(VAR_0, &VAR_3) < 0)
                VAR_3 = "";
        FUNC_1("    SUBSYSTEM==\"%s\"\n", VAR_3);
        if (FUNC_3(VAR_0, &VAR_3) < 0)
                VAR_3 = "";
        FUNC_1("    DRIVER==\"%s\"\n", VAR_3);
        FUNC_0(VAR_0, "ATTR");

        for (VAR_1 = VAR_0; FUNC_4(VAR_1, &VAR_2) >= 0; VAR_1 = VAR_2) {
                (void) FUNC_2(VAR_2, &VAR_3);
                FUNC_1("  looking at parent device '%s':\n", VAR_3);
                (void) FUNC_6(VAR_2, &VAR_3);
                FUNC_1("    KERNELS==\"%s\"\n", VAR_3);
                if (FUNC_5(VAR_2, &VAR_3) < 0)
                        VAR_3 = "";
                FUNC_1("    SUBSYSTEMS==\"%s\"\n", VAR_3);
                if (FUNC_3(VAR_2, &VAR_3) < 0)
                        VAR_3 = "";
                FUNC_1("    DRIVERS==\"%s\"\n", VAR_3);
                FUNC_0(VAR_2, "ATTRS");
        }

        return 0;
}
