
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bg; int fg; } ;
struct style {TYPE_1__ gc; } ;
struct window_pane {int flags; struct style cached_active_style; struct style cached_style; } ;
struct window {struct window_pane* active; } ;


 int VAR_0 ;
 int FUNC_0 (struct style*,struct style*) ;
 int FUNC_1 (struct window_pane*,int ) ;

void
FUNC_2(struct window *VAR_1, struct window_pane *VAR_2)
{
 struct style *VAR_3, *VAR_4;
 int VAR_5, VAR_6;

 if (VAR_2 == VAR_1->active)
  return;

 for (;;) {




  VAR_3 = &VAR_2->cached_style;
  VAR_4 = &VAR_2->cached_active_style;
  if (!FUNC_0(VAR_3, VAR_4))
   VAR_2->flags |= VAR_0;
  else {
   VAR_5 = FUNC_1(VAR_2, VAR_3->gc.fg);
   VAR_6 = FUNC_1(VAR_2, VAR_4->gc.fg);
   if (VAR_5 != VAR_6)
    VAR_2->flags |= VAR_0;
   else {
    VAR_5 = FUNC_1(VAR_2, VAR_3->gc.bg);
    VAR_6 = FUNC_1(VAR_2, VAR_4->gc.bg);
    if (VAR_5 != VAR_6)
     VAR_2->flags |= VAR_0;
   }
  }
  if (VAR_2 == VAR_1->active)
   break;
  VAR_2 = VAR_1->active;
 }
}
