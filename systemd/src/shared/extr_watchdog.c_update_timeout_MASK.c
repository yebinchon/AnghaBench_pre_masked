
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usec_t ;
typedef int buf ;


 scalar_t__ FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (char*,int,int,int ) ;
 int FUNC_2 (scalar_t__,int ,int*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int,char*,...) ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_6(void) {
        int VAR_14;

        if (VAR_12 < 0)
                return 0;

        if (VAR_13 == VAR_4)
                return 0;
        else if (VAR_13 == 0) {
                int VAR_15;

                VAR_15 = VAR_9;
                VAR_14 = FUNC_2(VAR_12, VAR_7, &VAR_15);
                if (VAR_14 < 0)
                        return FUNC_5(VAR_11, "Failed to disable hardware watchdog: %m");
        } else {
                int VAR_16, VAR_17;
                char VAR_18[VAR_1];

                VAR_16 = (int) FUNC_0(VAR_13, VAR_5);
                VAR_14 = FUNC_2(VAR_12, VAR_8, &VAR_16);
                if (VAR_14 < 0)
                        return FUNC_5(VAR_11, "Failed to set timeout to %is: %m", VAR_16);

                VAR_13 = (usec_t) VAR_16 * VAR_5;
                FUNC_4("Set hardware watchdog to %s.", FUNC_1(VAR_18, sizeof(VAR_18), VAR_13, 0));

                VAR_17 = VAR_10;
                VAR_14 = FUNC_2(VAR_12, VAR_7, &VAR_17);
                if (VAR_14 < 0) {

                        FUNC_3(VAR_11 == VAR_0 ? VAR_2 : VAR_3,
                                 "Failed to enable hardware watchdog: %m");
                        if (VAR_11 != VAR_0)
                                return -VAR_11;
                }

                VAR_14 = FUNC_2(VAR_12, VAR_6, 0);
                if (VAR_14 < 0)
                        return FUNC_5(VAR_11, "Failed to ping hardware watchdog: %m");
        }

        return 0;
}
