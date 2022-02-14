
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 (scalar_t__,int*,int ) ;

__attribute__((used)) static void FUNC_6(void (*VAR_1)(void)) {
        pid_t VAR_2 = 0;

        VAR_2 = FUNC_4();
        FUNC_2(VAR_2 >= 0);
        if (VAR_2 == 0) {
                VAR_1();
                FUNC_3(VAR_0);
        } else if (VAR_2 > 0) {
                int VAR_3;

                FUNC_2(FUNC_5(VAR_2, &VAR_3, 0) > 0);
                FUNC_2(FUNC_1(VAR_3) && FUNC_0(VAR_3) == 0);
        }
}
