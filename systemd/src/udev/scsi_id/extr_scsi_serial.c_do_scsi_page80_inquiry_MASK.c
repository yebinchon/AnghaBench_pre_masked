
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_id_device {int kernel; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct scsi_id_device*,char*) ;
 int FUNC_1 (char*,int ,...) ;
 int FUNC_2 (char*,unsigned char*,int) ;
 int FUNC_3 (unsigned char*,int) ;
 int FUNC_4 (struct scsi_id_device*,int,int,unsigned char,unsigned char*,int) ;

__attribute__((used)) static int FUNC_5(struct scsi_id_device *VAR_4, int VAR_5,
                                  char *VAR_6, char *VAR_7, int VAR_8) {
        int VAR_9;
        int VAR_10;
        int VAR_11;
        int VAR_12;
        unsigned char VAR_13[VAR_2];

        FUNC_3(VAR_13, VAR_2);
        VAR_9 = FUNC_4(VAR_4, VAR_5, 1, VAR_1, VAR_13, VAR_2);
        if (VAR_9 < 0)
                return VAR_9;

        if (VAR_13[1] != VAR_1) {
                FUNC_1("%s: Invalid page 0x80", VAR_4->kernel);
                return 1;
        }

        VAR_12 = 1 + VAR_3 + VAR_0 + VAR_13[3];
        if (VAR_8 < VAR_12) {
                FUNC_1("%s: length %d too short - need %d",
                          VAR_4->kernel, VAR_8, VAR_12);
                return 1;
        }




        VAR_12 = VAR_13[3];
        if (VAR_6) {
                VAR_6[0] = 'S';
                VAR_10 = FUNC_0(VAR_4, VAR_6 + 1);
                if (VAR_10 < 0)
                        return 1;
                VAR_10++;
                for (VAR_11 = 4; VAR_11 < VAR_12 + 4; VAR_11++, VAR_10++)
                        VAR_6[VAR_10] = VAR_13[VAR_11];
        }
        if (VAR_7) {
                FUNC_2(VAR_7, VAR_13 + 4, VAR_12);
                VAR_7[VAR_12] = '\0';
        }
        return 0;
}
