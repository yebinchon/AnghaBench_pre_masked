
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int Unit ;
struct TYPE_10__ {scalar_t__ controller; int was_abandoned; int state; } ;
typedef TYPE_1__ Scope ;
typedef TYPE_1__ FILE ;
typedef TYPE_1__ FDSet ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,char*,int ) ;
 int FUNC_4 (TYPE_1__*,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(Unit *VAR_0, FILE *VAR_1, FDSet *VAR_2) {
        Scope *VAR_3 = FUNC_0(VAR_0);

        FUNC_1(VAR_3);
        FUNC_1(VAR_1);
        FUNC_1(VAR_2);

        (void) FUNC_4(VAR_1, "state", FUNC_2(VAR_3->state));
        (void) FUNC_3(VAR_1, "was-abandoned", VAR_3->was_abandoned);

        if (VAR_3->controller)
                (void) FUNC_4(VAR_1, "controller", VAR_3->controller);

        return 0;
}
