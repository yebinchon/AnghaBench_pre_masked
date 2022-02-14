
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct window_pane {struct layout_cell* layout_cell; } ;
struct layout_cell {int type; int sx; int sy; int cells; struct layout_cell* parent; } ;
typedef enum layout_type { ____Placeholder_layout_type } layout_type ;


 int VAR_0 ;
 struct layout_cell* FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct window_pane*,int,int,int) ;

void
FUNC_2(struct window_pane *VAR_2, enum layout_type VAR_3,
    u_int VAR_4)
{
 struct layout_cell *VAR_5, *VAR_6;
 int VAR_7, VAR_8;

 VAR_5 = VAR_2->layout_cell;


 VAR_6 = VAR_5->parent;
 while (VAR_6 != ((void*)0) && VAR_6->type != VAR_3) {
  VAR_5 = VAR_6;
  VAR_6 = VAR_5->parent;
 }
 if (VAR_6 == ((void*)0))
  return;


 if (VAR_3 == VAR_0)
  VAR_8 = VAR_5->sx;
 else
  VAR_8 = VAR_5->sy;
 if (VAR_5 == FUNC_0(&VAR_6->cells, VAR_1))
  VAR_7 = VAR_8 - VAR_4;
 else
  VAR_7 = VAR_4 - VAR_8;


 FUNC_1(VAR_2, VAR_3, VAR_7, 1);
}
