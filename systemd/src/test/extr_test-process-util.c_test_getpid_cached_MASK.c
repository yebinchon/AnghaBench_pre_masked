
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ si_status; scalar_t__ si_code; } ;
typedef TYPE_1__ siginfo_t ;
typedef scalar_t__ pid_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 (scalar_t__,TYPE_1__*) ;

__attribute__((used)) static void FUNC_7(void) {
        siginfo_t VAR_2;
        pid_t VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;

        VAR_3 = FUNC_5();
        VAR_4 = FUNC_4();
        VAR_5 = FUNC_3();

        FUNC_1(VAR_3 == VAR_4 && VAR_3 == VAR_5);

        VAR_9 = FUNC_2();
        FUNC_1(VAR_9 >= 0);

        if (VAR_9 == 0) {

                VAR_3 = FUNC_5();
                VAR_4 = FUNC_4();
                VAR_5 = FUNC_3();

                FUNC_1(VAR_3 == VAR_4 && VAR_3 == VAR_5);
                FUNC_0(VAR_1);
        }

        VAR_6 = FUNC_5();
        VAR_7 = FUNC_4();
        VAR_8 = FUNC_3();

        FUNC_1(VAR_3 == VAR_6 && VAR_3 == VAR_7 && VAR_3 == VAR_8);

        FUNC_1(FUNC_6(VAR_9, &VAR_2) >= 0);
        FUNC_1(VAR_2.si_status == 0);
        FUNC_1(VAR_2.si_code == VAR_0);
}
