
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_id128_t ;
typedef scalar_t__ Id128Format ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int,char*,size_t,int) ;
 int FUNC_5 (int ,char*) ;

int FUNC_6(int VAR_3, Id128Format VAR_4, sd_id128_t VAR_5, bool VAR_6) {
        char VAR_7[36 + 2];
        size_t VAR_8;
        int VAR_9;

        FUNC_0(VAR_3 >= 0);
        FUNC_0(VAR_4 < VAR_1);

        if (VAR_4 != VAR_0) {
                FUNC_5(VAR_5, VAR_7);
                VAR_7[32] = '\n';
                VAR_8 = 33;
        } else {
                FUNC_3(VAR_5, VAR_7);
                VAR_7[36] = '\n';
                VAR_8 = 37;
        }

        VAR_9 = FUNC_4(VAR_3, VAR_7, VAR_8, 0);
        if (VAR_9 < 0)
                return VAR_9;

        if (VAR_6) {
                if (FUNC_1(VAR_3) < 0)
                        return -VAR_2;

                VAR_9 = FUNC_2(VAR_3);
                if (VAR_9 < 0)
                        return VAR_9;
        }

        return 0;
}
