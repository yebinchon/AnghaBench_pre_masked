
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_id_device {int kernel; int vendor; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,...) ;
 int FUNC_1 (unsigned char*,unsigned int) ;
 int FUNC_2 (struct scsi_id_device*,int,int,int,unsigned char*,unsigned int) ;
 scalar_t__ FUNC_3 (char*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct scsi_id_device *VAR_2, int VAR_3,
                                 unsigned char *VAR_4, unsigned VAR_5) {
        int VAR_6;

        FUNC_1(VAR_4, VAR_5);
        VAR_6 = FUNC_2(VAR_2, VAR_3, 1, 0x0, VAR_4, VAR_5);
        if (VAR_6 < 0)
                return 1;

        if (VAR_4[1] != 0) {
                FUNC_0("%s: page 0 not available.", VAR_2->kernel);
                return 1;
        }
        if (VAR_4[3] > VAR_5) {
                FUNC_0("%s: page 0 buffer too long %d", VAR_2->kernel, VAR_4[3]);
                return 1;
        }
        if (VAR_4[3] > VAR_0) {




                if (FUNC_3((char*) VAR_4 + VAR_1, VAR_2->vendor, VAR_1)) {
                        FUNC_0("%s: invalid page0 data", VAR_2->kernel);
                        return 1;
                }
        }
        return 0;
}
