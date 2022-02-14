
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct window_pane {int dummy; } ;
struct screen_redraw_ctx {int dummy; } ;
struct client {int tty; int * overlay_draw; } ;


 int FUNC_0 (struct screen_redraw_ctx*,struct window_pane*) ;
 int FUNC_1 (struct client*,struct screen_redraw_ctx*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct window_pane*) ;

void
FUNC_4(struct client *VAR_0, struct window_pane *VAR_1)
{
 struct screen_redraw_ctx VAR_2;

 if (VAR_0->overlay_draw != ((void*)0) || !FUNC_3(VAR_1))
  return;

 FUNC_1(VAR_0, &VAR_2);

 FUNC_0(&VAR_2, VAR_1);
 FUNC_2(&VAR_0->tty);
}
