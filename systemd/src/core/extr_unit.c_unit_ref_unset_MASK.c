
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* target; int source; } ;
typedef TYPE_1__ UnitRef ;
struct TYPE_7__ {int refs_by_target; } ;


 int FUNC_0 (int ,int ,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_3__*) ;

void FUNC_3(UnitRef *VAR_1) {
        FUNC_1(VAR_1);

        if (!VAR_1->target)
                return;



        FUNC_2(VAR_1->target);

        FUNC_0(VAR_0, VAR_1->target->refs_by_target, VAR_1);
        VAR_1->source = VAR_1->target = ((void*)0);
}
