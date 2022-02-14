
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int jobs; } ;
typedef TYPE_1__ Transaction ;
typedef int Job ;


 int FUNC_0 (TYPE_1__*) ;
 int * FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int *,int) ;

void FUNC_4(Transaction *VAR_0) {
        Job *VAR_1;

        FUNC_0(VAR_0);

        while ((VAR_1 = FUNC_1(VAR_0->jobs)))
                FUNC_3(VAR_0, VAR_1, 0);

        FUNC_0(FUNC_2(VAR_0->jobs));
}
