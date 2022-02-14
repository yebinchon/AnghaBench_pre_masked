
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmd {int dummy; } ;
typedef int header ;
typedef int format ;
typedef int dvdstruct ;
typedef int buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 char* VAR_10 ;
 unsigned char VAR_11 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct scsi_cmd*) ;
 int FUNC_5 (struct scsi_cmd*,int,unsigned char*,int) ;
 int FUNC_6 (struct scsi_cmd*,int,int) ;

__attribute__((used)) static int FUNC_7(int VAR_12) {
        struct scsi_cmd VAR_13;
        unsigned char VAR_14[32];
        static const char *const VAR_15[] = {
                "blank",
                "appendable",
                "complete",
                "other"
        };
        int VAR_16;

        FUNC_4(&VAR_13);
        FUNC_6(&VAR_13, 0, 0x51);
        FUNC_6(&VAR_13, 8, sizeof(VAR_14) & 0xff);
        FUNC_6(&VAR_13, 9, 0);
        VAR_16 = FUNC_5(&VAR_13, VAR_12, VAR_14, sizeof(VAR_14));
        if (VAR_16 != 0) {
                FUNC_1("READ DISC INFORMATION", VAR_16);
                return -1;
        };

        VAR_2 = 1;
        FUNC_2("disk type %02x", VAR_14[8]);
        FUNC_2("hardware reported media status: %s", VAR_15[VAR_14[2] & 3]);


        if (!VAR_3)
                VAR_10 = VAR_15[VAR_14[2] & 3];




        if (VAR_7 && (VAR_14[2] & 3) == 1)
                VAR_10 = VAR_15[0];




        if ((VAR_7 || VAR_4 || VAR_5 || VAR_6) && (VAR_14[2] & 3) > 1) {
                unsigned char VAR_17[32 * 2048];
                unsigned char VAR_18;
                int VAR_19;

                if (VAR_6) {


                        unsigned char VAR_20[8];
                        unsigned char VAR_21[12];

                        FUNC_4(&VAR_13);
                        FUNC_6(&VAR_13, 0, 0xAD);
                        FUNC_6(&VAR_13, 7, 0xC0);
                        FUNC_6(&VAR_13, 9, sizeof(VAR_20));
                        FUNC_6(&VAR_13, 11, 0);
                        VAR_16 = FUNC_5(&VAR_13, VAR_12, VAR_20, sizeof(VAR_20));
                        if (VAR_16 != 0) {
                                FUNC_1("READ DVD STRUCTURE", VAR_16);
                                return -1;
                        }
                        if (VAR_20[4] & 0x02) {
                                VAR_10 = VAR_15[2];
                                FUNC_2("write-protected DVD-RAM media inserted");
                                goto determined;
                        }


                        FUNC_4(&VAR_13);
                        FUNC_6(&VAR_13, 0, 0x23);
                        FUNC_6(&VAR_13, 8, sizeof(VAR_21));
                        FUNC_6(&VAR_13, 9, 0);
                        VAR_16 = FUNC_5(&VAR_13, VAR_12, VAR_21, sizeof(VAR_21));
                        if (VAR_16 != 0) {
                                FUNC_1("READ DVD FORMAT CAPACITIES", VAR_16);
                                return -1;
                        }

                        VAR_18 = VAR_21[3];
                        if (VAR_18 & 7 || VAR_18 < 16)
                                return FUNC_3(FUNC_0(VAR_0),
                                                       "invalid format capacities length");

                        switch(VAR_21[8] & 3) {
                            case 1:
                                FUNC_2("unformatted DVD-RAM media inserted");





                                goto determined;

                            case 2:
                                FUNC_2("formatted DVD-RAM media inserted");
                                break;

                            case 3:
                                VAR_2 = 0;
                                return FUNC_3(FUNC_0(VAR_1),
                                                       "format capacities returned no media");
                        }
                }





                FUNC_4(&VAR_13);
                FUNC_6(&VAR_13, 0, 0x28);
                FUNC_6(&VAR_13, 5, 0);
                FUNC_6(&VAR_13, 8, 32);
                FUNC_6(&VAR_13, 9, 0);
                VAR_16 = FUNC_5(&VAR_13, VAR_12, VAR_17, sizeof(VAR_17));
                if (VAR_16 != 0) {
                        VAR_2 = 0;
                        FUNC_1("READ FIRST 32 BLOCKS", VAR_16);
                        return -1;
                }





                for (VAR_19 = 32768; VAR_19 < (32768 + 2048); VAR_19++) {
                        if (VAR_17 [VAR_19]) {
                                FUNC_2("data in block 16, assuming complete");
                                goto determined;
                        }
                }

                for (VAR_19 = 0; VAR_19 < 2048; VAR_19++) {
                        if (VAR_17 [VAR_19]) {
                                FUNC_2("data in block 0, assuming complete");
                                goto determined;
                        }
                }

                VAR_10 = VAR_15[0];
                FUNC_2("no data in blocks 0 or 16, assuming blank");
        }

determined:


        if ((VAR_14[2] & 3) < 2 && !VAR_7)
                VAR_9 = VAR_14[10] << 8 | VAR_14[5];
        VAR_8 = VAR_14[9] << 8 | VAR_14[4];
        VAR_11 = VAR_14[11] << 8 | VAR_14[6];

        return 0;
}
