
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int toc ;
struct scsi_cmd {int dummy; } ;
typedef int header ;


 unsigned long long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,unsigned char,unsigned int,...) ;
 int FUNC_2 (struct scsi_cmd*) ;
 int FUNC_3 (struct scsi_cmd*,int,unsigned char*,int) ;
 int FUNC_4 (struct scsi_cmd*,int,int) ;

__attribute__((used)) static int FUNC_5(int VAR_3) {
        struct scsi_cmd VAR_4;
        unsigned char VAR_5[12];
        unsigned char VAR_6[65536];
        unsigned VAR_7, VAR_8, VAR_9;
        unsigned char *VAR_10;
        int VAR_11;

        FUNC_2(&VAR_4);
        FUNC_4(&VAR_4, 0, 0x43);
        FUNC_4(&VAR_4, 6, 1);
        FUNC_4(&VAR_4, 8, sizeof(VAR_5) & 0xff);
        FUNC_4(&VAR_4, 9, 0);
        VAR_11 = FUNC_3(&VAR_4, VAR_3, VAR_5, sizeof(VAR_5));
        if (VAR_11 != 0) {
                FUNC_0("READ TOC", VAR_11);
                return -1;
        }

        VAR_7 = (VAR_5[0] << 8 | VAR_5[1]) + 2;
        FUNC_1("READ TOC: len: %d, start track: %d, end track: %d", VAR_7, VAR_5[2], VAR_5[3]);
        if (VAR_7 > sizeof(VAR_6))
                return -1;
        if (VAR_7 < 2)
                return -1;

        VAR_9 = VAR_5[3] - VAR_5[2] + 1;


        if (VAR_7 < 8)
                return 0;

        FUNC_2(&VAR_4);
        FUNC_4(&VAR_4, 0, 0x43);
        FUNC_4(&VAR_4, 6, VAR_5[2]);
        FUNC_4(&VAR_4, 7, (VAR_7 >> 8) & 0xff);
        FUNC_4(&VAR_4, 8, VAR_7 & 0xff);
        FUNC_4(&VAR_4, 9, 0);
        VAR_11 = FUNC_3(&VAR_4, VAR_3, VAR_6, VAR_7);
        if (VAR_11 != 0) {
                FUNC_0("READ TOC (tracks)", VAR_11);
                return -1;
        }




        for (VAR_10 = VAR_6+4, VAR_8 = 4; VAR_8 < VAR_7-8 && VAR_9 > 0; VAR_8 += 8, VAR_10 += 8, --VAR_9) {
                unsigned VAR_12;
                unsigned VAR_13;

                VAR_13 = (VAR_10[1] & 0x04) != 0;

                VAR_12 = VAR_10[4] << 24 | VAR_10[5] << 16 | VAR_10[6] << 8 | VAR_10[7];
                FUNC_1("track=%u info=0x%x(%s) start_block=%u",
                     VAR_10[2], VAR_10[1] & 0x0f, VAR_13 ? "data":"audio", VAR_12);

                if (VAR_13)
                        VAR_2++;
                else
                        VAR_1++;
        }

        FUNC_2(&VAR_4);
        FUNC_4(&VAR_4, 0, 0x43);
        FUNC_4(&VAR_4, 2, 1);
        FUNC_4(&VAR_4, 8, sizeof(VAR_5));
        FUNC_4(&VAR_4, 9, 0);
        VAR_11 = FUNC_3(&VAR_4, VAR_3, VAR_5, sizeof(VAR_5));
        if (VAR_11 != 0) {
                FUNC_0("READ TOC (multi session)", VAR_11);
                return -1;
        }
        VAR_7 = VAR_5[4+4] << 24 | VAR_5[4+5] << 16 | VAR_5[4+6] << 8 | VAR_5[4+7];
        FUNC_1("last track %u starts at block %u", VAR_5[4+2], VAR_7);
        VAR_0 = (unsigned long long int)VAR_7 * 2048;
        return 0;
}
