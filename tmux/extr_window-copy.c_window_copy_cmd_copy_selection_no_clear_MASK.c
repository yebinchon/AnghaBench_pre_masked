
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct winlink {int dummy; } ;
struct window_pane {int dummy; } ;
struct window_mode_entry {struct window_pane* wp; } ;
struct window_copy_cmd_state {TYPE_1__* args; struct winlink* wl; struct session* s; struct client* c; struct window_mode_entry* wme; } ;
struct session {int dummy; } ;
struct client {int dummy; } ;
typedef enum window_copy_cmd_action { ____Placeholder_window_copy_cmd_action } window_copy_cmd_action ;
struct TYPE_2__ {int argc; int * argv; } ;


 int VAR_0 ;
 char* FUNC_0 (int *,int ,struct client*,struct session*,struct winlink*,struct window_pane*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct window_mode_entry*,char*) ;

__attribute__((used)) static enum window_copy_cmd_action
FUNC_3(struct window_copy_cmd_state *VAR_1)
{
 struct window_mode_entry *VAR_2 = VAR_1->wme;
 struct client *VAR_3 = VAR_1->c;
 struct session *VAR_4 = VAR_1->s;
 struct winlink *VAR_5 = VAR_1->wl;
 struct window_pane *VAR_6 = VAR_2->wp;
 char *VAR_7 = ((void*)0);

 if (VAR_1->args->argc == 2)
  VAR_7 = FUNC_0(((void*)0), VAR_1->args->argv[1], VAR_3, VAR_4, VAR_5, VAR_6);

 if (VAR_4 != ((void*)0))
  FUNC_2(VAR_2, VAR_7);

 FUNC_1(VAR_7);
 return (VAR_0);
}
