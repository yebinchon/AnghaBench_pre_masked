
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int log_target_overridden; int original_log_target; } ;
typedef TYPE_1__ Manager ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(Manager *VAR_0) {
        FUNC_0(VAR_0);

        if (!VAR_0->log_target_overridden)
                return;

        FUNC_1("Restoring log target to original %s.", FUNC_3(VAR_0->original_log_target));

        FUNC_2(VAR_0->original_log_target);
        VAR_0->log_target_overridden = 0;
}
