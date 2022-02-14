
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int jobs; } ;
typedef TYPE_1__ Manager ;
typedef int Job ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int,int) ;

void FUNC_3(Manager *VAR_1) {
        Job *VAR_2;

        FUNC_0(VAR_1);

        while ((VAR_2 = FUNC_1(VAR_1->jobs)))

                FUNC_2(VAR_2, VAR_0, 0, 0);
}
