
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmd {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,unsigned char*,unsigned char*,unsigned char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct scsi_cmd*) ;
 int FUNC_5 (struct scsi_cmd*,int,unsigned char*,int) ;
 int FUNC_6 (struct scsi_cmd*,int,int) ;

__attribute__((used)) static int FUNC_7(int VAR_1) {
        struct scsi_cmd VAR_2;
        unsigned char VAR_3[128];
        int VAR_4;

        FUNC_4(&VAR_2);
        FUNC_6(&VAR_2, 0, 0x12);
        FUNC_6(&VAR_2, 4, 36);
        FUNC_6(&VAR_2, 5, 0);
        VAR_4 = FUNC_5(&VAR_2, VAR_1, VAR_3, 36);
        if (VAR_4 != 0) {
                FUNC_1("INQUIRY", VAR_4);
                return -1;
        }

        if ((VAR_3[0] & 0x1F) != 5)
                return FUNC_3(FUNC_0(VAR_0), "not an MMC unit");

        FUNC_2("INQUIRY: [%.8s][%.16s][%.4s]", VAR_3 + 8, VAR_3 + 16, VAR_3 + 32);
        return 0;
}
