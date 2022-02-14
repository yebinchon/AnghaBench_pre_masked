
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int send_sigkill; int send_sighup; int watchdog_signal; int final_kill_signal; int kill_signal; } ;
typedef TYPE_1__ KillContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(KillContext *VAR_3) {
        FUNC_0(VAR_3);

        VAR_3->kill_signal = VAR_2;

        VAR_3->final_kill_signal = VAR_1;
        VAR_3->send_sigkill = 1;
        VAR_3->send_sighup = 0;
        VAR_3->watchdog_signal = VAR_0;
}
