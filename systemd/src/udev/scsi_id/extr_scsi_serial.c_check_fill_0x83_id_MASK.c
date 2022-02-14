
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_id_search_values {unsigned char id_type; unsigned char naa_type; unsigned char code_set; } ;
struct scsi_id_device {int kernel; } ;


 scalar_t__ VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (struct scsi_id_device*,char*) ;
 char* VAR_7 ;
 int FUNC_1 (char*,int ,int,int) ;
 int FUNC_2 (char*,char*,unsigned int) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,int) ;

__attribute__((used)) static int FUNC_6(struct scsi_id_device *VAR_8,
                              unsigned char *VAR_9,
                              const struct scsi_id_search_values
                              *VAR_10, char *VAR_11, char *VAR_12,
                              int VAR_13, char *VAR_14,
                              char *VAR_15, char *VAR_16) {
        int VAR_17, VAR_18, VAR_19, VAR_20;





        if ((VAR_9[1] & 0x30) == 0x10) {
                if (VAR_10->id_type != VAR_4)
                        return 1;
        } else if ((VAR_9[1] & 0x30) != 0)
                return 1;

        if ((VAR_9[1] & 0x0f) != VAR_10->id_type)
                return 1;




        if ((VAR_10->naa_type != VAR_3) &&
            (VAR_10->naa_type != (VAR_9[4] & 0xf0) >> 4))
                return 1;




        if ((VAR_9[0] & 0x0f) != VAR_10->code_set)
                return 1;




        VAR_20 = VAR_9[3];
        if ((VAR_9[0] & 0x0f) != VAR_1)



                VAR_20 *= 2;




        VAR_20 += 2;
        if (VAR_10->id_type == VAR_5)
                VAR_20 += VAR_6 + VAR_0;

        if (VAR_13 < VAR_20) {
                FUNC_1("%s: length %d too short - need %d",
                          VAR_8->kernel, VAR_13, VAR_20);
                return 1;
        }

        if (VAR_10->id_type == VAR_4 && VAR_16 != ((void*)0)) {
                unsigned VAR_21;

                VAR_21 = ((unsigned)VAR_9[6] << 8) | VAR_9[7];
                FUNC_2(VAR_16,"%x", VAR_21);
                return 1;
        }

        VAR_11[0] = VAR_7[VAR_10->id_type];







        if (VAR_10->id_type == VAR_5)
                if (FUNC_0(VAR_8, VAR_11 + 1) < 0)
                        return 1;

        VAR_17 = 4;
        VAR_19 = VAR_18 = FUNC_4(VAR_11);
        if ((VAR_9[0] & 0x0f) == VAR_1) {



                while (VAR_17 < (4 + VAR_9[3]))
                        VAR_11[VAR_18++] = VAR_9[VAR_17++];
        } else {




                while (VAR_17 < (4 + VAR_9[3])) {
                        VAR_11[VAR_18++] = VAR_7[(VAR_9[VAR_17] & 0xf0) >> 4];
                        VAR_11[VAR_18++] = VAR_7[VAR_9[VAR_17] & 0x0f];
                        VAR_17++;
                }
        }

        FUNC_3(VAR_12, VAR_11 + VAR_19);

        if (VAR_10->id_type == VAR_2 && VAR_14 != ((void*)0)) {
                FUNC_5(VAR_14, VAR_11 + VAR_19, 16);
                if (VAR_15)
                        FUNC_5(VAR_15, VAR_11 + VAR_19 + 16, 16);
        }

        return 0;
}
