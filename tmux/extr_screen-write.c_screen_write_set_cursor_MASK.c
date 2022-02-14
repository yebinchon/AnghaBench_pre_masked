
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct window_pane {struct window* window; } ;
struct window {int offset_timer; } ;
struct timeval {int tv_usec; } ;
struct screen_write_ctx {struct screen* s; struct window_pane* wp; } ;
struct screen {int cx; int cy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct timeval*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ,struct window*) ;
 int FUNC_4 (struct screen*) ;
 int FUNC_5 (struct screen*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_6(struct screen_write_ctx *VAR_1, int VAR_2, int VAR_3)
{
 struct window_pane *VAR_4 = VAR_1->wp;
 struct window *VAR_5;
 struct screen *VAR_6 = VAR_1->s;
 struct timeval VAR_7 = { .tv_usec = 10000 };

 if (VAR_2 != -1 && (u_int)VAR_2 == VAR_6->cx && VAR_3 != -1 && (u_int)VAR_3 == VAR_6->cy)
  return;

 if (VAR_2 != -1) {
  if ((u_int)VAR_2 > FUNC_4(VAR_6))
   VAR_2 = FUNC_4(VAR_6) - 1;
  VAR_6->cx = VAR_2;
 }
 if (VAR_3 != -1) {
  if ((u_int)VAR_3 > FUNC_5(VAR_6) - 1)
   VAR_3 = FUNC_5(VAR_6) - 1;
  VAR_6->cy = VAR_3;
 }

 if (VAR_4 == ((void*)0))
  return;
 VAR_5 = VAR_4->window;

 if (!FUNC_0(&VAR_5->offset_timer))
  FUNC_3(&VAR_5->offset_timer, VAR_0, VAR_5);
 if (!FUNC_2(&VAR_5->offset_timer, ((void*)0)))
  FUNC_1(&VAR_5->offset_timer, &VAR_7);
}
