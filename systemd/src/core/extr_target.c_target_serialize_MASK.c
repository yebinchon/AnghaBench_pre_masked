
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int Unit ;
struct TYPE_9__ {int state; } ;
typedef TYPE_1__ Target ;
typedef TYPE_1__ FILE ;
typedef TYPE_1__ FDSet ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char*,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(Unit *VAR_0, FILE *VAR_1, FDSet *VAR_2) {
        Target *VAR_3 = FUNC_0(VAR_0);

        FUNC_1(VAR_3);
        FUNC_1(VAR_1);
        FUNC_1(VAR_2);

        (void) FUNC_2(VAR_1, "state", FUNC_3(VAR_3->state));
        return 0;
}
