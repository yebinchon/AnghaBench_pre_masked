
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct window_pane {int dummy; } ;
struct window {int sy; int sx; struct layout_cell* layout_root; } ;
struct layout_cell {int dummy; } ;


 struct layout_cell* FUNC_0 (int *) ;
 int FUNC_1 (struct window*) ;
 int FUNC_2 (struct layout_cell*,struct window_pane*) ;
 int FUNC_3 (struct layout_cell*,int ,int ,int ,int ) ;

void
FUNC_4(struct window *VAR_0, struct window_pane *VAR_1)
{
 struct layout_cell *VAR_2;

 VAR_2 = VAR_0->layout_root = FUNC_0(((void*)0));
 FUNC_3(VAR_2, VAR_0->sx, VAR_0->sy, 0, 0);
 FUNC_2(VAR_2, VAR_1);
 FUNC_1(VAR_0);
}
