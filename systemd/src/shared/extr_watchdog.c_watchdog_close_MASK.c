
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__,int ,int*) ;
 int FUNC_1 (scalar_t__,char*) ;
 int FUNC_2 (scalar_t__,char*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_4 (scalar_t__,char const*,int) ;

void FUNC_5(bool VAR_5) {
        int VAR_6;

        if (VAR_4 < 0)
                return;

        if (VAR_5) {
                int VAR_7;


                VAR_7 = VAR_2;
                VAR_6 = FUNC_0(VAR_4, VAR_1, &VAR_7);
                if (VAR_6 < 0)
                        FUNC_2(VAR_3, "Failed to disable hardware watchdog: %m");


                for (;;) {
                        static const char VAR_8 = 'V';

                        if (FUNC_4(VAR_4, &VAR_8, 1) > 0)
                                break;

                        if (VAR_3 != VAR_0) {
                                FUNC_1(VAR_3, "Failed to disarm watchdog timer: %m");
                                break;
                        }
                }
        }

        VAR_4 = FUNC_3(VAR_4);
}
