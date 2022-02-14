
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int surface_count; int * surface; } ;
typedef TYPE_1__ va_pool_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;

void FUNC_2(va_pool_t *VAR_0)
{
    for (unsigned VAR_1 = 0; VAR_1 < VAR_0->surface_count; VAR_1++)
        FUNC_1(&VAR_0->surface[VAR_1]);
    VAR_0->surface_count = 0;

    FUNC_0(VAR_0);
}
