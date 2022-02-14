
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t i_multiplex; int p_scanlist; struct TYPE_5__* pp_multiplex; int parameter; int * p_dialog_id; int p_obj; } ;
typedef TYPE_1__ scan_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;

void FUNC_5( scan_t *VAR_0 )
{
    if( !VAR_0 )
        return;
    if( VAR_0->p_dialog_id != ((void*)0) )
        FUNC_4( VAR_0->p_obj, VAR_0->p_dialog_id );

    FUNC_3( &VAR_0->parameter );

    for( size_t VAR_1 = 0; VAR_1 < VAR_0->i_multiplex; VAR_1++ )
        FUNC_2( VAR_0->pp_multiplex[VAR_1] );
    FUNC_0( VAR_0->pp_multiplex );

    FUNC_1( VAR_0->p_scanlist );

    FUNC_0( VAR_0 );
}
