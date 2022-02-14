
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int position_count; scalar_t__* positions; TYPE_1__* active; } ;
struct TYPE_4__ {unsigned int position; } ;
typedef TYPE_2__ Seat ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;

int FUNC_1(Seat *VAR_1) {
        unsigned VAR_2, VAR_3;

        if (VAR_1->position_count == 0)
                return -VAR_0;

        VAR_2 = 1;
        if (VAR_1->active && VAR_1->active->position > 0)
                VAR_2 = VAR_1->active->position;

        for (VAR_3 = VAR_2 + 1; VAR_3 < VAR_1->position_count; ++VAR_3)
                if (VAR_1->positions[VAR_3])
                        return FUNC_0(VAR_1->positions[VAR_3]);

        for (VAR_3 = 1; VAR_3 < VAR_2; ++VAR_3)
                if (VAR_1->positions[VAR_3])
                        return FUNC_0(VAR_1->positions[VAR_3]);

        return -VAR_0;
}
