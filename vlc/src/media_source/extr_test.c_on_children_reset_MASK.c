
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_media_tree_t ;
struct children_reset_report {int * node; } ;
struct callback_ctx {int vec_children_reset; } ;
typedef int input_item_node_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,struct children_reset_report) ;

__attribute__((used)) static void
FUNC_3(vlc_media_tree_t *VAR_0, input_item_node_t *VAR_1,
                  void *VAR_2)
{
    FUNC_0(VAR_0);

    struct callback_ctx *VAR_3 = VAR_2;

    struct children_reset_report VAR_4;
    VAR_4.node = VAR_1;
    bool VAR_5 = FUNC_2(&VAR_3->vec_children_reset, VAR_4);
    FUNC_1(VAR_5);
}
