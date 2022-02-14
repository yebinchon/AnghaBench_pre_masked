
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ type; } ;
typedef TYPE_1__ Unit ;
struct TYPE_10__ {int (* done ) (TYPE_1__*) ;} ;
typedef int ExecContext ;
typedef int CGroupContext ;


 TYPE_7__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int * FUNC_5 (TYPE_1__*) ;
 int * FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_7(Unit *VAR_0) {
        ExecContext *VAR_1;
        CGroupContext *VAR_2;

        FUNC_1(VAR_0);

        if (VAR_0->type < 0)
                return;

        if (FUNC_0(VAR_0)->done)
                FUNC_0(VAR_0)->done(VAR_0);

        VAR_1 = FUNC_6(VAR_0);
        if (VAR_1)
                FUNC_3(VAR_1);

        VAR_2 = FUNC_5(VAR_0);
        if (VAR_2)
                FUNC_2(VAR_2);
}
