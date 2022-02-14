
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int manager; int id; } ;
typedef TYPE_1__ Unit ;
typedef int ExecContext ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int const*) ;
 int FUNC_5 (TYPE_1__*,int const*) ;
 int FUNC_6 (TYPE_1__*,int const*) ;
 int FUNC_7 (TYPE_1__*,int const*) ;
 int * FUNC_8 (TYPE_1__*) ;

void FUNC_9(Unit *VAR_0) {
        const ExecContext *VAR_1;

        FUNC_2(VAR_0);

        if (!VAR_0->id)
                return;

        if (!FUNC_0(VAR_0->manager))
                return;

        if (FUNC_1(VAR_0->manager))
                return;
        (void) FUNC_3(VAR_0);

        VAR_1 = FUNC_8(VAR_0);
        if (VAR_1) {
                (void) FUNC_5(VAR_0, VAR_1);
                (void) FUNC_4(VAR_0, VAR_1);
                (void) FUNC_7(VAR_0, VAR_1);
                (void) FUNC_6(VAR_0, VAR_1);
        }
}
