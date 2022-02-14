
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int sd_bus_message ;
typedef int sd_bus_error ;
typedef int sd_bus ;
typedef scalar_t__ pid_t ;
struct TYPE_2__ {int running; scalar_t__ main_pid; } ;
typedef TYPE_1__ UnitStatusInfo ;


 int FUNC_0 (int *,char*,scalar_t__*) ;

__attribute__((used)) static int FUNC_1(sd_bus *VAR_0, const char *VAR_1, sd_bus_message *VAR_2, sd_bus_error *VAR_3, void *VAR_4) {
        UnitStatusInfo *VAR_5 = VAR_4;
        uint32_t VAR_6;
        int VAR_7;

        VAR_7 = FUNC_0(VAR_2, "u", &VAR_6);
        if (VAR_7 < 0)
                return VAR_7;

        VAR_5->main_pid = (pid_t) VAR_6;
        VAR_5->running = VAR_6 > 0;

        return 0;
}
