
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct winlink {int window; } ;
struct window_pane {int dummy; } ;
struct session {int dummy; } ;
struct mouse_event {int wp; } ;


 struct winlink* FUNC_0 (struct mouse_event*,struct session**) ;
 int FUNC_1 (int ,struct window_pane*) ;
 struct window_pane* FUNC_2 (int ) ;

struct window_pane *
FUNC_3(struct mouse_event *VAR_0, struct session **VAR_1,
    struct winlink **VAR_2)
{
 struct winlink *VAR_3;
 struct window_pane *VAR_4;

 if ((VAR_3 = FUNC_0(VAR_0, VAR_1)) == ((void*)0))
  return (((void*)0));
 if ((VAR_4 = FUNC_2(VAR_0->wp)) == ((void*)0))
  return (((void*)0));
 if (!FUNC_1(VAR_3->window, VAR_4))
  return (((void*)0));

 if (VAR_2 != ((void*)0))
  *VAR_2 = VAR_3;
 return (VAR_4);
}
