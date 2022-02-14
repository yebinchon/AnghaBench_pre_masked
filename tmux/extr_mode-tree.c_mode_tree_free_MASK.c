
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct window_pane {int window; } ;
struct mode_tree_data {scalar_t__ zoomed; int dead; int filter; int search; int screen; int children; struct window_pane* wp; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct mode_tree_data*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mode_tree_data*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

void
FUNC_6(struct mode_tree_data *VAR_0)
{
 struct window_pane *VAR_1 = VAR_0->wp;

 if (VAR_0->zoomed == 0)
  FUNC_5(VAR_1->window);

 FUNC_2(&VAR_0->children);
 FUNC_1(VAR_0);
 FUNC_4(&VAR_0->screen);

 FUNC_0(VAR_0->search);
 FUNC_0(VAR_0->filter);

 VAR_0->dead = 1;
 FUNC_3(VAR_0);
}
