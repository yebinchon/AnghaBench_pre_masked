
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int kill_signal; int final_kill_signal; int watchdog_signal; } ;
typedef int KillOperation ;
typedef TYPE_1__ KillContext ;







 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__ const*) ;

__attribute__((used)) static int FUNC_3(const KillContext *VAR_0, KillOperation VAR_1, bool *VAR_2) {
        FUNC_0(VAR_0);

        switch (VAR_1) {

        case 130:
        case 129:
                *VAR_2 = 0;
                return VAR_0->kill_signal;

        case 131:
                *VAR_2 = 0;
                return FUNC_2(VAR_0);

        case 132:
                *VAR_2 = 1;
                return VAR_0->final_kill_signal;

        case 128:
                *VAR_2 = 1;
                return VAR_0->watchdog_signal;

        default:
                FUNC_1("KillOperation unknown");
        }
}
