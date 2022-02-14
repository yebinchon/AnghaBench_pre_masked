
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int root; } ;
typedef TYPE_1__ vlc_media_tree_t ;
typedef int input_item_t ;
typedef int input_item_node_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int *,int **,int **) ;
 int FUNC_4 (TYPE_1__*,int ,int *,int **,int) ;

bool
FUNC_5(vlc_media_tree_t *VAR_1, input_item_t *VAR_2)
{
    FUNC_2(VAR_1);

    input_item_node_t *VAR_3;
    input_item_node_t *VAR_4;
    if (!FUNC_3(&VAR_1->root, VAR_2, &VAR_3, &VAR_4))
        return 0;

    FUNC_1(VAR_4, VAR_3);
    FUNC_4(VAR_1, VAR_0, VAR_4, &VAR_3, 1);
    FUNC_0(VAR_3);
    return 1;
}
