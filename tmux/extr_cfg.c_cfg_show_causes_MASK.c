
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct window_pane {int modes; } ;
struct window_mode_entry {int * mode; } ;
struct session {TYPE_2__* curw; } ;
struct TYPE_4__ {TYPE_1__* window; } ;
struct TYPE_3__ {struct window_pane* active; } ;


 struct window_mode_entry* FUNC_0 (int *) ;
 int ***** VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *****) ;
 int FUNC_2 (struct window_pane*,char*,int ****) ;
 int FUNC_3 (struct window_pane*,int *,int *,int *) ;
 int VAR_2 ;

void
FUNC_4(struct session *VAR_3)
{
 struct window_pane *VAR_4;
 struct window_mode_entry *VAR_5;
 u_int VAR_6;

 if (VAR_3 == ((void*)0) || VAR_1 == 0)
  return;
 VAR_4 = VAR_3->curw->window->active;

 VAR_5 = FUNC_0(&VAR_4->modes);
 if (VAR_5 == ((void*)0) || VAR_5->mode != &VAR_2)
  FUNC_3(VAR_4, &VAR_2, ((void*)0), ((void*)0));
 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  FUNC_2(VAR_4, "%s", VAR_0[VAR_6]);
  FUNC_1(&VAR_0[VAR_6]);
 }

 FUNC_1(VAR_0);
 VAR_0 = ((void*)0);
 VAR_1 = 0;
}
