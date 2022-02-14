
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct window_pane {int layout_cell; struct window* window; } ;
struct window {int * layout_root; } ;


 int FUNC_0 (struct window*,int ,int **) ;
 int FUNC_1 (struct window*) ;
 int FUNC_2 (struct window*) ;
 int FUNC_3 (char*,struct window*) ;

void
FUNC_4(struct window_pane *VAR_0)
{
 struct window *VAR_1 = VAR_0->window;


 FUNC_0(VAR_1, VAR_0->layout_cell, &VAR_1->layout_root);


 if (VAR_1->layout_root != ((void*)0)) {
  FUNC_1(VAR_1);
  FUNC_2(VAR_1);
 }
 FUNC_3("window-layout-changed", VAR_1);
}
