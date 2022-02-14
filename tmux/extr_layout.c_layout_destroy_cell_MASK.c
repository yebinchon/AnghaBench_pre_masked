
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct window {int dummy; } ;
struct layout_cell {scalar_t__ type; int cells; struct layout_cell* parent; scalar_t__ yoff; scalar_t__ xoff; scalar_t__ sy; scalar_t__ sx; } ;


 scalar_t__ VAR_0 ;
 struct layout_cell* FUNC_0 (int *) ;
 struct layout_cell* FUNC_1 (struct layout_cell*,int ) ;
 struct layout_cell* FUNC_2 (struct layout_cell*,int ,int ) ;
 int FUNC_3 (int *,struct layout_cell*,int ) ;
 int FUNC_4 (int *,struct layout_cell*,struct layout_cell*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (struct layout_cell*) ;
 int FUNC_6 (struct window*,struct layout_cell*,scalar_t__,scalar_t__) ;

void
FUNC_7(struct window *VAR_3, struct layout_cell *VAR_4,
    struct layout_cell **VAR_5)
{
 struct layout_cell *VAR_6, *VAR_7;





 VAR_7 = VAR_4->parent;
 if (VAR_7 == ((void*)0)) {
  FUNC_5(VAR_4);
  *VAR_5 = ((void*)0);
  return;
 }


 if (VAR_4 == FUNC_0(&VAR_7->cells))
  VAR_6 = FUNC_1(VAR_4, VAR_1);
 else
  VAR_6 = FUNC_2(VAR_4, VAR_2, VAR_1);
 if (VAR_6 != ((void*)0) && VAR_7->type == VAR_0)
  FUNC_6(VAR_3, VAR_6, VAR_7->type, VAR_4->sx + 1);
 else if (VAR_6 != ((void*)0))
  FUNC_6(VAR_3, VAR_6, VAR_7->type, VAR_4->sy + 1);


 FUNC_3(&VAR_7->cells, VAR_4, VAR_1);
 FUNC_5(VAR_4);





 VAR_4 = FUNC_0(&VAR_7->cells);
 if (FUNC_1(VAR_4, VAR_1) == ((void*)0)) {
  FUNC_3(&VAR_7->cells, VAR_4, VAR_1);

  VAR_4->parent = VAR_7->parent;
  if (VAR_4->parent == ((void*)0)) {
   VAR_4->xoff = 0; VAR_4->yoff = 0;
   *VAR_5 = VAR_4;
  } else
   FUNC_4(&VAR_4->parent->cells, VAR_7, VAR_4, VAR_1);

  FUNC_5(VAR_7);
 }
}
