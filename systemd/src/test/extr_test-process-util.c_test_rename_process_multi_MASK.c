
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ si_code; scalar_t__ si_status; } ;
typedef TYPE_1__ siginfo_t ;
typedef scalar_t__ pid_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int,int,int) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*,int ) ;
 scalar_t__ FUNC_6 (scalar_t__,TYPE_1__*) ;

__attribute__((used)) static void FUNC_7(void) {
        pid_t VAR_3;

        VAR_3 = FUNC_2();
        FUNC_1(VAR_3 >= 0);

        if (VAR_3 > 0) {
                siginfo_t VAR_4;

                FUNC_1(FUNC_6(VAR_3, &VAR_4) >= 0);
                FUNC_1(VAR_4.si_code == VAR_0);
                FUNC_1(VAR_4.si_status == VAR_2);

                return;
        }


        FUNC_4("one", 1);
        FUNC_4("more", 0);
        (void) FUNC_3(99, 99, 99);
        FUNC_4("time!", 0);
        FUNC_4("0", 1);
        FUNC_5("", -VAR_1);
        FUNC_5(((void*)0), -VAR_1);
        FUNC_0(VAR_2);
}
