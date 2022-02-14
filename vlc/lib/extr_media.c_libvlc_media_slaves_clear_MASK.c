
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* p_input_item; } ;
typedef TYPE_1__ libvlc_media_t ;
struct TYPE_6__ {int i_slaves; int lock; int * pp_slaves; } ;
typedef TYPE_2__ input_item_t ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5( libvlc_media_t *VAR_0 )
{
    FUNC_1( VAR_0 );
    input_item_t *VAR_1 = VAR_0->p_input_item;

    FUNC_3( &VAR_1->lock );
    for( int VAR_2 = 0; VAR_2 < VAR_1->i_slaves; VAR_2++ )
        FUNC_2( VAR_1->pp_slaves[VAR_2] );
    FUNC_0( VAR_1->i_slaves, VAR_1->pp_slaves );
    FUNC_4( &VAR_1->lock );
}
