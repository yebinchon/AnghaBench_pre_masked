
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ load_state; int manager; int transient; } ;
typedef TYPE_1__ Unit ;
typedef int Scope ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_7(Unit *VAR_3) {
        Scope *VAR_4 = FUNC_1(VAR_3);
        int VAR_5;

        FUNC_2(*VAR_4);
        FUNC_2(VAR_3->load_state == VAR_2);

        if (!VAR_3->transient && !FUNC_0(VAR_3->manager))

                return -VAR_0;

        VAR_5 = FUNC_4(VAR_3);
        if (VAR_5 < 0)
                return VAR_5;

        VAR_5 = FUNC_6(VAR_3, 0);
        if (VAR_5 < 0)
                return VAR_5;

        if (VAR_3->load_state != VAR_1)
                return 0;

        VAR_5 = FUNC_3(VAR_4);
        if (VAR_5 < 0)
                return VAR_5;

        return FUNC_5(VAR_4);
}
