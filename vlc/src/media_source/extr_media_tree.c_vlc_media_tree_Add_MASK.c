
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_media_tree_t ;
typedef int input_item_t ;
typedef int input_item_node_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int * FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int *,int **,int) ;

input_item_node_t *
FUNC_4(vlc_media_tree_t *VAR_1, input_item_node_t *VAR_2,
                   input_item_t *VAR_3)
{
    FUNC_2(VAR_1);

    input_item_node_t *VAR_4 = FUNC_1(VAR_2, VAR_3);
    if (FUNC_0(!VAR_4))
        return ((void*)0);

    FUNC_3(VAR_1, VAR_0, VAR_2, &VAR_4, 1);

    return VAR_4;
}
