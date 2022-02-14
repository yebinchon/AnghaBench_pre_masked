
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int sd_id128_t ;
typedef int buffer ;
typedef scalar_t__ Id128Format ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,int,int) ;
 int FUNC_2 (char*,int *) ;

int FUNC_3(int VAR_6, Id128Format VAR_7, sd_id128_t *VAR_8) {
        char VAR_9[36 + 2];
        ssize_t VAR_10;

        FUNC_0(VAR_6 >= 0);
        FUNC_0(VAR_7 < VAR_4);






        VAR_10 = FUNC_1(VAR_6, VAR_9, sizeof(VAR_9), 0);
        if (VAR_10 < 0)
                return (int) VAR_10;
        if (VAR_10 == 0)
                return -VAR_1;

        switch (VAR_10) {

        case 33:
                if (VAR_9[32] != '\n')
                        return -VAR_0;

                VAR_5;
        case 32:
                if (VAR_7 == VAR_3)
                        return -VAR_0;

                VAR_9[32] = 0;
                break;

        case 37:
                if (VAR_9[36] != '\n')
                        return -VAR_0;

                VAR_5;
        case 36:
                if (VAR_7 == VAR_2)
                        return -VAR_0;

                VAR_9[36] = 0;
                break;

        default:
                return -VAR_0;
        }

        return FUNC_2(VAR_9, VAR_8);
}
