
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int ;
struct window_pane {int id; } ;
struct mouse_event {scalar_t__ valid; } ;
struct format_tree {int m; } ;
struct cmdq_item {TYPE_3__* shared; TYPE_2__* cmd; } ;
struct TYPE_6__ {struct mouse_event mouse; int * formats; } ;
struct TYPE_5__ {TYPE_1__* entry; } ;
struct TYPE_4__ {int name; } ;


 scalar_t__ FUNC_0 (struct window_pane*,struct mouse_event*,int *,int *,int ) ;
 struct window_pane* FUNC_1 (struct mouse_event*,int *,int *) ;
 int FUNC_2 (struct format_tree*,char*,char*,int ) ;
 int FUNC_3 (struct format_tree*,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (struct format_tree*,int *) ;
 int FUNC_5 (int *,struct mouse_event*,int) ;

__attribute__((used)) static void
FUNC_6(struct format_tree *VAR_2, struct cmdq_item *VAR_3)
{
 struct mouse_event *VAR_4;
 struct window_pane *VAR_5;
 u_int VAR_6, VAR_7;

 if (VAR_3->cmd != ((void*)0))
  FUNC_2(VAR_2, "command", "%s", VAR_3->cmd->entry->name);

 if (VAR_3->shared == ((void*)0))
  return;
 if (VAR_3->shared->formats != ((void*)0))
  FUNC_4(VAR_2, VAR_3->shared->formats);

 VAR_4 = &VAR_3->shared->mouse;
 if (VAR_4->valid && ((VAR_5 = FUNC_1(VAR_4, ((void*)0), ((void*)0))) != ((void*)0))) {
  FUNC_2(VAR_2, "mouse_pane", "%%%u", VAR_5->id);
  if (FUNC_0(VAR_5, VAR_4, &VAR_6, &VAR_7, 0) == 0) {
   FUNC_2(VAR_2, "mouse_x", "%u", VAR_6);
   FUNC_2(VAR_2, "mouse_y", "%u", VAR_7);
   FUNC_3(VAR_2, "mouse_word", VAR_1);
   FUNC_3(VAR_2, "mouse_line", VAR_0);
  }
 }
 FUNC_5(&VAR_2->m, VAR_4, sizeof VAR_2->m);
}
