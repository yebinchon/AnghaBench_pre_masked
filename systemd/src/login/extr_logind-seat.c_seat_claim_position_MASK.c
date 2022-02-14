
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__** positions; int position_count; } ;
struct TYPE_9__ {unsigned int vtnr; unsigned int position; } ;
typedef TYPE_1__ Session ;
typedef TYPE_2__ Seat ;


 int FUNC_0 (TYPE_1__**,int ,unsigned int) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;

void FUNC_3(Seat *VAR_0, Session *VAR_1, unsigned VAR_2) {

        if (FUNC_2(VAR_0))
                VAR_2 = VAR_1->vtnr;

        if (!FUNC_0(VAR_0->positions, VAR_0->position_count, VAR_2 + 1))
                return;

        FUNC_1(VAR_0, VAR_1);

        VAR_1->position = VAR_2;
        if (VAR_2 > 0)
                VAR_0->positions[VAR_2] = VAR_1;
}
