
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmd {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct scsi_cmd*) ;
 int FUNC_2 (struct scsi_cmd*,int,int *,int ) ;
 int FUNC_3 (struct scsi_cmd*,int,int) ;

__attribute__((used)) static int FUNC_4(int VAR_0) {
        struct scsi_cmd VAR_1;
        int VAR_2;

        FUNC_1(&VAR_1);
        FUNC_3(&VAR_1, 0, 0x1b);
        FUNC_3(&VAR_1, 4, 0x02);
        FUNC_3(&VAR_1, 5, 0);
        VAR_2 = FUNC_2(&VAR_1, VAR_0, ((void*)0), 0);
        if (VAR_2 != 0) {
                FUNC_0("START_STOP_UNIT", VAR_2);
                return -1;
        }
        return 0;
}
