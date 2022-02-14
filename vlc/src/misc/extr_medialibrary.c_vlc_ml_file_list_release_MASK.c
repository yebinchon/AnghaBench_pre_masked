
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {size_t i_nb_items; TYPE_1__* p_items; } ;
typedef TYPE_2__ vlc_ml_file_list_t ;
struct TYPE_5__ {TYPE_2__* psz_mrl; } ;


 int FUNC_0 (TYPE_2__*) ;

void FUNC_1( vlc_ml_file_list_t* VAR_0 )
{
    if ( VAR_0 == ((void*)0) )
        return;
    for ( size_t VAR_1 = 0; VAR_1 < VAR_0->i_nb_items; ++VAR_1 )
        FUNC_0( VAR_0->p_items[VAR_1].psz_mrl );
    FUNC_0( VAR_0 );
}
