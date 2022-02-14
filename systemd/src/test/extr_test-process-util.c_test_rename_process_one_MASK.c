
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ si_code; scalar_t__ si_status; } ;
typedef TYPE_1__ siginfo_t ;
typedef scalar_t__ pid_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (char const*,int) ;
 scalar_t__ FUNC_4 (scalar_t__,TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(const char *VAR_2, int VAR_3) {
        siginfo_t VAR_4;
        pid_t VAR_5;

        VAR_5 = FUNC_2();
        FUNC_1(VAR_5 >= 0);

        if (VAR_5 == 0) {

                FUNC_3(VAR_2, VAR_3);
                FUNC_0(VAR_1);
        }

        FUNC_1(FUNC_4(VAR_5, &VAR_4) >= 0);
        FUNC_1(VAR_4.si_code == VAR_0);
        FUNC_1(VAR_4.si_status == VAR_1);
}
