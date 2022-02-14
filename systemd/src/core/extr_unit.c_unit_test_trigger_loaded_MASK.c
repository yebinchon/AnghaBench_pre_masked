
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ load_state; int id; } ;
typedef TYPE_1__ Unit ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,char*,...) ;

int FUNC_3(Unit *VAR_2) {
        Unit *VAR_3;



        VAR_3 = FUNC_1(VAR_2);
        if (!VAR_3)
                return FUNC_2(VAR_2, FUNC_0(VAR_0),
                                            "Refusing to start, no unit to trigger.");
        if (VAR_3->load_state != VAR_1)
                return FUNC_2(VAR_2, FUNC_0(VAR_0),
                                            "Refusing to start, unit %s to trigger not loaded.", VAR_3->id);

        return 0;
}
