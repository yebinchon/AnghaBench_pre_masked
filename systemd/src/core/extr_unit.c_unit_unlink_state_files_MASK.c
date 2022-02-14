
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int exported_invocation_id; int exported_log_level_max; int exported_log_extra_fields; int exported_log_ratelimit_interval; int exported_log_ratelimit_burst; int id; int manager; } ;
typedef TYPE_1__ Unit ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 char* FUNC_2 (char*,int ) ;
 int FUNC_3 (char const*) ;

void FUNC_4(Unit *VAR_0) {
        const char *VAR_1;

        FUNC_1(VAR_0);

        if (!VAR_0->id)
                return;

        if (!FUNC_0(VAR_0->manager))
                return;



        if (VAR_0->exported_invocation_id) {
                VAR_1 = FUNC_2("/run/systemd/units/invocation:", VAR_0->id);
                (void) FUNC_3(VAR_1);

                VAR_0->exported_invocation_id = 0;
        }

        if (VAR_0->exported_log_level_max) {
                VAR_1 = FUNC_2("/run/systemd/units/log-level-max:", VAR_0->id);
                (void) FUNC_3(VAR_1);

                VAR_0->exported_log_level_max = 0;
        }

        if (VAR_0->exported_log_extra_fields) {
                VAR_1 = FUNC_2("/run/systemd/units/extra-fields:", VAR_0->id);
                (void) FUNC_3(VAR_1);

                VAR_0->exported_log_extra_fields = 0;
        }

        if (VAR_0->exported_log_ratelimit_interval) {
                VAR_1 = FUNC_2("/run/systemd/units/log-rate-limit-interval:", VAR_0->id);
                (void) FUNC_3(VAR_1);

                VAR_0->exported_log_ratelimit_interval = 0;
        }

        if (VAR_0->exported_log_ratelimit_burst) {
                VAR_1 = FUNC_2("/run/systemd/units/log-rate-limit-burst:", VAR_0->id);
                (void) FUNC_3(VAR_1);

                VAR_0->exported_log_ratelimit_burst = 0;
        }
}
