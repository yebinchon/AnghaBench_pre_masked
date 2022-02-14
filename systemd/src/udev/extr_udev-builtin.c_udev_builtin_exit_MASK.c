
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* exit ) () ;} ;


 unsigned int VAR_0 ;
 TYPE_1__** VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;

void FUNC_1(void) {
        unsigned VAR_3;

        if (!VAR_2)
                return;

        for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
                if (VAR_1[VAR_3] && VAR_1[VAR_3]->exit)
                        VAR_1[VAR_3]->exit();

        VAR_2 = 0;
}
