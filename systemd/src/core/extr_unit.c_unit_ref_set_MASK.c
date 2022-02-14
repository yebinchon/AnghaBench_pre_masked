
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int refs_by_target; struct TYPE_10__* target; struct TYPE_10__* source; } ;
typedef TYPE_1__ UnitRef ;
typedef TYPE_1__ Unit ;


 int FUNC_0 (int ,int ,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;

Unit* FUNC_3(UnitRef *VAR_1, Unit *VAR_2, Unit *VAR_3) {
        FUNC_1(VAR_1);
        FUNC_1(VAR_2);
        FUNC_1(VAR_3);

        if (VAR_1->target)
                FUNC_2(VAR_1);

        VAR_1->source = VAR_2;
        VAR_1->target = VAR_3;
        FUNC_0(VAR_0, VAR_3->refs_by_target, VAR_1);
        return VAR_3;
}
