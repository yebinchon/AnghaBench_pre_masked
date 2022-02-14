
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int i_children; int * pp_children; } ;
typedef TYPE_1__ input_item_node_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(input_item_node_t *VAR_0)
{
    for (int VAR_1 = 0; VAR_1 < VAR_0->i_children; ++VAR_1)
        FUNC_1(VAR_0->pp_children[VAR_1]);

    FUNC_0(VAR_0->pp_children);
    VAR_0->pp_children = ((void*)0);
    VAR_0->i_children = 0;
}
