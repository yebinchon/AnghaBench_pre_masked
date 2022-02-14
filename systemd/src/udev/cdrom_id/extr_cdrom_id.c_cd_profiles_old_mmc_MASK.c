
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmd {int dummy; } ;
typedef int header ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct scsi_cmd*) ;
 int FUNC_5 (struct scsi_cmd*,int,unsigned char*,int) ;
 int FUNC_6 (struct scsi_cmd*,int,int) ;

__attribute__((used)) static int FUNC_7(int VAR_8) {
        struct scsi_cmd VAR_9;
        int VAR_10;

        unsigned char VAR_11[32];

        FUNC_4(&VAR_9);
        FUNC_6(&VAR_9, 0, 0x51);
        FUNC_6(&VAR_9, 8, sizeof(VAR_11));
        FUNC_6(&VAR_9, 9, 0);
        VAR_10 = FUNC_5(&VAR_9, VAR_8, VAR_11, sizeof(VAR_11));
        if (VAR_10 != 0) {
                FUNC_1("READ DISC INFORMATION", VAR_10);
                if (VAR_2 == 1) {
                        FUNC_2("no current profile, but disc is present; assuming CD-ROM");
                        VAR_4 = 1;
                        VAR_6 = 1;
                        VAR_7 = 1;
                        return 0;
                } else
                        return FUNC_3(FUNC_0(VAR_0),
                                               "no current profile, assuming no media");
        };

        VAR_2 = 1;

        if (VAR_11[2] & 16) {
                VAR_5 = 1;
                FUNC_2("profile 0x0a media_cd_rw");
        } else if ((VAR_11[2] & 3) < 2 && VAR_1) {
                VAR_3 = 1;
                FUNC_2("profile 0x09 media_cd_r");
        } else {
                VAR_4 = 1;
                FUNC_2("profile 0x08 media_cd_rom");
        }
        return 0;
}
