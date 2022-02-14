
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t i_nb_items; int * p_items; } ;
typedef TYPE_1__ vlc_ml_artist_list_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;

void FUNC_2( vlc_ml_artist_list_t* VAR_0 )
{
    if ( VAR_0 == ((void*)0) )
        return;
    for ( size_t VAR_1 = 0; VAR_1 < VAR_0->i_nb_items; ++VAR_1 )
        FUNC_1( &VAR_0->p_items[VAR_1] );
    FUNC_0( VAR_0 );
}
