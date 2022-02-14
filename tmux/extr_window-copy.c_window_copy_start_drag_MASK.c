
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct window_pane {int modes; } ;
struct window_mode_entry {int * mode; } ;
struct mouse_event {int dummy; } ;
struct TYPE_2__ {int mouse_drag_release; int (* mouse_drag_update ) (struct client*,struct mouse_event*) ;} ;
struct client {TYPE_1__ tty; } ;


 struct window_mode_entry* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct window_pane*,struct mouse_event*,int *,int *,int) ;
 struct window_pane* FUNC_2 (struct mouse_event*,int *,int *) ;
 int VAR_0 ;
 int FUNC_3 (struct client*,struct mouse_event*) ;
 int VAR_1 ;
 int FUNC_4 (struct window_mode_entry*) ;
 int FUNC_5 (struct window_mode_entry*) ;
 int FUNC_6 (struct window_mode_entry*,int ,int ) ;
 int VAR_2 ;

void
FUNC_7(struct client *VAR_3, struct mouse_event *VAR_4)
{
 struct window_pane *VAR_5;
 struct window_mode_entry *VAR_6;
 u_int VAR_7, VAR_8;

 if (VAR_3 == ((void*)0))
  return;

 VAR_5 = FUNC_2(VAR_4, ((void*)0), ((void*)0));
 if (VAR_5 == ((void*)0))
  return;
 VAR_6 = FUNC_0(&VAR_5->modes);
 if (VAR_6 == ((void*)0))
  return;
 if (VAR_6->mode != &VAR_1 && VAR_6->mode != &VAR_2)
  return;

 if (FUNC_1(VAR_5, VAR_4, &VAR_7, &VAR_8, 1) != 0)
  return;

 VAR_3->tty.mouse_drag_update = FUNC_3;
 VAR_3->tty.mouse_drag_release = VAR_0;

 FUNC_6(VAR_6, VAR_7, VAR_8);
 FUNC_5(VAR_6);
 FUNC_4(VAR_6);

 FUNC_3(VAR_3, VAR_4);
}
