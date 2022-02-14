
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct winlink {int dummy; } ;
struct window_pane {int dummy; } ;
struct window_mode_entry {int prefix; struct window_pane* wp; } ;
struct window_copy_cmd_state {TYPE_1__* args; struct winlink* wl; struct session* s; struct client* c; struct window_mode_entry* wme; } ;
struct session {int dummy; } ;
struct client {int dummy; } ;
typedef enum window_copy_cmd_action { ____Placeholder_window_copy_cmd_action } window_copy_cmd_action ;
struct TYPE_2__ {int argc; int * argv; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int *,int ,struct client*,struct session*,struct winlink*,struct window_pane*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct window_mode_entry*,char*) ;
 int FUNC_3 (struct window_mode_entry*,int ) ;
 int FUNC_4 (struct window_mode_entry*) ;
 int FUNC_5 (struct window_mode_entry*) ;

__attribute__((used)) static enum window_copy_cmd_action
FUNC_6(struct window_copy_cmd_state *VAR_2)
{
 struct window_mode_entry *VAR_3 = VAR_2->wme;
 struct client *VAR_4 = VAR_2->c;
 struct session *VAR_5 = VAR_2->s;
 struct winlink *VAR_6 = VAR_2->wl;
 struct window_pane *VAR_7 = VAR_3->wp;
 u_int VAR_8 = VAR_3->prefix;
 char *VAR_9 = ((void*)0);

 if (VAR_2->args->argc == 2)
  VAR_9 = FUNC_0(((void*)0), VAR_2->args->argv[1], VAR_4, VAR_5, VAR_6, VAR_7);

 FUNC_5(VAR_3);
 for (; VAR_8 > 1; VAR_8--)
  FUNC_3(VAR_3, 0);
 FUNC_4(VAR_3);

 if (VAR_5 != ((void*)0)) {
  FUNC_2(VAR_3, VAR_9);

  FUNC_1(VAR_9);
  return (VAR_0);
 }

 FUNC_1(VAR_9);
 return (VAR_1);
}
