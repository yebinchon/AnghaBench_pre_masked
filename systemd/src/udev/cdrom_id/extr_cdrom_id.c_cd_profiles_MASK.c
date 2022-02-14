
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmd {int dummy; } ;
typedef int features ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int,int) ;
 int FUNC_2 (unsigned char,unsigned int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (unsigned char*,int ) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (struct scsi_cmd*) ;
 int FUNC_10 (struct scsi_cmd*,int,unsigned char*,unsigned int) ;
 int FUNC_11 (struct scsi_cmd*,int,unsigned int) ;

__attribute__((used)) static int FUNC_12(int VAR_0) {
        struct scsi_cmd VAR_1;
        unsigned char VAR_2[65530];
        unsigned VAR_3 = 0;
        unsigned VAR_4;
        unsigned VAR_5;
        int VAR_6;
        int VAR_7;

        VAR_7 = -1;


        FUNC_9(&VAR_1);
        FUNC_11(&VAR_1, 0, 0x46);
        FUNC_11(&VAR_1, 8, 8);
        FUNC_11(&VAR_1, 9, 0);
        VAR_6 = FUNC_10(&VAR_1, VAR_0, VAR_2, 8);
        if (VAR_6 != 0) {
                FUNC_7("GET CONFIGURATION", VAR_6);

                if (FUNC_3(VAR_6) == 0x5 && FUNC_1(FUNC_0(VAR_6), 0x20, 0x24)) {
                        FUNC_8("drive is pre-MMC2 and does not support 46h get configuration command");
                        FUNC_8("trying to work around the problem");
                        VAR_7 = FUNC_4(VAR_0);
                }
                goto out;
        }

        VAR_3 = VAR_2[6] << 8 | VAR_2[7];
        if (VAR_3 > 0) {
                FUNC_8("current profile 0x%02x", VAR_3);
                FUNC_5(VAR_3);
                VAR_7 = 0;
        } else
                FUNC_8("no current profile, assuming no media");

        VAR_4 = VAR_2[0] << 24 | VAR_2[1] << 16 | VAR_2[2] << 8 | VAR_2[3];
        FUNC_8("GET CONFIGURATION: size of features buffer 0x%04x", VAR_4);

        if (VAR_4 > sizeof(VAR_2)) {
                FUNC_8("cannot get features in a single query, truncating");
                VAR_4 = sizeof(VAR_2);
        } else if (VAR_4 <= 8)
                VAR_4 = sizeof(VAR_2);


        FUNC_9(&VAR_1);
        FUNC_11(&VAR_1, 0, 0x46);
        FUNC_11(&VAR_1, 7, ( VAR_4 >> 8 ) & 0xff);
        FUNC_11(&VAR_1, 8, VAR_4 & 0xff);
        FUNC_11(&VAR_1, 9, 0);
        VAR_6 = FUNC_10(&VAR_1, VAR_0, VAR_2, VAR_4);
        if (VAR_6 != 0) {
                FUNC_7("GET CONFIGURATION", VAR_6);
                return -1;
        }


        VAR_4 = VAR_2[0] << 24 | VAR_2[1] << 16 | VAR_2[2] << 8 | VAR_2[3];
        FUNC_8("GET CONFIGURATION: size of features buffer 0x%04x", VAR_4);

        if (VAR_4 > sizeof(VAR_2)) {
                FUNC_8("cannot get features in a single query, truncating");
                VAR_4 = sizeof(VAR_2);
        }


        for (VAR_5 = 8; VAR_5+4 < VAR_4; VAR_5 += (4 + VAR_2[VAR_5+3])) {
                unsigned VAR_8;

                VAR_8 = VAR_2[VAR_5] << 8 | VAR_2[VAR_5+1];

                switch (VAR_8) {
                case 0x00:
                        FUNC_8("GET CONFIGURATION: feature 'profiles', with %i entries", VAR_2[VAR_5+3] / 4);
                        FUNC_6(&VAR_2[VAR_5]+4, FUNC_2(VAR_2[VAR_5+3], VAR_4 - VAR_5 - 4));
                        break;
                default:
                        FUNC_8("GET CONFIGURATION: feature 0x%04x <ignored>, with 0x%02x bytes", VAR_8, VAR_2[VAR_5+3]);
                        break;
                }
        }
out:
        return VAR_7;
}
