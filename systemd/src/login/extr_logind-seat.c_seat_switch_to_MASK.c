
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int position_count; int * positions; } ;
typedef TYPE_1__ Seat ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;

int FUNC_3(Seat *VAR_1, unsigned VAR_2) {


        if (VAR_2 == 0)
                return -VAR_0;

        if (VAR_2 >= VAR_1->position_count || !VAR_1->positions[VAR_2]) {

                if (FUNC_1(VAR_1) && VAR_2 < 64)
                        return FUNC_0(VAR_2);

                return -VAR_0;
        }

        return FUNC_2(VAR_1->positions[VAR_2]);
}
