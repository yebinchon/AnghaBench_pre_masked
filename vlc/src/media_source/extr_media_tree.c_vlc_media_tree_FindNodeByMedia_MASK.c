
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int input_item_t ;
struct TYPE_5__ {int i_children; int const* p_item; struct TYPE_5__** pp_children; } ;
typedef TYPE_1__ input_item_node_t ;



__attribute__((used)) static bool
FUNC_0(input_item_node_t *VAR_0,
                               const input_item_t *VAR_1,
                               input_item_node_t **VAR_2,
                               input_item_node_t **VAR_3)
{
    for (int VAR_4 = 0; VAR_4 < VAR_0->i_children; ++VAR_4)
    {
        input_item_node_t *VAR_5 = VAR_0->pp_children[VAR_4];
        if (VAR_5->p_item == VAR_1)
        {
            *VAR_2 = VAR_5;
            if (VAR_3)
                *VAR_3 = VAR_0;
            return 1;
        }

        if (FUNC_0(VAR_5, VAR_1, VAR_2, VAR_3))
            return 1;
    }

    return 0;
}
