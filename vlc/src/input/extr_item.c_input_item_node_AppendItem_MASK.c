
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int i_preparse_depth; int lock; } ;
typedef TYPE_2__ input_item_t ;
struct TYPE_13__ {TYPE_1__* p_item; } ;
typedef TYPE_3__ input_item_node_t ;
struct TYPE_11__ {int i_preparse_depth; int lock; } ;


 int FUNC_0 (TYPE_3__*,TYPE_3__*) ;
 TYPE_3__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

input_item_node_t *FUNC_4( input_item_node_t *VAR_0, input_item_t *VAR_1 )
{
    int VAR_2;
    input_item_node_t *VAR_3 = FUNC_1( VAR_1 );
    if( !VAR_3 ) return ((void*)0);

    FUNC_2( &VAR_0->p_item->lock );
    VAR_2 = VAR_0->p_item->i_preparse_depth;
    FUNC_3( &VAR_0->p_item->lock );

    FUNC_2( &VAR_1->lock );
    VAR_1->i_preparse_depth = VAR_2 > 0 ?
                               VAR_2 -1 :
                               VAR_2;
    FUNC_3( &VAR_1->lock );

    FUNC_0( VAR_0, VAR_3 );
    return VAR_3;
}
