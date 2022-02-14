
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (scalar_t__,int*,int ) ;

__attribute__((used)) static void FUNC_6(void) {
        pid_t VAR_1;

        VAR_1 = FUNC_2();
        FUNC_1(VAR_1 >= 0);
        if (VAR_1 == 0) {
                FUNC_0(VAR_0);
        } else {
                int VAR_2;

                FUNC_5(VAR_1, &VAR_2, 0);
                FUNC_1(!FUNC_4(VAR_1));
        }
        FUNC_1(FUNC_4(FUNC_3()));
        FUNC_1(!FUNC_4(-1));
}
