
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct window_pane {int window; struct layout_cell* layout_cell; } ;
struct layout_cell {int type; int cells; struct layout_cell* parent; } ;
typedef enum layout_type { ____Placeholder_layout_type } layout_type ;


 struct layout_cell* FUNC_0 (int *,int ) ;
 struct layout_cell* FUNC_1 (struct layout_cell*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,struct layout_cell*,int,int,int) ;

void
FUNC_3(struct window_pane *VAR_2, enum layout_type VAR_3, int VAR_4,
    int VAR_5)
{
 struct layout_cell *VAR_6, *VAR_7;

 VAR_6 = VAR_2->layout_cell;


 VAR_7 = VAR_6->parent;
 while (VAR_7 != ((void*)0) && VAR_7->type != VAR_3) {
  VAR_6 = VAR_7;
  VAR_7 = VAR_6->parent;
 }
 if (VAR_7 == ((void*)0))
  return;


 if (VAR_6 == FUNC_0(&VAR_7->cells, VAR_1))
  VAR_6 = FUNC_1(VAR_6, VAR_1, VAR_0);

 FUNC_2(VAR_2->window, VAR_6, VAR_3, VAR_4, VAR_5);
}
