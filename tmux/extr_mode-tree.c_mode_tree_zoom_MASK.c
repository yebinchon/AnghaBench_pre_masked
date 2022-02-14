
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct window_pane {TYPE_1__* window; } ;
struct mode_tree_data {int zoomed; struct window_pane* wp; } ;
struct args {int dummy; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct args*,char) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (struct window_pane*) ;

void
FUNC_3(struct mode_tree_data *VAR_1, struct args *VAR_2)
{
 struct window_pane *VAR_3 = VAR_1->wp;

 if (FUNC_0(VAR_2, 'Z')) {
  VAR_1->zoomed = (VAR_3->window->flags & VAR_0);
  if (!VAR_1->zoomed && FUNC_2(VAR_3) == 0)
   FUNC_1(VAR_3->window);
 } else
  VAR_1->zoomed = -1;
}
