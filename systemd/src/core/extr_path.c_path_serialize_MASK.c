
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int Unit ;
struct TYPE_3__ {int result; int state; } ;
typedef TYPE_1__ Path ;
typedef int FILE ;
typedef int FDSet ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,char*,int ) ;

__attribute__((used)) static int FUNC_5(Unit *VAR_0, FILE *VAR_1, FDSet *VAR_2) {
        Path *VAR_3 = FUNC_0(VAR_0);

        FUNC_1(VAR_0);
        FUNC_1(VAR_1);
        FUNC_1(VAR_2);

        (void) FUNC_4(VAR_1, "state", FUNC_3(VAR_3->state));
        (void) FUNC_4(VAR_1, "result", FUNC_2(VAR_3->result));

        return 0;
}
