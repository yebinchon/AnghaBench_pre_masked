
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int*) ;
 int FUNC_4 () ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (char*,...) ;

__attribute__((used)) static void FUNC_7(void) {
        int VAR_0;

        if (FUNC_1(((void*)0)) > 0) {
                int VAR_1;
                VAR_0 = FUNC_3(&VAR_1);
                if (VAR_0 < 0)
                        FUNC_5(VAR_0, "Failed to apply local time delta, ignoring: %m");
                else
                        FUNC_6("RTC configured in localtime, applying delta of %i minutes to system time.", VAR_1);

        } else if (!FUNC_4()) {
                (void) FUNC_2();
        }

        VAR_0 = FUNC_0();
        if (VAR_0 < 0)
                FUNC_5(VAR_0, "Current system time is before build time, but cannot correct: %m");
        else if (VAR_0 > 0)
                FUNC_6("System time before build time, advancing clock.");
}
