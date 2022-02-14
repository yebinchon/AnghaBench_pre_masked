
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct window_pane {int fd; int flags; int status; int base; int options; int * event; struct window* window; } ;
struct window {int panes; } ;
struct screen_write_ctx {int s; } ;
struct grid_cell {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *,char*) ;
 int VAR_3 ;
 int FUNC_8 (struct window_pane*) ;
 int FUNC_9 (struct grid_cell*,int *,int) ;
 int FUNC_10 (char*,struct window_pane*) ;
 scalar_t__ FUNC_11 (int ,char*) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (struct screen_write_ctx*,int ,scalar_t__,int ) ;
 int FUNC_14 (struct screen_write_ctx*,int,int) ;
 int FUNC_15 (struct screen_write_ctx*,int,struct grid_cell*,char*,int ,char*) ;
 int FUNC_16 (struct screen_write_ctx*,int ,scalar_t__) ;
 int FUNC_17 (struct screen_write_ctx*,struct window_pane*,int *) ;
 int FUNC_18 (struct screen_write_ctx*) ;
 int FUNC_19 (struct window*) ;
 int FUNC_20 (struct window*) ;
 int FUNC_21 (struct window*) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int) ;
 int FUNC_24 (struct window*,struct window_pane*) ;

void
FUNC_25(struct window_pane *VAR_4, int VAR_5)
{
 struct window *VAR_6 = VAR_4->window;
 struct screen_write_ctx VAR_7;
 struct grid_cell VAR_8;
 time_t VAR_9;
 char VAR_10[26];

 if (VAR_4->fd != -1) {



  FUNC_5(VAR_4->event);
  VAR_4->event = ((void*)0);
  FUNC_6(VAR_4->fd);
  VAR_4->fd = -1;
 }

 if (FUNC_11(VAR_4->options, "remain-on-exit")) {
  if (~VAR_4->flags & VAR_2)
   return;

  if (VAR_4->flags & VAR_1)
   return;
  VAR_4->flags |= VAR_1;

  if (VAR_5)
   FUNC_10("pane-died", VAR_4);

  FUNC_17(&VAR_7, VAR_4, &VAR_4->base);
  FUNC_16(&VAR_7, 0, FUNC_12(VAR_7.s) - 1);
  FUNC_13(&VAR_7, 0, FUNC_12(VAR_7.s) - 1, 0);
  FUNC_14(&VAR_7, 1, 8);
  FUNC_9(&VAR_8, &VAR_3, sizeof VAR_8);

  FUNC_22(&VAR_9);
  FUNC_7(&VAR_9, VAR_10);

  if (FUNC_2(VAR_4->status)) {
   FUNC_15(&VAR_7, -1, &VAR_8,
       "Pane is dead (status %d, %s)",
       FUNC_1(VAR_4->status),
       VAR_10);
  } else if (FUNC_3(VAR_4->status)) {
   FUNC_15(&VAR_7, -1, &VAR_8,
       "Pane is dead (signal %d, %s)",
       FUNC_4(VAR_4->status),
       VAR_10);
  }

  FUNC_18(&VAR_7);
  VAR_4->flags |= VAR_0;
  return;
 }

 if (VAR_5)
  FUNC_10("pane-exited", VAR_4);

 FUNC_21(VAR_6);
 FUNC_8(VAR_4);
 FUNC_24(VAR_6, VAR_4);

 if (FUNC_0(&VAR_6->panes))
  FUNC_19(VAR_6);
 else
  FUNC_20(VAR_6);
}
