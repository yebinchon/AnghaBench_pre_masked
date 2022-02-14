
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int reset_accounting; } ;
typedef TYPE_1__ Unit ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;

int FUNC_7(Unit *VAR_0) {
        int VAR_1;

        FUNC_0(VAR_0);



        VAR_1 = FUNC_1(VAR_0);
        if (VAR_1 < 0)
                return VAR_1;



        (void) FUNC_3(VAR_0);

        if (VAR_0->reset_accounting) {
                (void) FUNC_4(VAR_0);
                VAR_0->reset_accounting = 0;
        }

        FUNC_2(VAR_0);

        VAR_1 = FUNC_6(VAR_0);
        if (VAR_1 < 0)
                return VAR_1;

        VAR_1 = FUNC_5(VAR_0);
        if (VAR_1 < 0)
                return VAR_1;

        return 0;
}
