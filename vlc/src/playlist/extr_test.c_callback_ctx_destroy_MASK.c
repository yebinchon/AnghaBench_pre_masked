
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct callback_ctx {int vec_has_next_changed; int vec_has_prev_changed; int vec_current_index_changed; int vec_playback_order_changed; int vec_playback_repeat_changed; int vec_items_removed; int vec_items_moved; int vec_items_added; int vec_items_reset; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline void
FUNC_1(struct callback_ctx *VAR_0)
{
    FUNC_0(&VAR_0->vec_items_reset);
    FUNC_0(&VAR_0->vec_items_added);
    FUNC_0(&VAR_0->vec_items_moved);
    FUNC_0(&VAR_0->vec_items_removed);
    FUNC_0(&VAR_0->vec_playback_repeat_changed);
    FUNC_0(&VAR_0->vec_playback_order_changed);
    FUNC_0(&VAR_0->vec_current_index_changed);
    FUNC_0(&VAR_0->vec_has_prev_changed);
    FUNC_0(&VAR_0->vec_has_next_changed);
}
