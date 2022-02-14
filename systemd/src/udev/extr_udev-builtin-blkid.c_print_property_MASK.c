
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_device ;
typedef int s ;


 int FUNC_0 (char const*,char*,int) ;
 int FUNC_1 (char const*,char*,int) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 int FUNC_4 (char*,int,char*,char const*,int *) ;
 int FUNC_5 (int *,int,char*,char const*) ;

__attribute__((used)) static void FUNC_6(sd_device *VAR_0, bool VAR_1, const char *VAR_2, const char *VAR_3) {
        char VAR_4[256];

        VAR_4[0] = '\0';

        if (FUNC_3(VAR_2, "TYPE")) {
                FUNC_5(VAR_0, VAR_1, "ID_FS_TYPE", VAR_3);

        } else if (FUNC_3(VAR_2, "USAGE")) {
                FUNC_5(VAR_0, VAR_1, "ID_FS_USAGE", VAR_3);

        } else if (FUNC_3(VAR_2, "VERSION")) {
                FUNC_5(VAR_0, VAR_1, "ID_FS_VERSION", VAR_3);

        } else if (FUNC_3(VAR_2, "UUID")) {
                FUNC_1(VAR_3, VAR_4, sizeof(VAR_4));
                FUNC_5(VAR_0, VAR_1, "ID_FS_UUID", VAR_4);
                FUNC_0(VAR_3, VAR_4, sizeof(VAR_4));
                FUNC_5(VAR_0, VAR_1, "ID_FS_UUID_ENC", VAR_4);

        } else if (FUNC_3(VAR_2, "UUID_SUB")) {
                FUNC_1(VAR_3, VAR_4, sizeof(VAR_4));
                FUNC_5(VAR_0, VAR_1, "ID_FS_UUID_SUB", VAR_4);
                FUNC_0(VAR_3, VAR_4, sizeof(VAR_4));
                FUNC_5(VAR_0, VAR_1, "ID_FS_UUID_SUB_ENC", VAR_4);

        } else if (FUNC_3(VAR_2, "LABEL")) {
                FUNC_1(VAR_3, VAR_4, sizeof(VAR_4));
                FUNC_5(VAR_0, VAR_1, "ID_FS_LABEL", VAR_4);
                FUNC_0(VAR_3, VAR_4, sizeof(VAR_4));
                FUNC_5(VAR_0, VAR_1, "ID_FS_LABEL_ENC", VAR_4);

        } else if (FUNC_3(VAR_2, "PTTYPE")) {
                FUNC_5(VAR_0, VAR_1, "ID_PART_TABLE_TYPE", VAR_3);

        } else if (FUNC_3(VAR_2, "PTUUID")) {
                FUNC_5(VAR_0, VAR_1, "ID_PART_TABLE_UUID", VAR_3);

        } else if (FUNC_3(VAR_2, "PART_ENTRY_NAME")) {
                FUNC_0(VAR_3, VAR_4, sizeof(VAR_4));
                FUNC_5(VAR_0, VAR_1, "ID_PART_ENTRY_NAME", VAR_4);

        } else if (FUNC_3(VAR_2, "PART_ENTRY_TYPE")) {
                FUNC_0(VAR_3, VAR_4, sizeof(VAR_4));
                FUNC_5(VAR_0, VAR_1, "ID_PART_ENTRY_TYPE", VAR_4);

        } else if (FUNC_2(VAR_2, "PART_ENTRY_")) {
                FUNC_4(VAR_4, sizeof(VAR_4), "ID_", VAR_2, ((void*)0));
                FUNC_5(VAR_0, VAR_1, VAR_4, VAR_3);

        } else if (FUNC_3(VAR_2, "SYSTEM_ID")) {
                FUNC_0(VAR_3, VAR_4, sizeof(VAR_4));
                FUNC_5(VAR_0, VAR_1, "ID_FS_SYSTEM_ID", VAR_4);

        } else if (FUNC_3(VAR_2, "PUBLISHER_ID")) {
                FUNC_0(VAR_3, VAR_4, sizeof(VAR_4));
                FUNC_5(VAR_0, VAR_1, "ID_FS_PUBLISHER_ID", VAR_4);

        } else if (FUNC_3(VAR_2, "APPLICATION_ID")) {
                FUNC_0(VAR_3, VAR_4, sizeof(VAR_4));
                FUNC_5(VAR_0, VAR_1, "ID_FS_APPLICATION_ID", VAR_4);

        } else if (FUNC_3(VAR_2, "BOOT_SYSTEM_ID")) {
                FUNC_0(VAR_3, VAR_4, sizeof(VAR_4));
                FUNC_5(VAR_0, VAR_1, "ID_FS_BOOT_SYSTEM_ID", VAR_4);
        }
}
