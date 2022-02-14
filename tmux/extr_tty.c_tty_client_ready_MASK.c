
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct window_pane {scalar_t__ window; int * layout_cell; } ;
struct TYPE_4__ {int flags; int * term; } ;
struct client {int flags; TYPE_2__* session; TYPE_1__ tty; } ;
struct TYPE_6__ {scalar_t__ window; } ;
struct TYPE_5__ {TYPE_3__* curw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_0(struct client *VAR_3, struct window_pane *VAR_4)
{
 if (VAR_3->session == ((void*)0) || VAR_3->tty.term == ((void*)0))
  return (0);
 if (VAR_3->flags & (VAR_0|VAR_1))
  return (0);
 if (VAR_3->tty.flags & VAR_2)
  return (0);
 if (VAR_3->session->curw->window != VAR_4->window)
  return (0);
 if (VAR_4->layout_cell == ((void*)0))
  return (0);
 return (1);
}
