
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct deint_mode {scalar_t__ type; } ;
typedef int filter_t ;
struct TYPE_3__ {scalar_t__ type; } ;
typedef TYPE_1__ VAProcFilterCapDeinterlacing ;



__attribute__((used)) static inline bool
FUNC_0(filter_t * VAR_0,
                            VAProcFilterCapDeinterlacing const VAR_1[],
                            unsigned int VAR_2,
                            struct deint_mode const * VAR_3)
{
    (void) VAR_0;
    for (unsigned int VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4)
        if (VAR_1[VAR_4].type == VAR_3->type)
            return 1;
    return 0;
}
