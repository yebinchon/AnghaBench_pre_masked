
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int i_epg; int lock; TYPE_1__** pp_epg; TYPE_1__* p_epg_table; } ;
typedef TYPE_2__ input_item_t ;
struct TYPE_4__ {int i_source_id; scalar_t__ b_present; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2( input_item_t *VAR_0, int VAR_1 )
{
    FUNC_0( &VAR_0->lock );
    VAR_0->p_epg_table = ((void*)0);
    if( VAR_1 > 0 )
    {

        for( int VAR_2 = 0; VAR_2 < VAR_0->i_epg; VAR_2++ )
        {
            if( VAR_0->pp_epg[VAR_2]->i_source_id == VAR_1 &&
                VAR_0->pp_epg[VAR_2]->b_present )
            {
                VAR_0->p_epg_table = VAR_0->pp_epg[VAR_2];
                break;
            }
        }
    }
    FUNC_1( &VAR_0->lock );
}
