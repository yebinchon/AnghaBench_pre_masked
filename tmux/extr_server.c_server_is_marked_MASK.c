
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct winlink {int dummy; } ;
struct window_pane {int dummy; } ;
struct session {int dummy; } ;
struct TYPE_2__ {struct window_pane* wp; struct winlink* wl; struct session* s; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 () ;

int
FUNC_1(struct session *VAR_1, struct winlink *VAR_2, struct window_pane *VAR_3)
{
 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
  return (0);
 if (VAR_0.s != VAR_1 || VAR_0.wl != VAR_2)
  return (0);
 if (VAR_0.wp != VAR_3)
  return (0);
 return (FUNC_0());
}
