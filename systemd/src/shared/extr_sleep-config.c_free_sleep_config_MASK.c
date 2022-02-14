
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int hybrid_states; int hybrid_modes; int hibernate_states; int hibernate_modes; int suspend_states; int suspend_modes; } ;
typedef TYPE_1__ SleepConfig ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

void FUNC_2(SleepConfig *VAR_0) {
        if (!VAR_0)
                return;

        FUNC_1(VAR_0->suspend_modes);
        FUNC_1(VAR_0->suspend_states);

        FUNC_1(VAR_0->hibernate_modes);
        FUNC_1(VAR_0->hibernate_states);

        FUNC_1(VAR_0->hybrid_modes);
        FUNC_1(VAR_0->hybrid_states);

        FUNC_0(VAR_0);
}
