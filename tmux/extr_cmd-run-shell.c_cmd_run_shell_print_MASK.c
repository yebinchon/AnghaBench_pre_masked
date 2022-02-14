
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct window_pane {int modes; } ;
struct window_mode_entry {int * mode; } ;
struct job {int dummy; } ;
struct cmd_run_shell_data {int wp_id; int * item; } ;
struct cmd_find_state {struct window_pane* wp; } ;


 struct window_mode_entry* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct cmd_find_state*,int ) ;
 int FUNC_2 (int *,char*,char const*) ;
 struct cmd_run_shell_data* FUNC_3 (struct job*) ;
 int FUNC_4 (struct window_pane*,char*,char const*) ;
 struct window_pane* FUNC_5 (int) ;
 int FUNC_6 (struct window_pane*,int *,int *,int *) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_7(struct job *VAR_1, const char *VAR_2)
{
 struct cmd_run_shell_data *VAR_3 = FUNC_3(VAR_1);
 struct window_pane *VAR_4 = ((void*)0);
 struct cmd_find_state VAR_5;
 struct window_mode_entry *VAR_6;

 if (VAR_3->wp_id != -1)
  VAR_4 = FUNC_5(VAR_3->wp_id);
 if (VAR_4 == ((void*)0)) {
  if (VAR_3->item != ((void*)0)) {
   FUNC_2(VAR_3->item, "%s", VAR_2);
   return;
  }
  if (FUNC_1(&VAR_5, 0) != 0)
   return;
  VAR_4 = VAR_5.wp;
  if (VAR_4 == ((void*)0))
   return;
 }

 VAR_6 = FUNC_0(&VAR_4->modes);
 if (VAR_6 == ((void*)0) || VAR_6->mode != &VAR_0)
  FUNC_6(VAR_4, &VAR_0, ((void*)0), ((void*)0));
 FUNC_4(VAR_4, "%s", VAR_2);
}
