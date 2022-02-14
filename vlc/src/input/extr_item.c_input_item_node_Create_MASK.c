
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int input_item_t ;
struct TYPE_4__ {int * pp_children; scalar_t__ i_children; int * p_item; } ;
typedef TYPE_1__ input_item_node_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int) ;

input_item_node_t *FUNC_3( input_item_t *VAR_0 )
{
    input_item_node_t* VAR_1 = FUNC_2( sizeof( input_item_node_t ) );
    if( !VAR_1 )
        return ((void*)0);

    FUNC_0( VAR_0 );

    VAR_1->p_item = VAR_0;
    FUNC_1( VAR_0 );

    VAR_1->i_children = 0;
    VAR_1->pp_children = ((void*)0);

    return VAR_1;
}
