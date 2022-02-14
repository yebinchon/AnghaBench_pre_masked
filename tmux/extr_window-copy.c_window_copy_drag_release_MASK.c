
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct window_pane {int modes; } ;
struct window_mode_entry {struct window_copy_mode_data* data; int * mode; } ;
struct window_copy_mode_data {int dragtimer; } ;
struct mouse_event {int dummy; } ;
struct client {int dummy; } ;


 struct window_mode_entry* FUNC_0 (int *) ;
 struct window_pane* FUNC_1 (struct mouse_event*,int *,int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(struct client *VAR_2, struct mouse_event *VAR_3)
{
 struct window_pane *VAR_4;
 struct window_mode_entry *VAR_5;
 struct window_copy_mode_data *VAR_6;

 if (VAR_2 == ((void*)0))
  return;

 VAR_4 = FUNC_1(VAR_3, ((void*)0), ((void*)0));
 if (VAR_4 == ((void*)0))
  return;
 VAR_5 = FUNC_0(&VAR_4->modes);
 if (VAR_5 == ((void*)0))
  return;
 if (VAR_5->mode != &VAR_0 && VAR_5->mode != &VAR_1)
  return;

 VAR_6 = VAR_5->data;
 FUNC_2(&VAR_6->dragtimer);
}
