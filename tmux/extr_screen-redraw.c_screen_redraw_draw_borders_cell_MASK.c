
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u_int ;
struct window_pane {int dummy; } ;
struct window {struct window_pane* active; } ;
struct tty {int dummy; } ;
struct session {TYPE_1__* curw; } ;
struct screen_redraw_ctx {size_t ox; size_t oy; int pane_status; size_t statuslines; scalar_t__ statustop; struct client* c; } ;
struct grid_cell {int dummy; } ;
struct client {struct tty tty; struct session* session; } ;
struct TYPE_4__ {struct window_pane* wp; } ;
struct TYPE_3__ {struct window* window; } ;


 int * VAR_0 ;
 size_t VAR_1 ;
 TYPE_2__ VAR_2 ;
 size_t FUNC_0 (struct client*,size_t,size_t,int,struct window_pane**) ;
 int FUNC_1 (size_t,size_t,size_t,int,struct window*,struct window_pane*,struct window_pane*) ;
 scalar_t__ FUNC_2 (struct session*,TYPE_1__*,struct window_pane*) ;
 int FUNC_3 (struct tty*,struct grid_cell*,int *) ;
 int FUNC_4 (struct tty*,size_t,size_t) ;
 int FUNC_5 (struct tty*,int ) ;

__attribute__((used)) static void
FUNC_6(struct screen_redraw_ctx *VAR_3, u_int VAR_4, u_int VAR_5,
    struct grid_cell *VAR_6, struct grid_cell *VAR_7,
    struct grid_cell *VAR_8, struct grid_cell *VAR_9)
{
 struct client *VAR_10 = VAR_3->c;
 struct session *VAR_11 = VAR_10->session;
 struct window *VAR_12 = VAR_11->curw->window;
 struct tty *VAR_13 = &VAR_10->tty;
 struct window_pane *VAR_14;
 struct window_pane *VAR_15 = VAR_12->active;
 struct window_pane *VAR_16 = VAR_2.wp;
 u_int VAR_17, VAR_18 = VAR_3->ox + VAR_4, VAR_19 = VAR_3->oy + VAR_5;
 int VAR_20, VAR_21 = VAR_3->pane_status;

 VAR_17 = FUNC_0(VAR_10, VAR_18, VAR_19, VAR_21, &VAR_14);
 if (VAR_17 == VAR_1)
  return;
 VAR_20 = FUNC_1(VAR_18, VAR_19, VAR_17, VAR_21, VAR_12, VAR_15, VAR_14);

 if (FUNC_2(VAR_11, VAR_11->curw, VAR_2.wp) &&
     FUNC_1(VAR_18, VAR_19, VAR_17, VAR_21, VAR_12, VAR_16, VAR_14)) {
  if (VAR_20)
   FUNC_3(VAR_13, VAR_6, ((void*)0));
  else
   FUNC_3(VAR_13, VAR_8, ((void*)0));
 } else if (VAR_20)
  FUNC_3(VAR_13, VAR_7, ((void*)0));
 else
  FUNC_3(VAR_13, VAR_9, ((void*)0));
 if (VAR_3->statustop)
  FUNC_4(VAR_13, VAR_4, VAR_3->statuslines + VAR_5);
 else
  FUNC_4(VAR_13, VAR_4, VAR_5);
 FUNC_5(VAR_13, VAR_0[VAR_17]);
}
