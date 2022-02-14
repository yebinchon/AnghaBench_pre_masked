
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int root; } ;
typedef TYPE_1__ vlc_media_tree_t ;
typedef int input_item_t ;
typedef int input_item_node_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int const*,int **,int **) ;

bool
FUNC_2(vlc_media_tree_t *VAR_0, const input_item_t *VAR_1,
                    input_item_node_t **VAR_2,
                    input_item_node_t **VAR_3)
{
    FUNC_0(VAR_0);



    return FUNC_1(&VAR_0->root, VAR_1, VAR_2,
                                          VAR_3);
}
