
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct window_pane {scalar_t__ xoff; scalar_t__ yoff; TYPE_3__* screen; } ;
struct window {scalar_t__ sx; scalar_t__ sy; struct window_pane* active; } ;
struct tty {scalar_t__ sx; scalar_t__ sy; struct client* client; } ;
struct client {scalar_t__ pan_ox; scalar_t__ pan_oy; struct window* pan_window; TYPE_2__* session; } ;
struct TYPE_6__ {int mode; scalar_t__ cx; scalar_t__ cy; } ;
struct TYPE_5__ {TYPE_1__* curw; } ;
struct TYPE_4__ {struct window* window; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct client*) ;

__attribute__((used)) static int
FUNC_1(struct tty *VAR_1, u_int *VAR_2, u_int *VAR_3, u_int *VAR_4, u_int *VAR_5)
{
 struct client *VAR_6 = VAR_1->client;
 struct window *VAR_7 = VAR_6->session->curw->window;
 struct window_pane *VAR_8 = VAR_7->active;
 u_int VAR_9, VAR_10, VAR_11;

 VAR_11 = FUNC_0(VAR_6);

 if (VAR_1->sx >= VAR_7->sx && VAR_1->sy - VAR_11 >= VAR_7->sy) {
  *VAR_2 = 0;
  *VAR_3 = 0;
  *VAR_4 = VAR_7->sx;
  *VAR_5 = VAR_7->sy;

  VAR_6->pan_window = ((void*)0);
  return (0);
 }

 *VAR_4 = VAR_1->sx;
 *VAR_5 = VAR_1->sy - VAR_11;

 if (VAR_6->pan_window == VAR_7) {
  if (*VAR_4 >= VAR_7->sx)
   VAR_6->pan_ox = 0;
  else if (VAR_6->pan_ox + *VAR_4 > VAR_7->sx)
   VAR_6->pan_ox = VAR_7->sx - *VAR_4;
  *VAR_2 = VAR_6->pan_ox;
  if (*VAR_5 >= VAR_7->sy)
   VAR_6->pan_oy = 0;
  else if (VAR_6->pan_oy + *VAR_5 > VAR_7->sy)
   VAR_6->pan_oy = VAR_7->sy - *VAR_5;
  *VAR_3 = VAR_6->pan_oy;
  return (1);
 }

 if (~VAR_8->screen->mode & VAR_0) {
  *VAR_2 = 0;
  *VAR_3 = 0;
 } else {
  VAR_9 = VAR_8->xoff + VAR_8->screen->cx;
  VAR_10 = VAR_8->yoff + VAR_8->screen->cy;

  if (VAR_9 < *VAR_4)
   *VAR_2 = 0;
  else if (VAR_9 > VAR_7->sx - *VAR_4)
   *VAR_2 = VAR_7->sx - *VAR_4;
  else
   *VAR_2 = VAR_9 - *VAR_4 / 2;

  if (VAR_10 < *VAR_5)
   *VAR_3 = 0;
  else if (VAR_10 > VAR_7->sy - *VAR_5)
   *VAR_3 = VAR_7->sy - *VAR_5;
  else
   *VAR_3 = VAR_10 - *VAR_5 / 2;
 }

 VAR_6->pan_window = ((void*)0);
 return (1);
}
