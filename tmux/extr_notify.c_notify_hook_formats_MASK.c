
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct window {int id; int name; } ;
struct session {int id; int name; } ;
struct cmdq_item {int dummy; } ;


 int FUNC_0 (struct cmdq_item*,char*,char*,int) ;

__attribute__((used)) static void
FUNC_1(struct cmdq_item *VAR_0, struct session *VAR_1, struct window *VAR_2,
    int VAR_3)
{
 if (VAR_1 != ((void*)0)) {
  FUNC_0(VAR_0, "hook_session", "$%u", VAR_1->id);
  FUNC_0(VAR_0, "hook_session_name", "%s", VAR_1->name);
 }
 if (VAR_2 != ((void*)0)) {
  FUNC_0(VAR_0, "hook_window", "@%u", VAR_2->id);
  FUNC_0(VAR_0, "hook_window_name", "%s", VAR_2->name);
 }
 if (VAR_3 != -1)
  FUNC_0(VAR_0, "hook_pane", "%%%d", VAR_3);
}
