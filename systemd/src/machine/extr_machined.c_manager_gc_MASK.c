
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int in_gc_queue; } ;
struct TYPE_12__ {TYPE_2__* machine_gc_queue; } ;
typedef TYPE_1__ Manager ;
typedef TYPE_2__ Machine ;


 int FUNC_0 (int ,TYPE_2__*,TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_7(Manager *VAR_2, bool VAR_3) {
        Machine *VAR_4;

        FUNC_1(VAR_2);

        while ((VAR_4 = VAR_2->machine_gc_queue)) {
                FUNC_0(VAR_1, VAR_2->machine_gc_queue, VAR_4);
                VAR_4->in_gc_queue = 0;


                if (FUNC_5(VAR_4, VAR_3) &&
                    FUNC_4(VAR_4) != VAR_0)
                        FUNC_6(VAR_4);




                if (FUNC_5(VAR_4, VAR_3)) {
                        FUNC_2(VAR_4);
                        FUNC_3(VAR_4);
                }
        }
}
