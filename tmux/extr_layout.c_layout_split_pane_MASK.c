
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int ;
struct window_pane {TYPE_1__* window; struct layout_cell* layout_cell; } ;
struct layout_cell {int sx; int sy; int xoff; int yoff; int type; int cells; struct layout_cell* parent; } ;
typedef enum layout_type { ____Placeholder_layout_type } layout_type ;
struct TYPE_5__ {struct layout_cell* layout_root; int options; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct layout_cell*,struct layout_cell*,int ) ;
 int FUNC_1 (struct layout_cell*,struct layout_cell*,int ) ;
 int FUNC_2 (int *,struct layout_cell*,int ) ;
 int FUNC_3 (int *,struct layout_cell*,int ) ;
 int FUNC_4 (int *,struct layout_cell*,struct layout_cell*,int ) ;
 int VAR_3 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_1__*,struct layout_cell*,int) ;
 struct layout_cell* FUNC_7 (struct layout_cell*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (struct layout_cell*,struct window_pane*) ;
 int FUNC_10 (struct layout_cell*,int) ;
 int FUNC_11 (TYPE_1__*,struct layout_cell*) ;
 int FUNC_12 (struct layout_cell*,int,int,int,int) ;
 int FUNC_13 (TYPE_1__*,struct layout_cell*,int,int) ;
 int FUNC_14 (int ,char*) ;

struct layout_cell *
FUNC_15(struct window_pane *VAR_4, enum layout_type VAR_5, int VAR_6,
    int VAR_7)
{
 struct layout_cell *VAR_8, *VAR_9, *VAR_10, *VAR_11, *VAR_12;
 u_int VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
 u_int VAR_20, VAR_21, VAR_22 = 0;
 int VAR_23 = (VAR_7 & VAR_2), VAR_24;





 if (VAR_23)
  VAR_8 = VAR_4->window->layout_root;
 else
  VAR_8 = VAR_4->layout_cell;
 VAR_24 = FUNC_14(VAR_4->window->options, "pane-border-status");


 VAR_13 = VAR_8->sx;
 VAR_14 = VAR_8->sy;
 VAR_15 = VAR_8->xoff;
 VAR_16 = VAR_8->yoff;


 switch (VAR_5) {
 case 129:
  if (VAR_13 < VAR_0 * 2 + 1)
   return (((void*)0));
  break;
 case 128:
  if (FUNC_6(VAR_4->window, VAR_8, VAR_24))
   VAR_19 = VAR_0 * 2 + 2;
  else
   VAR_19 = VAR_0 * 2 + 1;
  if (VAR_14 < VAR_19)
   return (((void*)0));
  break;
 default:
  FUNC_5("bad layout type");
 }





 if (VAR_5 == 129)
  VAR_21 = VAR_13;
 else
  VAR_21 = VAR_14;
 if (VAR_6 < 0)
  VAR_18 = ((VAR_21 + 1) / 2) - 1;
 else if (VAR_7 & VAR_1)
  VAR_18 = VAR_21 - VAR_6 - 1;
 else
  VAR_18 = VAR_6;
 if (VAR_18 < VAR_0)
  VAR_18 = VAR_0;
 else if (VAR_18 > VAR_21 - 2)
  VAR_18 = VAR_21 - 2;
 VAR_17 = VAR_21 - 1 - VAR_18;


 if (VAR_7 & VAR_1)
  VAR_20 = VAR_18;
 else
  VAR_20 = VAR_17;


 if (VAR_23 && !FUNC_13(VAR_4->window, VAR_8, VAR_5, VAR_20))
  return (((void*)0));

 if (VAR_8->parent != ((void*)0) && VAR_8->parent->type == VAR_5) {




  VAR_9 = VAR_8->parent;
  VAR_10 = FUNC_7(VAR_9);
  if (VAR_7 & VAR_1)
   FUNC_1(VAR_8, VAR_10, VAR_3);
  else
   FUNC_0(&VAR_9->cells, VAR_8, VAR_10, VAR_3);
 } else if (VAR_23 && VAR_8->parent == ((void*)0) && VAR_8->type == VAR_5) {






  if (VAR_8->type == 129) {
   VAR_8->sx = VAR_20;
   FUNC_11(VAR_4->window, VAR_8);
   VAR_8->sx = VAR_21;
  } else if (VAR_8->type == 128) {
   VAR_8->sy = VAR_20;
   FUNC_11(VAR_4->window, VAR_8);
   VAR_8->sy = VAR_21;
  }
  VAR_22 = 1;


  VAR_10 = FUNC_7(VAR_8);
  VAR_6 = VAR_21 - 1 - VAR_20;
  if (VAR_8->type == 129)
   FUNC_12(VAR_10, VAR_6, VAR_14, 0, 0);
  else if (VAR_8->type == 128)
   FUNC_12(VAR_10, VAR_13, VAR_6, 0, 0);
  if (VAR_7 & VAR_1)
   FUNC_2(&VAR_8->cells, VAR_10, VAR_3);
  else
   FUNC_3(&VAR_8->cells, VAR_10, VAR_3);
 } else {





  VAR_9 = FUNC_7(VAR_8->parent);
  FUNC_10(VAR_9, VAR_5);
  FUNC_12(VAR_9, VAR_13, VAR_14, VAR_15, VAR_16);
  if (VAR_8->parent == ((void*)0))
   VAR_4->window->layout_root = VAR_9;
  else
   FUNC_4(&VAR_8->parent->cells, VAR_8, VAR_9, VAR_3);


  VAR_8->parent = VAR_9;
  FUNC_2(&VAR_9->cells, VAR_8, VAR_3);


  VAR_10 = FUNC_7(VAR_9);
  if (VAR_7 & VAR_1)
   FUNC_2(&VAR_9->cells, VAR_10, VAR_3);
  else
   FUNC_3(&VAR_9->cells, VAR_10, VAR_3);
 }
 if (VAR_7 & VAR_1) {
  VAR_11 = VAR_10;
  VAR_12 = VAR_8;
 } else {
  VAR_11 = VAR_8;
  VAR_12 = VAR_10;
 }





 if (!VAR_22 && VAR_5 == 129) {
  FUNC_12(VAR_11, VAR_17, VAR_14, VAR_15, VAR_16);
  FUNC_12(VAR_12, VAR_18, VAR_14, VAR_15 + VAR_11->sx + 1, VAR_16);
 } else if (!VAR_22 && VAR_5 == 128) {
  FUNC_12(VAR_11, VAR_13, VAR_17, VAR_15, VAR_16);
  FUNC_12(VAR_12, VAR_13, VAR_18, VAR_15, VAR_16 + VAR_11->sy + 1);
 }
 if (VAR_23) {
  if (!VAR_22)
   FUNC_11(VAR_4->window, VAR_8);
  FUNC_8(VAR_4->window);
 } else
  FUNC_9(VAR_8, VAR_4);

 return (VAR_10);
}
