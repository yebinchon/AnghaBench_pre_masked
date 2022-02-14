
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int const i_major; int const i_minor; int const i_revision; int const i_extra; } ;
struct TYPE_6__ {TYPE_1__ release; } ;
typedef TYPE_2__ update_t ;


 scalar_t__* VAR_0 ;




 int FUNC_0 (TYPE_2__*) ;

bool FUNC_1( update_t *VAR_1 )
{
    FUNC_0( VAR_1 );

    static const int VAR_2[4] = {
        130,
        129,
        128,
        131
    };
    const int VAR_3[4] = {
        VAR_1->release.i_major,
        VAR_1->release.i_minor,
        VAR_1->release.i_revision,
        VAR_1->release.i_extra
    };

    for (unsigned VAR_4 = 0; VAR_4 < sizeof VAR_3 / sizeof *VAR_3; VAR_4++) {

        if (VAR_3[VAR_4] > VAR_2[VAR_4])
            return 1;


        if (VAR_3[VAR_4] < VAR_2[VAR_4])
            return 0;
    }


    if (*VAR_0)
        return 1;


    return 0;
}
