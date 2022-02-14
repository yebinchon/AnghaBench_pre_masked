
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int,int ,int ,...) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (int,char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;

__attribute__((used)) static int FUNC_14(void) {
        int VAR_12;

        VAR_12 = FUNC_7(VAR_6);
        if (VAR_12 < 0)
                return VAR_12;


        if (VAR_11 > 0 && FUNC_9() == 0)
                return 0;


        if (FUNC_2() != 0) {
                if (VAR_7 || VAR_8 > 0) {
                        (void) FUNC_10();
                        return -VAR_5;
                }




                if (FUNC_0(VAR_6, VAR_1, VAR_2, VAR_0)) {
                        VAR_12 = FUNC_8(VAR_6);
                        if (VAR_12 >= 0)
                                return VAR_12;
                        if (FUNC_0(VAR_12, -VAR_4, -VAR_3))



                                return VAR_12;

                }
        }




        VAR_9 = 1;

        if (!VAR_7 && !VAR_8)
                return FUNC_12();

        FUNC_1(FUNC_2() == 0);

        if (!VAR_10) {
                if (FUNC_11() > 0)
                        FUNC_4("Not writing utmp record, assuming that systemd-update-utmp is used.");
                else {
                        VAR_12 = FUNC_13();
                        if (VAR_12 < 0)
                                FUNC_6(VAR_12, "Failed to write utmp record: %m");
                }
        }

        if (VAR_7)
                return 0;

        VAR_12 = FUNC_3(VAR_6);
        return FUNC_5(VAR_12, "Failed to reboot: %m");
}
