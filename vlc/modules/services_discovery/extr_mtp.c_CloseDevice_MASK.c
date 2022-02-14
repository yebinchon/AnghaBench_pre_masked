
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ services_discovery_t ;
struct TYPE_6__ {int i_count; int ** pp_items; } ;
typedef TYPE_2__ services_discovery_sys_t ;
typedef int input_item_t ;


 int FUNC_0 (int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int *) ;

__attribute__((used)) static void FUNC_3( services_discovery_t *VAR_0 )
{
    services_discovery_sys_t *VAR_1 = VAR_0->p_sys;
    input_item_t **VAR_2 = VAR_1->pp_items;

    if( VAR_2 != ((void*)0) )
    {
        for( int VAR_3 = 0; VAR_3 < VAR_1->i_count; VAR_3++ )
        {
            if( VAR_2[VAR_3] != ((void*)0) )
            {
                FUNC_2( VAR_0, VAR_2[VAR_3] );
                FUNC_1( VAR_2[VAR_3] );
            }
        }
        FUNC_0( VAR_2 );
    }
}
