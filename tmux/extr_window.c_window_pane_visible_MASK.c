
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct window_pane {TYPE_1__* window; } ;
struct TYPE_2__ {int flags; struct window_pane* active; } ;


 int VAR_0 ;

int
FUNC_0(struct window_pane *VAR_1)
{
 if (~VAR_1->window->flags & VAR_0)
  return (1);
 return (VAR_1 == VAR_1->window->active);
}
