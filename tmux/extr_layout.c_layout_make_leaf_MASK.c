
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct window_pane {struct layout_cell* layout_cell; } ;
struct layout_cell {struct window_pane* wp; int cells; int type; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

void
FUNC_1(struct layout_cell *VAR_1, struct window_pane *VAR_2)
{
 VAR_1->type = VAR_0;

 FUNC_0(&VAR_1->cells);

 VAR_2->layout_cell = VAR_1;
 VAR_1->wp = VAR_2;
}
