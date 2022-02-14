
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct window_pane {int fd; int sx; int osx; int sy; int pipe_fd; int base; int status_screen; int * screen; void* saved_cy; void* saved_cx; int * saved_grid; int * pipe_event; scalar_t__ pipe_off; scalar_t__ yoff; scalar_t__ xoff; int * layout_cell; int modes; int * event; int * cwd; int * shell; int * argv; scalar_t__ argc; scalar_t__ id; int flags; int options; struct window* window; } ;
struct window {int options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,struct window_pane*) ;
 int FUNC_1 (int *) ;
 void* VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (char*,int) ;
 int FUNC_3 (struct window_pane*) ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int,int,int) ;
 int FUNC_6 (int *,char*) ;
 int VAR_5 ;
 struct window_pane* FUNC_7 (int,int) ;

__attribute__((used)) static struct window_pane *
FUNC_8(struct window *VAR_6, u_int VAR_7, u_int VAR_8, u_int VAR_9)
{
 struct window_pane *VAR_10;
 char VAR_11[VAR_0 + 1];

 VAR_10 = FUNC_7(1, sizeof *VAR_10);
 VAR_10->window = VAR_6;
 VAR_10->options = FUNC_4(VAR_6->options);
 VAR_10->flags = VAR_1;

 VAR_10->id = VAR_4++;
 FUNC_0(VAR_5, &VAR_3, VAR_10);

 VAR_10->argc = 0;
 VAR_10->argv = ((void*)0);
 VAR_10->shell = ((void*)0);
 VAR_10->cwd = ((void*)0);

 VAR_10->fd = -1;
 VAR_10->event = ((void*)0);

 FUNC_1(&VAR_10->modes);

 VAR_10->layout_cell = ((void*)0);

 VAR_10->xoff = 0;
 VAR_10->yoff = 0;

 VAR_10->sx = VAR_10->osx = VAR_7;
 VAR_10->sy = VAR_10->osx = VAR_8;

 VAR_10->pipe_fd = -1;
 VAR_10->pipe_off = 0;
 VAR_10->pipe_event = ((void*)0);

 VAR_10->saved_grid = ((void*)0);
 VAR_10->saved_cx = VAR_2;
 VAR_10->saved_cy = VAR_2;

 FUNC_5(&VAR_10->base, VAR_7, VAR_8, VAR_9);
 VAR_10->screen = &VAR_10->base;

 FUNC_5(&VAR_10->status_screen, 1, 1, 0);

 if (FUNC_2(VAR_11, sizeof VAR_11) == 0)
  FUNC_6(&VAR_10->base, VAR_11);

 FUNC_3(VAR_10);

 return (VAR_10);
}
