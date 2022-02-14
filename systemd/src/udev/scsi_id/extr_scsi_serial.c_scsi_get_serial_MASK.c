
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int tv_nsec; scalar_t__ tv_sec; } ;
struct scsi_id_device {int serial_short; int serial; int tgpt_group; int wwn_vendor_extension; int wwn; int unit_serial_number; int kernel; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct scsi_id_device*,int,unsigned char*,int) ;
 scalar_t__ FUNC_2 (struct scsi_id_device*,int,int ,int ,int) ;
 scalar_t__ FUNC_3 (struct scsi_id_device*,int,int ,int ,int,int ,int ,int ,int ) ;
 int FUNC_4 (struct scsi_id_device*,int,int ,int ,int) ;
 scalar_t__ VAR_8 ;
 int FUNC_5 () ;
 int FUNC_6 (char*,int ,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (struct timespec*,int *) ;
 int FUNC_9 (char const*,int) ;
 int FUNC_10 () ;

int FUNC_11(struct scsi_id_device *VAR_9, const char *VAR_10,
                    int VAR_11, int VAR_12) {
        unsigned char VAR_13[VAR_7];
        int VAR_14 = -1;
        int VAR_15;
        int VAR_16;
        int VAR_17;

        FUNC_7(VAR_9->serial, VAR_12);
        FUNC_5();
        for (VAR_15 = 20; VAR_15 > 0; VAR_15--) {
                struct timespec VAR_18;

                VAR_14 = FUNC_9(VAR_10, VAR_3 | VAR_2 | VAR_1);
                if (VAR_14 >= 0 || VAR_8 != VAR_0)
                        break;
                VAR_18.tv_sec = 0;
                VAR_18.tv_nsec = (200 * 1000 * 1000) + (FUNC_10() % 100 * 1000 * 1000);
                FUNC_8(&VAR_18, ((void*)0));
        }
        if (VAR_14 < 0)
                return 1;

        if (VAR_11 == VAR_4) {
                if (FUNC_2(VAR_9, VAR_14, VAR_9->serial, VAR_9->serial_short, VAR_12)) {
                        VAR_17 = 1;
                        goto completed;
                } else {
                        VAR_17 = 0;
                        goto completed;
                }
        } else if (VAR_11 == VAR_5) {
                if (FUNC_3(VAR_9, VAR_14, VAR_9->serial, VAR_9->serial_short, VAR_12, VAR_9->unit_serial_number, VAR_9->wwn, VAR_9->wwn_vendor_extension, VAR_9->tgpt_group)) {
                        VAR_17 = 1;
                        goto completed;
                } else {
                        VAR_17 = 0;
                        goto completed;
                }
        } else if (VAR_11 == VAR_6) {
                VAR_17 = FUNC_4(VAR_9, VAR_14, VAR_9->serial, VAR_9->serial_short, VAR_12);
                if (VAR_17) {





                        if (VAR_17 == 2) {
                                if (FUNC_3(VAR_9, VAR_14, VAR_9->serial, VAR_9->serial_short, VAR_12, VAR_9->unit_serial_number, VAR_9->wwn, VAR_9->wwn_vendor_extension, VAR_9->tgpt_group)) {
                                        VAR_17 = 1;
                                        goto completed;
                                } else {
                                        VAR_17 = 0;
                                        goto completed;
                                }
                        }
                        else {
                                VAR_17 = 1;
                                goto completed;
                        }
                } else {
                        VAR_17 = 0;
                        goto completed;
                }
        } else if (VAR_11 != 0x00) {
                FUNC_6("%s: unsupported page code 0x%d", VAR_9->kernel, VAR_11);
                VAR_17 = 1;
                goto completed;
        }





        if (FUNC_1(VAR_9, VAR_14, VAR_13, VAR_7)) {





                VAR_17 = 1;
                goto completed;
        }

        for (VAR_16 = 4; VAR_16 <= VAR_13[3] + 3; VAR_16++)
                if (VAR_13[VAR_16] == VAR_5)
                        if (!FUNC_3(VAR_9, VAR_14,
                                                    VAR_9->serial, VAR_9->serial_short, VAR_12, VAR_9->unit_serial_number, VAR_9->wwn, VAR_9->wwn_vendor_extension, VAR_9->tgpt_group)) {



                                VAR_17 = 0;
                                goto completed;
                        }

        for (VAR_16 = 4; VAR_16 <= VAR_13[3] + 3; VAR_16++)
                if (VAR_13[VAR_16] == VAR_4)
                        if (!FUNC_2(VAR_9, VAR_14,
                                                    VAR_9->serial, VAR_9->serial_short, VAR_12)) {



                                VAR_17 = 0;
                                goto completed;
                        }
        VAR_17 = 1;

completed:
        FUNC_0(VAR_14);
        return VAR_17;
}
