
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int shutdown_dry_run; int unlink_nologin; scalar_t__ scheduled_shutdown_timeout; int scheduled_shutdown_type; void* nologin_timeout_source; void* wall_message_timeout_source; void* scheduled_shutdown_timeout_source; } ;
typedef TYPE_1__ Manager ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (void*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(Manager *VAR_0) {
        FUNC_0(VAR_0);

        VAR_0->scheduled_shutdown_timeout_source = FUNC_2(VAR_0->scheduled_shutdown_timeout_source);
        VAR_0->wall_message_timeout_source = FUNC_2(VAR_0->wall_message_timeout_source);
        VAR_0->nologin_timeout_source = FUNC_2(VAR_0->nologin_timeout_source);

        VAR_0->scheduled_shutdown_type = FUNC_1(VAR_0->scheduled_shutdown_type);
        VAR_0->scheduled_shutdown_timeout = 0;
        VAR_0->shutdown_dry_run = 0;

        if (VAR_0->unlink_nologin) {
                (void) FUNC_4("/run/nologin");
                VAR_0->unlink_nologin = 0;
        }

        (void) FUNC_3("/run/systemd/shutdown/scheduled");
}
