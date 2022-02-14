
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int root; } ;
typedef TYPE_1__ vlc_media_tree_t ;
typedef int input_item_t ;
typedef int input_item_node_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int **,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ,int *) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_6(input_item_t *VAR_1, input_item_node_t *VAR_2,
                      void *VAR_3)
{
    vlc_media_tree_t *VAR_4 = VAR_3;

    FUNC_3(VAR_4);
    input_item_node_t *VAR_5;

    bool VAR_6 = FUNC_2(&VAR_4->root, VAR_1,
                                                &VAR_5, ((void*)0));
    if (!VAR_6) {

        FUNC_5(VAR_4);
        return;
    }

    FUNC_1(VAR_5);
    FUNC_0(VAR_5, VAR_2);
    FUNC_4(VAR_4, VAR_0, VAR_5);
    FUNC_5(VAR_4);
}
