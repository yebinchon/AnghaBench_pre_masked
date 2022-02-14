
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct window_pane {int modes; } ;
struct window_mode_entry {struct window_copy_mode_data* data; int * mode; } ;
struct window_copy_mode_data {scalar_t__ cx; scalar_t__ cy; int dragtimer; int screen; } ;
struct timeval {int tv_usec; } ;
struct mouse_event {int dummy; } ;
struct client {int dummy; } ;


 struct window_mode_entry* FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct window_pane*,struct mouse_event*,scalar_t__*,scalar_t__*,int ) ;
 struct window_pane* FUNC_2 (struct mouse_event*,int *,int *) ;
 int FUNC_3 (int *,struct timeval*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct window_mode_entry*,int) ;
 int FUNC_7 (struct window_mode_entry*,int) ;
 int VAR_1 ;
 int FUNC_8 (struct window_mode_entry*,scalar_t__) ;
 int FUNC_9 (struct window_mode_entry*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_10 (struct window_mode_entry*,int) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_11(struct client *VAR_3, struct mouse_event *VAR_4)
{
 struct window_pane *VAR_5;
 struct window_mode_entry *VAR_6;
 struct window_copy_mode_data *VAR_7;
 u_int VAR_8, VAR_9, VAR_10, VAR_11;
 struct timeval VAR_12 = {
  .tv_usec = VAR_0
 };

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

 VAR_7 = VAR_6->data;
 FUNC_4(&VAR_7->dragtimer);

 if (FUNC_1(VAR_5, VAR_4, &VAR_8, &VAR_9, 0) != 0)
  return;
 VAR_10 = VAR_7->cx;
 VAR_11 = VAR_7->cy;

 FUNC_9(VAR_6, VAR_8, VAR_9);
 if (FUNC_10(VAR_6, 1))
  FUNC_8(VAR_6, VAR_11);
 if (VAR_11 != VAR_7->cy || VAR_10 == VAR_7->cx) {
  if (VAR_9 == 0) {
   FUNC_3(&VAR_7->dragtimer, &VAR_12);
   FUNC_7(VAR_6, 1);
  } else if (VAR_9 == FUNC_5(&VAR_7->screen) - 1) {
   FUNC_3(&VAR_7->dragtimer, &VAR_12);
   FUNC_6(VAR_6, 1);
  }
 }
}
