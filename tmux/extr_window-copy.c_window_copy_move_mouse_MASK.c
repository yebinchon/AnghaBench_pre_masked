
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct window_pane {int modes; } ;
struct window_mode_entry {int * mode; } ;
struct mouse_event {int dummy; } ;


 struct window_mode_entry* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct window_pane*,struct mouse_event*,int *,int *,int ) ;
 struct window_pane* FUNC_2 (struct mouse_event*,int *,int *) ;
 int VAR_0 ;
 int FUNC_3 (struct window_mode_entry*,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4(struct mouse_event *VAR_2)
{
 struct window_pane *VAR_3;
 struct window_mode_entry *VAR_4;
 u_int VAR_5, VAR_6;

 VAR_3 = FUNC_2(VAR_2, ((void*)0), ((void*)0));
 if (VAR_3 == ((void*)0))
  return;
 VAR_4 = FUNC_0(&VAR_3->modes);
 if (VAR_4 == ((void*)0))
  return;
 if (VAR_4->mode != &VAR_0 && VAR_4->mode != &VAR_1)
  return;

 if (FUNC_1(VAR_3, VAR_2, &VAR_5, &VAR_6, 0) != 0)
  return;

 FUNC_3(VAR_4, VAR_5, VAR_6);
}
