
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_rdev; } ;
struct scsi_id_device {char* vendor; char* model; char* revision; int type; int kernel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int,struct stat*) ;
 int FUNC_2 (int ,char*,char const*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,unsigned char*,int) ;
 int FUNC_5 (unsigned char*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char const*,int) ;
 int FUNC_8 (struct scsi_id_device*,int,int ,int ,unsigned char*,int) ;
 int FUNC_9 (int ,char*,unsigned char,...) ;

int FUNC_10(struct scsi_id_device *VAR_5, const char *VAR_6) {
        int VAR_7;
        unsigned char VAR_8[VAR_3];
        struct stat VAR_9;
        int VAR_10 = 0;

        VAR_7 = FUNC_7(VAR_6, VAR_2 | VAR_1 | VAR_0);
        if (VAR_7 < 0) {
                FUNC_2(VAR_4, "scsi_id: cannot open %s: %m", VAR_6);
                return 1;
        }

        if (FUNC_1(VAR_7, &VAR_9) < 0) {
                FUNC_2(VAR_4, "scsi_id: cannot stat %s: %m", VAR_6);
                VAR_10 = 2;
                goto out;
        }
        FUNC_9(VAR_5->kernel,"%d:%d", FUNC_3(VAR_9.st_rdev),
                FUNC_6(VAR_9.st_rdev));

        FUNC_5(VAR_8, VAR_3);
        VAR_10 = FUNC_8(VAR_5, VAR_7, 0, 0, VAR_8, VAR_3);
        if (VAR_10 < 0)
                goto out;

        VAR_10 = 0;
        FUNC_4(VAR_5->vendor, VAR_8 + 8, 8);
        VAR_5->vendor[8] = '\0';
        FUNC_4(VAR_5->model, VAR_8 + 16, 16);
        VAR_5->model[16] = '\0';
        FUNC_4(VAR_5->revision, VAR_8 + 32, 4);
        VAR_5->revision[4] = '\0';
        FUNC_9(VAR_5->type,"%x", VAR_8[0] & 0x1f);

out:
        FUNC_0(VAR_7);
        return VAR_10;
}
