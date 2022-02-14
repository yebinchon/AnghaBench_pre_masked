
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {unsigned int position_count; int * positions; } ;
struct TYPE_7__ {scalar_t__ position; } ;
typedef TYPE_1__ Session ;
typedef TYPE_2__ Seat ;


 int FUNC_0 (TYPE_2__*,TYPE_1__*,unsigned int) ;

__attribute__((used)) static void FUNC_1(Seat *VAR_0, Session *VAR_1) {
        unsigned VAR_2;

        if (VAR_1->position > 0)
                return;

        for (VAR_2 = 1; VAR_2 < VAR_0->position_count; ++VAR_2)
                if (!VAR_0->positions[VAR_2])
                        break;

        FUNC_0(VAR_0, VAR_1, VAR_2);
}
