
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* active_state; void* unit_file_state; void* load_state; } ;
typedef TYPE_1__ UnitStatusInfo ;


 int FUNC_0 (TYPE_1__*) ;
 void* FUNC_1 (void*) ;

__attribute__((used)) static void FUNC_2(UnitStatusInfo *VAR_0) {
        FUNC_0(VAR_0);

        VAR_0->load_state = FUNC_1(VAR_0->load_state);
        VAR_0->unit_file_state = FUNC_1(VAR_0->unit_file_state);
        VAR_0->active_state = FUNC_1(VAR_0->active_state);
}
