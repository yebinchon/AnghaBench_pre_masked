
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct window_pane {TYPE_1__* layout_cell; struct window* window; } ;
struct window {int dummy; } ;
struct layout_cell {struct layout_cell* parent; } ;
struct TYPE_2__ {struct layout_cell* parent; } ;


 int FUNC_0 (struct window*) ;
 int FUNC_1 (struct window*) ;
 scalar_t__ FUNC_2 (struct window*,struct layout_cell*) ;

void
FUNC_3(struct window_pane *VAR_0)
{
 struct layout_cell *VAR_1;
 struct window *VAR_2 = VAR_0->window;

 VAR_1 = VAR_0->layout_cell->parent;
 if (VAR_1 == ((void*)0))
  return;

 do {
  if (FUNC_2(VAR_2, VAR_1)) {
   FUNC_0(VAR_2);
   FUNC_1(VAR_2);
   break;
  }
 } while ((VAR_1 = VAR_1->parent) != ((void*)0));
}
