
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct winlink {int dummy; } ;
struct window_pane {int modes; } ;
struct window_mode_entry {TYPE_2__* mode; scalar_t__ prefix; } ;
struct session {int options; } ;
struct mouse_event {int key; int valid; } ;
struct cmd_find_state {struct winlink* wl; struct session* s; struct window_pane* wp; } ;
struct cmdq_item {int client; TYPE_1__* shared; struct cmd_find_state target; } ;
struct cmd {int * entry; struct args* args; } ;
struct client {int dummy; } ;
struct args {int argc; } ;
typedef int key_code ;
typedef enum cmd_retval { ____Placeholder_cmd_retval } cmd_retval ;
struct TYPE_4__ {int (* command ) (struct window_mode_entry*,struct client*,struct session*,struct winlink*,struct args*,struct mouse_event*) ;} ;
struct TYPE_3__ {struct mouse_event mouse; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct window_mode_entry* FUNC_0 (int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct args*,char) ;
 scalar_t__ FUNC_2 (struct args*,char,int,int ,char**) ;
 struct client* FUNC_3 (struct cmdq_item*,int *,int) ;
 struct window_pane* FUNC_4 (struct mouse_event*,struct session**,int *) ;
 int FUNC_5 (struct client*,struct cmd_find_state*,struct cmdq_item*,int ) ;
 struct cmdq_item* FUNC_6 (struct client*,struct cmd_find_state*,struct cmdq_item*,struct args*,int) ;
 int VAR_3 ;
 int FUNC_7 (struct cmdq_item*,char*,...) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (struct window_pane*,int) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (struct window_mode_entry*,struct client*,struct session*,struct winlink*,struct args*,struct mouse_event*) ;
 int FUNC_12 (struct window_pane*,int ,struct session*,struct winlink*,int ,struct mouse_event*) ;
 int FUNC_13 (struct window_pane*) ;

__attribute__((used)) static enum cmd_retval
FUNC_14(struct cmd *VAR_4, struct cmdq_item *VAR_5)
{
 struct args *VAR_6 = VAR_4->args;
 struct client *VAR_7 = FUNC_3(VAR_5, ((void*)0), 1);
 struct cmd_find_state *VAR_8 = &VAR_5->target;
 struct window_pane *VAR_9 = VAR_5->target.wp;
 struct session *VAR_10 = VAR_5->target.s;
 struct winlink *VAR_11 = VAR_5->target.wl;
 struct mouse_event *VAR_12 = &VAR_5->shared->mouse;
 struct window_mode_entry *VAR_13 = FUNC_0(&VAR_9->modes);
 int VAR_14;
 key_code VAR_15;
 u_int VAR_16 = 1;
 char *VAR_17 = ((void*)0);

 if (FUNC_1(VAR_6, 'N')) {
  VAR_16 = FUNC_2(VAR_6, 'N', 1, VAR_2, &VAR_17);
  if (VAR_17 != ((void*)0)) {
   FUNC_7(VAR_5, "repeat count %s", VAR_17);
   FUNC_8(VAR_17);
   return (VAR_0);
  }
  if (VAR_13 != ((void*)0) && (FUNC_1(VAR_6, 'X') || VAR_6->argc == 0)) {
   if (VAR_13 == ((void*)0) || VAR_13->mode->command == ((void*)0)) {
    FUNC_7(VAR_5, "not in a mode");
    return (VAR_0);
   }
   VAR_13->prefix = VAR_16;
  }
 }

 if (FUNC_1(VAR_6, 'X')) {
  if (VAR_13 == ((void*)0) || VAR_13->mode->command == ((void*)0)) {
   FUNC_7(VAR_5, "not in a mode");
   return (VAR_0);
  }
  if (!VAR_12->valid)
   VAR_12 = ((void*)0);
  VAR_13->mode->command(VAR_13, VAR_7, VAR_10, VAR_11, VAR_6, VAR_12);
  return (VAR_1);
 }

 if (FUNC_1(VAR_6, 'M')) {
  VAR_9 = FUNC_4(VAR_12, &VAR_10, ((void*)0));
  if (VAR_9 == ((void*)0)) {
   FUNC_7(VAR_5, "no mouse target");
   return (VAR_0);
  }
  FUNC_12(VAR_9, VAR_5->client, VAR_10, VAR_11, VAR_12->key, VAR_12);
  return (VAR_1);
 }

 if (VAR_4->entry == &VAR_3) {
  if (FUNC_1(VAR_6, '2'))
   VAR_15 = FUNC_10(VAR_10->options, "prefix2");
  else
   VAR_15 = FUNC_10(VAR_10->options, "prefix");
  FUNC_5(VAR_7, VAR_8, VAR_5, VAR_15);
  return (VAR_1);
 }

 if (FUNC_1(VAR_6, 'R')) {
  FUNC_13(VAR_9);
  FUNC_9(VAR_9, 1);
 }

 for (; VAR_16 != 0; VAR_16--) {
  for (VAR_14 = 0; VAR_14 < VAR_6->argc; VAR_14++)
   VAR_5 = FUNC_6(VAR_7, VAR_8, VAR_5, VAR_6, VAR_14);
 }

 return (VAR_1);
}
