
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int log_target_overridden; int original_log_target; } ;
typedef TYPE_1__ Manager ;
typedef int LogTarget ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

void FUNC_5(Manager *VAR_0, LogTarget VAR_1) {
        FUNC_0(VAR_0);

        if (!VAR_0->log_target_overridden) {
                VAR_0->original_log_target = FUNC_1();
                VAR_0->log_target_overridden = 1;
        }

        FUNC_2("Setting log target to %s.", FUNC_4(VAR_1));
        FUNC_3(VAR_1);
}
