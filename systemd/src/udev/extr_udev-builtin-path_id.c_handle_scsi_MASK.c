
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_device ;


 int * FUNC_0 (int *,char**) ;
 int * FUNC_1 (int *,char**) ;
 int * FUNC_2 (int *,char**) ;
 int * FUNC_3 (int *,char**,int) ;
 int * FUNC_4 (int *,char**) ;
 int * FUNC_5 (int *,char**) ;
 int FUNC_6 (char**,char*,char const*) ;
 scalar_t__ FUNC_7 (int *,char const**) ;
 scalar_t__ FUNC_8 (int *,char*,char const**) ;
 scalar_t__ FUNC_9 (int *,char const**) ;
 int * FUNC_10 (int *,char*) ;
 int FUNC_11 (char const*,char*) ;
 scalar_t__ FUNC_12 (char const*,char*) ;

__attribute__((used)) static sd_device *FUNC_13(sd_device *VAR_0, char **VAR_1, bool *VAR_2) {
        const char *VAR_3, *VAR_4, *VAR_5;

        if (FUNC_7(VAR_0, &VAR_3) < 0 ||
            !FUNC_11(VAR_3, "scsi_device"))
                return VAR_0;


        if (FUNC_8(VAR_0, "ieee1394_id", &VAR_4) >= 0) {
                FUNC_6(VAR_1, "ieee1394-0x%s", VAR_4);
                *VAR_2 = 1;
                return FUNC_10(VAR_0, "scsi");
        }


        if (FUNC_9(VAR_0, &VAR_5) < 0)
                return ((void*)0);

        if (FUNC_12(VAR_5, "/rport-")) {
                *VAR_2 = 1;
                return FUNC_2(VAR_0, VAR_1);
        }

        if (FUNC_12(VAR_5, "/end_device-")) {
                *VAR_2 = 1;
                return FUNC_5(VAR_0, VAR_1);
        }

        if (FUNC_12(VAR_5, "/session")) {
                *VAR_2 = 1;
                return FUNC_4(VAR_0, VAR_1);
        }

        if (FUNC_12(VAR_5, "/ata"))
                return FUNC_0(VAR_0, VAR_1);

        if (FUNC_12(VAR_5, "/vmbus_"))
                return FUNC_3(VAR_0, VAR_1, 37);
        else if (FUNC_12(VAR_5, "/VMBUS"))
                return FUNC_3(VAR_0, VAR_1, 38);

        return FUNC_1(VAR_0, VAR_1);
}
