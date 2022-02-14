
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_id_device {int kernel; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,int,...) ;
 int FUNC_3 (int ,char*,int ,...) ;

__attribute__((used)) static int FUNC_4(struct scsi_id_device *VAR_1,
                           unsigned char *VAR_2, int VAR_3) {
        int VAR_4;
        int VAR_5;
        int VAR_6;
        int VAR_7;
        int VAR_8, VAR_9;
        if (VAR_3 < 1)
                return FUNC_3(FUNC_1(VAR_0),
                                       "%s: sense buffer empty",
                                       VAR_1->kernel);

        VAR_6 = (VAR_2[0] >> 4) & 0x07;
        VAR_5 = VAR_2[0] & 0xf;

        if (VAR_6 == 7) {



                VAR_4 = VAR_2[7] + 8;
                if (VAR_3 < VAR_4)
                        return FUNC_3(FUNC_1(VAR_0),
                                               "%s: sense buffer too small %d bytes, %d bytes too short",
                                               VAR_1->kernel, VAR_3,
                                               VAR_4 - VAR_3);

                if (FUNC_0(VAR_5, 0x0, 0x1)) {
                        VAR_7 = VAR_2[2] & 0xf;
                        if (VAR_4 < 14)



                                return FUNC_3(FUNC_1(VAR_0),
                                                       "%s: sense result too small %d bytes",
                                                       VAR_1->kernel, VAR_4);

                        VAR_8 = VAR_2[12];
                        VAR_9 = VAR_2[13];
                } else if (FUNC_0(VAR_5, 0x2, 0x3)) {
                        VAR_7 = VAR_2[1] & 0xf;
                        VAR_8 = VAR_2[2];
                        VAR_9 = VAR_2[3];
                } else
                        return FUNC_3(FUNC_1(VAR_0),
                                               "%s: invalid sense code 0x%x",
                                               VAR_1->kernel, VAR_5);

                FUNC_2("%s: sense key 0x%x ASC 0x%x ASCQ 0x%x",
                          VAR_1->kernel, VAR_7, VAR_8, VAR_9);
        } else {
                if (VAR_3 < 4)
                        return FUNC_3(FUNC_1(VAR_0),
                                               "%s: sense buffer too small %d bytes, %d bytes too short",
                                               VAR_1->kernel, VAR_3,
                                               4 - VAR_3);

                if (VAR_2[0] < 15)
                        FUNC_2("%s: old sense key: 0x%x", VAR_1->kernel, VAR_2[0] & 0x0f);
                else
                        FUNC_2("%s: sense = %2x %2x",
                                  VAR_1->kernel, VAR_2[0], VAR_2[2]);
                FUNC_2("%s: non-extended sense class %d code 0x%0x",
                          VAR_1->kernel, VAR_6, VAR_5);

        }

        return -1;
}
