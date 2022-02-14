
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct window_pane {int pipe_fd; int flags; int fd; TYPE_1__* pipe_event; } ;
struct TYPE_2__ {int output; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int*) ;

int
FUNC_2(struct window_pane *VAR_2)
{
 int VAR_3;

 if (VAR_2->pipe_fd != -1) {
  if (FUNC_0(VAR_2->pipe_event->output) != 0)
   return (0);
  if (FUNC_1(VAR_2->fd, VAR_0, &VAR_3) != -1 && VAR_3 > 0)
   return (0);
 }

 if (~VAR_2->flags & VAR_1)
  return (0);
 return (1);
}
