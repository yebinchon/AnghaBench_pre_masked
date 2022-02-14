
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_id_device {char* serial; char* serial_short; char* wwn; char* wwn_vendor_extension; char* tgpt_group; char* unit_serial_number; } ;
typedef int serial_str ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 int FUNC_0 (struct scsi_id_device*,int*,int*) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ VAR_4 ;
 char* VAR_5 ;
 int FUNC_2 (struct scsi_id_device*,char*,int,int) ;
 scalar_t__ FUNC_3 (struct scsi_id_device*,char*) ;
 char* VAR_6 ;
 int FUNC_4 (char*,int *) ;
 int FUNC_5 (char*,char*,int) ;
 char* VAR_7 ;
 char* VAR_8 ;

__attribute__((used)) static int FUNC_6(char *VAR_9) {
        struct scsi_id_device VAR_10 = {};
        int VAR_11;
        int VAR_12;
        int VAR_13 = 0;

        if (FUNC_3(&VAR_10, VAR_9) < 0) {
                VAR_13 = 1;
                goto out;
        }


        FUNC_0(&VAR_10, &VAR_11, &VAR_12);
        if (!VAR_11) {
                VAR_13 = 1;
                goto out;
        }


        FUNC_2(&VAR_10, VAR_9, VAR_12, VAR_0);

        if (VAR_1) {
                char VAR_14[VAR_0];

                FUNC_1("ID_SCSI=1\n");
                FUNC_1("ID_VENDOR=%s\n", VAR_8);
                FUNC_1("ID_VENDOR_ENC=%s\n", VAR_7);
                FUNC_1("ID_MODEL=%s\n", VAR_3);
                FUNC_1("ID_MODEL_ENC=%s\n", VAR_2);
                FUNC_1("ID_REVISION=%s\n", VAR_5);
                FUNC_1("ID_TYPE=%s\n", VAR_6);
                if (VAR_10.serial[0] != '\0') {
                        FUNC_5(VAR_10.serial, VAR_14, sizeof(VAR_14)-1);
                        FUNC_4(VAR_14, ((void*)0));
                        FUNC_1("ID_SERIAL=%s\n", VAR_14);
                        FUNC_5(VAR_10.serial_short, VAR_14, sizeof(VAR_14)-1);
                        FUNC_4(VAR_14, ((void*)0));
                        FUNC_1("ID_SERIAL_SHORT=%s\n", VAR_14);
                }
                if (VAR_10.wwn[0] != '\0') {
                        FUNC_1("ID_WWN=0x%s\n", VAR_10.wwn);
                        if (VAR_10.wwn_vendor_extension[0] != '\0') {
                                FUNC_1("ID_WWN_VENDOR_EXTENSION=0x%s\n", VAR_10.wwn_vendor_extension);
                                FUNC_1("ID_WWN_WITH_EXTENSION=0x%s%s\n", VAR_10.wwn, VAR_10.wwn_vendor_extension);
                        } else
                                FUNC_1("ID_WWN_WITH_EXTENSION=0x%s\n", VAR_10.wwn);
                }
                if (VAR_10.tgpt_group[0] != '\0')
                        FUNC_1("ID_TARGET_PORT=%s\n", VAR_10.tgpt_group);
                if (VAR_10.unit_serial_number[0] != '\0')
                        FUNC_1("ID_SCSI_SERIAL=%s\n", VAR_10.unit_serial_number);
                goto out;
        }

        if (VAR_10.serial[0] == '\0') {
                VAR_13 = 1;
                goto out;
        }

        if (VAR_4) {
                char VAR_15[VAR_0];

                FUNC_5(VAR_10.serial, VAR_15, sizeof(VAR_15)-1);
                FUNC_4(VAR_15, ((void*)0));
                FUNC_1("%s\n", VAR_15);
                goto out;
        }

        FUNC_1("%s\n", VAR_10.serial);
out:
        return VAR_13;
}
