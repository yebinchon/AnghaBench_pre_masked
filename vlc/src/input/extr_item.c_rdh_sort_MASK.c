
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ i_children; struct TYPE_4__** pp_children; } ;
typedef TYPE_1__ input_item_node_t ;


 int FUNC_0 (TYPE_1__**,scalar_t__,int,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(input_item_node_t *VAR_1)
{
    if (VAR_1->i_children <= 0)
        return;


    FUNC_0(VAR_1->pp_children, VAR_1->i_children,
          sizeof(input_item_node_t *), VAR_0);


    for (int VAR_2 = 0; VAR_2 < VAR_1->i_children; VAR_2++)
        FUNC_1(VAR_1->pp_children[VAR_2]);
}
