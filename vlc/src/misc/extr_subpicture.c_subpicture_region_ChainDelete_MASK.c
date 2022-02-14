
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* p_next; } ;
typedef TYPE_1__ subpicture_region_t ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1( subpicture_region_t *VAR_0 )
{
    while( VAR_0 )
    {
        subpicture_region_t *VAR_1 = VAR_0->p_next;

        FUNC_0( VAR_0 );

        VAR_0 = VAR_1;
    }
}
