
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int picture_count; int * picture; } ;
typedef TYPE_1__ picture_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(picture_pool_t *VAR_0)
{
    for (unsigned VAR_1 = 0; VAR_1 < VAR_0->picture_count; VAR_1++)
        FUNC_0(VAR_0->picture[VAR_1]);
    FUNC_1(VAR_0);
}
