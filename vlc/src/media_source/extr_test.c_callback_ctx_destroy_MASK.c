
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct callback_ctx {int vec_children_removed; int vec_children_added; int vec_children_reset; } ;


 int FUNC_0 (struct callback_ctx*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void
FUNC_2(struct callback_ctx *VAR_0)
{
    FUNC_0(VAR_0);
    FUNC_1(&VAR_0->vec_children_reset);
    FUNC_1(&VAR_0->vec_children_added);
    FUNC_1(&VAR_0->vec_children_removed);
}
