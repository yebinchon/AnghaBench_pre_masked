
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_id_device {int kernel; } ;


 unsigned char VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (unsigned char*,int) ;
 int FUNC_2 (struct scsi_id_device*,int,int,unsigned char,unsigned char*,int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct scsi_id_device *VAR_4, int VAR_5,
                                          char *VAR_6, char *VAR_7, int VAR_8) {
        int VAR_9;
        int VAR_10, VAR_11;
        unsigned char VAR_12[VAR_2];

        FUNC_1(VAR_12, VAR_2);
        VAR_9 = FUNC_2(VAR_4, VAR_5, 1, VAR_0, VAR_12, VAR_2);
        if (VAR_9 < 0)
                return 1;

        if (VAR_12[1] != VAR_0) {
                FUNC_0("%s: Invalid page 0x83", VAR_4->kernel);
                return 1;
        }
        if (VAR_12[6] == 0)
                return 2;

        VAR_6[0] = VAR_3[VAR_1];



        VAR_10 = 4;
        VAR_11 = FUNC_3(VAR_6);





        while (VAR_10 < (VAR_12[3]+4)) {
                VAR_6[VAR_11++] = VAR_3[(VAR_12[VAR_10] & 0xf0) >> 4];
                VAR_6[VAR_11++] = VAR_3[VAR_12[VAR_10] & 0x0f];
                VAR_10++;
        }
        return 0;
}
