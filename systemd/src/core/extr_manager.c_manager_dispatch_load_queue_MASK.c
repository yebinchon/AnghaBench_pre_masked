
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* in_load_queue; } ;
typedef TYPE_1__ Unit ;
struct TYPE_8__ {int dispatching_load_queue; TYPE_1__* load_queue; } ;
typedef TYPE_2__ Manager ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*) ;

unsigned FUNC_3(Manager *VAR_0) {
        Unit *VAR_1;
        unsigned VAR_2 = 0;

        FUNC_0(VAR_0);


        if (VAR_0->dispatching_load_queue)
                return 0;

        VAR_0->dispatching_load_queue = 1;




        while ((VAR_1 = VAR_0->load_queue)) {
                FUNC_0(VAR_1->in_load_queue);

                FUNC_2(VAR_1);
                VAR_2++;
        }

        VAR_0->dispatching_load_queue = 0;



        (void) FUNC_1(VAR_0);

        return VAR_2;
}
