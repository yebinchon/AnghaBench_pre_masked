
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus_message ;


 scalar_t__ FUNC_0 (char const*,char*,char*,...) ;
 int FUNC_1 (int *,char const*,char const*) ;
 int FUNC_2 (int *,char const*,char const*) ;
 int FUNC_3 (int *,char const*,char const*) ;
 scalar_t__ FUNC_4 (char const*,char*) ;

__attribute__((used)) static int FUNC_5(sd_bus_message *VAR_0, const char *VAR_1, const char *VAR_2) {
        if (FUNC_4(VAR_1, "KillMode"))
                return FUNC_3(VAR_0, VAR_1, VAR_2);

        if (FUNC_0(VAR_1, "SendSIGHUP", "SendSIGKILL"))
                return FUNC_1(VAR_0, VAR_1, VAR_2);

        if (FUNC_0(VAR_1, "KillSignal", "RestartKillSignal", "FinalKillSignal", "WatchdogSignal"))
                return FUNC_2(VAR_0, VAR_1, VAR_2);

        return 0;
}
