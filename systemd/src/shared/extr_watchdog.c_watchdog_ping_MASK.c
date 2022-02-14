
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 () ;
 scalar_t__ VAR_2 ;

int FUNC_3(void) {
        int VAR_3;

        if (VAR_2 < 0) {
                VAR_3 = FUNC_2();
                if (VAR_3 < 0)
                        return VAR_3;
        }

        VAR_3 = FUNC_0(VAR_2, VAR_0, 0);
        if (VAR_3 < 0)
                return FUNC_1(VAR_1, "Failed to ping hardware watchdog: %m");

        return 0;
}
