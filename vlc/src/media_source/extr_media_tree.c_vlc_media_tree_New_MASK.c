
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int pp_children; int i_children; int * p_item; } ;
struct TYPE_6__ {TYPE_3__ root; } ;
typedef TYPE_1__ vlc_media_tree_t ;
struct TYPE_7__ {TYPE_1__ public_data; int listeners; int rc; int lock; } ;
typedef TYPE_2__ media_tree_private_t ;
typedef TYPE_3__ input_item_node_t ;


 int FUNC_0 (int ,int ) ;
 TYPE_2__* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

vlc_media_tree_t *
FUNC_6(void)
{
    media_tree_private_t *VAR_0 = FUNC_1(sizeof(*VAR_0));
    if (FUNC_2(!VAR_0))
        return ((void*)0);

    FUNC_5(&VAR_0->lock);
    FUNC_3(&VAR_0->rc);
    FUNC_4(&VAR_0->listeners);

    vlc_media_tree_t *VAR_1 = &VAR_0->public_data;
    input_item_node_t *VAR_2 = &VAR_1->root;
    VAR_2->p_item = ((void*)0);
    FUNC_0(VAR_2->i_children, VAR_2->pp_children);

    return VAR_1;
}
