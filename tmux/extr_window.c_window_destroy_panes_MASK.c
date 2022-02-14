
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct window_pane {int dummy; } ;
struct window {int panes; } ;


 int FUNC_0 (int *) ;
 struct window_pane* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct window_pane*,int ) ;
 int VAR_0 ;
 int FUNC_3 (struct window_pane*) ;

void
FUNC_4(struct window *VAR_1)
{
 struct window_pane *VAR_2;

 while (!FUNC_0(&VAR_1->panes)) {
  VAR_2 = FUNC_1(&VAR_1->panes);
  FUNC_2(&VAR_1->panes, VAR_2, VAR_0);
  FUNC_3(VAR_2);
 }
}
