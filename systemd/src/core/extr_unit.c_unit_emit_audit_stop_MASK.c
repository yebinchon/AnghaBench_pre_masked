
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UnitActiveState ;
struct TYPE_5__ {scalar_t__ type; int in_audit; int manager; } ;
typedef TYPE_1__ Unit ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_2(Unit *VAR_4, UnitActiveState VAR_5) {
        FUNC_0(VAR_4);

        if (VAR_4->type != VAR_3)
                return;

        if (VAR_4->in_audit) {

                FUNC_1(VAR_4->manager, VAR_4, VAR_1, VAR_5 == VAR_2);
                VAR_4->in_audit = 0;
        } else {

                FUNC_1(VAR_4->manager, VAR_4, VAR_0, VAR_5 == VAR_2);

                if (VAR_5 == VAR_2)
                        FUNC_1(VAR_4->manager, VAR_4, VAR_1, 1);
        }
}
