
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_media_tree_t ;
struct children_removed_report {size_t count; int first_media; TYPE_1__* node; } ;
struct callback_ctx {int vec_children_removed; } ;
struct TYPE_4__ {int p_item; } ;
typedef TYPE_1__ input_item_node_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,struct children_removed_report) ;

__attribute__((used)) static void
FUNC_4(vlc_media_tree_t *VAR_0, input_item_node_t *VAR_1,
                    input_item_node_t *const VAR_2[], size_t VAR_3,
                    void *VAR_4)
{
    FUNC_0(VAR_0);

    struct callback_ctx *VAR_5 = VAR_4;

    struct children_removed_report VAR_6;
    VAR_6.node = VAR_1;
    VAR_6.first_media = FUNC_2(VAR_2[0]->p_item);
    VAR_6.count = VAR_3;
    bool VAR_7 = FUNC_3(&VAR_5->vec_children_removed, VAR_6);
    FUNC_1(VAR_7);
}
