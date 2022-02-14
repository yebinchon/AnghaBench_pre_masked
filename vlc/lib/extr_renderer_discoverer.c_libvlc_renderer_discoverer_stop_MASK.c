
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int i_items; int * pp_items; int * p_rd; } ;
typedef TYPE_1__ libvlc_renderer_discoverer_t ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

void
FUNC_3( libvlc_renderer_discoverer_t *VAR_0 )
{
    if( VAR_0->p_rd != ((void*)0) )
    {
        FUNC_1( VAR_0->p_rd );
        VAR_0->p_rd = ((void*)0);
    }

    for( int VAR_1 = 0; VAR_1 < VAR_0->i_items; ++VAR_1 )
        FUNC_2( VAR_0->pp_items[VAR_1] );
    FUNC_0( VAR_0->i_items, VAR_0->pp_items );
}
