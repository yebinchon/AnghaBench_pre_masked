
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cpu_set_t ;


 int * FUNC_0 (size_t) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int ,int ,int *) ;

int FUNC_5(void) {
        size_t VAR_4 = 16;
        int VAR_5;

        for (;;) {
                cpu_set_t *VAR_6;

                VAR_6 = FUNC_0(VAR_4);
                if (!VAR_6)
                        return -VAR_1;

                if (FUNC_4(0, FUNC_1(VAR_4), VAR_6) >= 0) {
                        int VAR_7;

                        VAR_7 = FUNC_2(FUNC_1(VAR_4), VAR_6);
                        FUNC_3(VAR_6);

                        if (VAR_7 <= 0)
                                return -VAR_0;

                        return VAR_7;
                }

                VAR_5 = -VAR_3;
                FUNC_3(VAR_6);

                if (VAR_5 != -VAR_0)
                        return VAR_5;
                if (VAR_4 > VAR_2/2)
                        return -VAR_1;
                VAR_4 *= 2;
        }
}
