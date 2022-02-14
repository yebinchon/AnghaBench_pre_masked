
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int i_children; int p_item; struct TYPE_6__** pp_children; } ;
typedef TYPE_1__ input_item_node_t ;


 scalar_t__ FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_2(input_item_node_t *VAR_0, input_item_node_t *VAR_1)
{
    for (int VAR_2 = 0; VAR_2 < VAR_1->i_children; ++VAR_2)
    {
        input_item_node_t *VAR_3 = VAR_1->pp_children[VAR_2];
        input_item_node_t *VAR_4 = FUNC_1(VAR_0, VAR_3->p_item);
        if (FUNC_0(!VAR_4))
            break;

        FUNC_2(VAR_4, VAR_3);
    }
}
