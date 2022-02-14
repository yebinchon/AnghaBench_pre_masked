
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_id_search_values {int dummy; } ;
struct scsi_id_device {int dummy; } ;


 size_t VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static int FUNC_2(struct scsi_id_device *VAR_2,
                                   unsigned char *VAR_3,
                                   const struct scsi_id_search_values
                                   *VAR_4, char *VAR_5, char *VAR_6, int VAR_7) {
        int VAR_8, VAR_9;

        VAR_5[0] = VAR_1[VAR_0];

        VAR_9 = FUNC_0(VAR_5);

        for (VAR_8 = 0; (VAR_8 < VAR_3[3]) && (VAR_9 < VAR_7-3); ++VAR_8) {
                VAR_5[VAR_9++] = VAR_1[(VAR_3[4+VAR_8] & 0xf0) >> 4];
                VAR_5[VAR_9++] = VAR_1[ VAR_3[4+VAR_8] & 0x0f];
        }
        VAR_5[VAR_7-1] = 0;
        FUNC_1(VAR_6, VAR_5, VAR_7-1);
        return 0;
}
