
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int inquiry_buf ;


 int VAR_0 ;
 int FUNC_0 (int,int*,int) ;
 int FUNC_1 (int,int*,int) ;
 int FUNC_2 (int,int*,int) ;
 int VAR_1 ;
 int FUNC_3 (int*,int) ;

__attribute__((used)) static int FUNC_4(int VAR_2,
                         uint8_t VAR_3[512],
                         int *VAR_4) {
        int VAR_5;
        uint8_t VAR_6[36];
        int VAR_7;
        int VAR_8;
        int VAR_9;
        int VAR_10 = 0;


        FUNC_3(VAR_3, 512);
        VAR_5 = FUNC_2 (VAR_2, VAR_6, sizeof (VAR_6));
        if (VAR_5 != 0)
                goto out;


        VAR_7 = VAR_6[0] & 0x1f;
        if (VAR_7 == 0x05)
          {
            VAR_10 = 1;
            VAR_5 = FUNC_1(VAR_2, VAR_3, 512);
            goto check_nul_bytes;
          }
        if (VAR_7 != 0x00) {
                VAR_5 = -1;
                VAR_1 = VAR_0;
                goto out;
        }


        VAR_5 = FUNC_0(VAR_2, VAR_3, 512);
        if (VAR_5 != 0)
                goto out;

 check_nul_bytes:

        VAR_8 = 1;
        for (VAR_9 = 0; VAR_9 < 512; VAR_9++) {
                if (VAR_3[VAR_9] != '\0') {
                        VAR_8 = 0;
                        break;
                }
        }

        if (VAR_8) {
                VAR_5 = -1;
                VAR_1 = VAR_0;
                goto out;
        }

out:
        if (VAR_4)
                *VAR_4 = VAR_10;
        return VAR_5;
}
