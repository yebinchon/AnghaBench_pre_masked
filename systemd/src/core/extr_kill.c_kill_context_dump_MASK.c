
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int send_sighup; int send_sigkill; int final_kill_signal; int kill_signal; int kill_mode; } ;
typedef TYPE_1__ KillContext ;
typedef int FILE ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,char*,char const*,char*,char const*,char*,char const*,char*,char const*,char*,char const*,char*,char const*,char*) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 char* FUNC_4 (int ) ;
 char* FUNC_5 (char const*) ;
 char* FUNC_6 (int ) ;

void FUNC_7(KillContext *VAR_0, FILE *VAR_1, const char *VAR_2) {
        FUNC_0(VAR_0);

        VAR_2 = FUNC_5(VAR_2);

        FUNC_1(VAR_1,
                "%sKillMode: %s\n"
                "%sKillSignal: SIG%s\n"
                "%sRestartKillSignal: SIG%s\n"
                "%sFinalKillSignal: SIG%s\n"
                "%sSendSIGKILL: %s\n"
                "%sSendSIGHUP: %s\n",
                VAR_2, FUNC_2(VAR_0->kill_mode),
                VAR_2, FUNC_4(VAR_0->kill_signal),
                VAR_2, FUNC_4(FUNC_3(VAR_0)),
                VAR_2, FUNC_4(VAR_0->final_kill_signal),
                VAR_2, FUNC_6(VAR_0->send_sigkill),
                VAR_2, FUNC_6(VAR_0->send_sighup));
}
