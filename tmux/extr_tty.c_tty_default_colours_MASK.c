
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int fg; int bg; } ;
struct style {TYPE_2__ gc; } ;
struct window_pane {int flags; TYPE_1__* window; struct style cached_style; struct style cached_active_style; struct options* options; } ;
struct options {int dummy; } ;
struct grid_cell {int fg; int bg; } ;
struct TYPE_3__ {struct window_pane* active; } ;


 int VAR_0 ;
 struct style* FUNC_0 (struct options*,char*) ;
 int FUNC_1 (struct style*,struct style*) ;
 int FUNC_2 (struct window_pane*,int) ;

__attribute__((used)) static void
FUNC_3(struct grid_cell *VAR_1, struct window_pane *VAR_2)
{
 struct options *VAR_3 = VAR_2->options;
 struct style *VAR_4, *VAR_5;
 int VAR_6;

 if (VAR_2->flags & VAR_0) {
  VAR_2->flags &= ~VAR_0;

  VAR_5 = FUNC_0(VAR_3, "window-active-style");
  VAR_4 = FUNC_0(VAR_3, "window-style");

  FUNC_1(&VAR_2->cached_active_style, VAR_5);
  FUNC_1(&VAR_2->cached_style, VAR_4);
 } else {
  VAR_5 = &VAR_2->cached_active_style;
  VAR_4 = &VAR_2->cached_style;
 }

 if (VAR_1->fg == 8) {
  if (VAR_2 == VAR_2->window->active && VAR_5->gc.fg != 8)
   VAR_1->fg = VAR_5->gc.fg;
  else
   VAR_1->fg = VAR_4->gc.fg;

  if (VAR_1->fg != 8) {
   VAR_6 = FUNC_2(VAR_2, VAR_1->fg);
   if (VAR_6 != -1)
    VAR_1->fg = VAR_6;
  }
 }

 if (VAR_1->bg == 8) {
  if (VAR_2 == VAR_2->window->active && VAR_5->gc.bg != 8)
   VAR_1->bg = VAR_5->gc.bg;
  else
   VAR_1->bg = VAR_4->gc.bg;

  if (VAR_1->bg != 8) {
   VAR_6 = FUNC_2(VAR_2, VAR_1->bg);
   if (VAR_6 != -1)
    VAR_1->bg = VAR_6;
  }
 }
}
