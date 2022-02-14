
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ si_code; int si_status; } ;
typedef TYPE_1__ siginfo_t ;
typedef int pid_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int,int *) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int ,TYPE_1__*) ;

__attribute__((used)) static void FUNC_6(void) {
        siginfo_t VAR_8;
        pid_t VAR_9;
        int VAR_10;

        FUNC_0(VAR_6);

        VAR_10 = FUNC_3("(test-child)", VAR_5|VAR_1|VAR_2|VAR_3|VAR_4, &VAR_9);
        FUNC_2(VAR_10 >= 0);

        if (VAR_10 == 0) {

                FUNC_4(100 * VAR_7);

                FUNC_1(88);
        }

        FUNC_2(FUNC_5(VAR_9, &VAR_8) >= 0);
        FUNC_2(VAR_8.si_code == VAR_0);
        FUNC_2(VAR_8.si_status == 88);
}
