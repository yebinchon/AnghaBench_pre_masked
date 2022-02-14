
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct screen_redraw_ctx {scalar_t__ pane_status; scalar_t__ statuslines; } ;
struct client {int flags; int tty; int (* overlay_draw ) (struct client*,struct screen_redraw_ctx*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct screen_redraw_ctx*) ;
 int FUNC_1 (struct screen_redraw_ctx*) ;
 int FUNC_2 (struct screen_redraw_ctx*) ;
 int FUNC_3 (struct screen_redraw_ctx*) ;
 int FUNC_4 (struct client*,struct screen_redraw_ctx*) ;
 int FUNC_5 (struct client*,int) ;
 int FUNC_6 (struct client*,struct screen_redraw_ctx*) ;
 int FUNC_7 (int *) ;

void
FUNC_8(struct client *VAR_7)
{
 struct screen_redraw_ctx VAR_8;
 int VAR_9;

 if (VAR_7->flags & VAR_5)
  return;

 VAR_9 = FUNC_5(VAR_7, VAR_7->flags);
 FUNC_4(VAR_7, &VAR_8);

 if (VAR_9 & (VAR_4|VAR_0)) {
  if (VAR_8.pane_status != VAR_6)
   FUNC_1(&VAR_8);
  FUNC_0(&VAR_8);
 }
 if (VAR_9 & VAR_4)
  FUNC_2(&VAR_8);
 if (VAR_8.statuslines != 0 &&
     (VAR_9 & (VAR_2|VAR_3)))
  FUNC_3(&VAR_8);
 if (VAR_7->overlay_draw != ((void*)0) && (VAR_9 & VAR_1))
  VAR_7->overlay_draw(VAR_7, &VAR_8);
 FUNC_7(&VAR_7->tty);
}
