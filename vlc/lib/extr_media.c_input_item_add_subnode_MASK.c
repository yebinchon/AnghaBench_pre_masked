
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int libvlc_media_t ;
struct TYPE_3__ {int i_children; int p_item; struct TYPE_3__** pp_children; } ;
typedef TYPE_1__ input_item_node_t ;


 int * FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2( libvlc_media_t *VAR_0,
                                    input_item_node_t *VAR_1 )
{
    for( int VAR_2 = 0; VAR_2 < VAR_1->i_children; VAR_2++ )
    {
        input_item_node_t *VAR_3 = VAR_1->pp_children[VAR_2];
        libvlc_media_t *VAR_4 = FUNC_0( VAR_0, VAR_3->p_item );

        if( VAR_4 != ((void*)0) )
        {
            FUNC_2( VAR_4, VAR_3 );
            FUNC_1( VAR_4 );
        }
    }
}
