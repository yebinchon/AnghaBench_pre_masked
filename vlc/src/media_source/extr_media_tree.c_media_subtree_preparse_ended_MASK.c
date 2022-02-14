
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int root; } ;
typedef TYPE_1__ vlc_media_tree_t ;
typedef int input_item_t ;
typedef int input_item_node_t ;
typedef enum input_item_preparse_status { ____Placeholder_input_item_preparse_status } input_item_preparse_status ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int **,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int *,int) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_4(input_item_t *VAR_1,
                             enum input_item_preparse_status VAR_2,
                             void *VAR_3)
{
    vlc_media_tree_t *VAR_4 = VAR_3;

    FUNC_1(VAR_4);
    input_item_node_t *VAR_5;

    bool VAR_6 = FUNC_0(&VAR_4->root, VAR_1,
                                                &VAR_5, ((void*)0));
    if (!VAR_6) {

        FUNC_3(VAR_4);
        return;
    }
    FUNC_2(VAR_4, VAR_0, VAR_5, VAR_2);
    FUNC_3(VAR_4);
}
