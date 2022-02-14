
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int * pp_pics; } ;
struct TYPE_5__ {int sz; void** surfaces; } ;
struct TYPE_4__ {unsigned int sz; void** surfaces; } ;
struct deint_data {TYPE_3__ history; TYPE_2__ forward_refs; TYPE_1__ backward_refs; } ;


 void* FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(void * VAR_0)
{
    struct deint_data *const VAR_1 = VAR_0;

    if (VAR_1->backward_refs.sz)
        for (unsigned int VAR_2 = 0; VAR_2 < VAR_1->backward_refs.sz; ++VAR_2)
        {
            unsigned int const VAR_3 = VAR_1->forward_refs.sz + 1 + VAR_2;

            VAR_1->backward_refs.surfaces[VAR_2] =
                FUNC_0(VAR_1->history.pp_pics[VAR_3]);
        }

    if (VAR_1->forward_refs.sz)
        for (unsigned int VAR_4 = 0; VAR_4 < VAR_1->forward_refs.sz; ++VAR_4)
        {
            unsigned int const VAR_5 = VAR_1->forward_refs.sz - 1 - VAR_4;

            VAR_1->forward_refs.surfaces[VAR_4] =
                FUNC_0(VAR_1->history.pp_pics[VAR_5]);
        }
}
