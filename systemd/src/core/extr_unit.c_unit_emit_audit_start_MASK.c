
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ type; int in_audit; int manager; } ;
typedef TYPE_1__ Unit ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_2(Unit *VAR_2) {
        FUNC_0(VAR_2);

        if (VAR_2->type != VAR_1)
                return;


        FUNC_1(VAR_2->manager, VAR_2, VAR_0, 1);
        VAR_2->in_audit = 1;
}
