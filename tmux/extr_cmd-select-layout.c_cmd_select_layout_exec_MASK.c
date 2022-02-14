
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct winlink {struct window* window; } ;
struct window_pane {int dummy; } ;
struct window {char* old_layout; int lastlayout; int layout_root; } ;
struct TYPE_2__ {struct window_pane* wp; struct winlink* wl; } ;
struct cmdq_item {TYPE_1__ target; } ;
struct cmd {int * entry; struct args* args; } ;
struct args {scalar_t__ argc; char** argv; } ;
typedef enum cmd_retval { ____Placeholder_cmd_retval } cmd_retval ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct args*,char) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct cmdq_item*,char*,char const*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (struct window*,char const*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct window*) ;
 int FUNC_7 (struct window*) ;
 int FUNC_8 (struct window*,int) ;
 int FUNC_9 (struct window_pane*) ;
 int FUNC_10 (char*,struct window*) ;
 int FUNC_11 () ;
 int FUNC_12 (struct window*) ;
 int FUNC_13 (struct window*) ;

__attribute__((used)) static enum cmd_retval
FUNC_14(struct cmd *VAR_4, struct cmdq_item *VAR_5)
{
 struct args *VAR_6 = VAR_4->args;
 struct winlink *VAR_7 = VAR_5->target.wl;
 struct window *VAR_8 = VAR_7->window;
 struct window_pane *VAR_9 = VAR_5->target.wp;
 const char *VAR_10;
 char *VAR_11;
 int VAR_12, VAR_13, VAR_14;

 FUNC_13(VAR_8);

 VAR_12 = VAR_4->entry == &VAR_2;
 if (FUNC_0(VAR_6, 'n'))
  VAR_12 = 1;
 VAR_13 = VAR_4->entry == &VAR_3;
 if (FUNC_0(VAR_6, 'p'))
  VAR_13 = 1;

 VAR_11 = VAR_8->old_layout;
 VAR_8->old_layout = FUNC_3(VAR_8->layout_root);

 if (VAR_12 || VAR_13) {
  if (VAR_12)
   FUNC_6(VAR_8);
  else
   FUNC_7(VAR_8);
  goto changed;
 }

 if (FUNC_0(VAR_6, 'E')) {
  FUNC_9(VAR_9);
  goto changed;
 }

 if (!FUNC_0(VAR_6, 'o')) {
  if (VAR_6->argc == 0)
   VAR_14 = VAR_8->lastlayout;
  else
   VAR_14 = FUNC_5(VAR_6->argv[0]);
  if (VAR_14 != -1) {
   FUNC_8(VAR_8, VAR_14);
   goto changed;
  }
 }

 if (VAR_6->argc != 0)
  VAR_10 = VAR_6->argv[0];
 else if (FUNC_0(VAR_6, 'o'))
  VAR_10 = VAR_11;
 else
  VAR_10 = ((void*)0);

 if (VAR_10 != ((void*)0)) {
  if (FUNC_4(VAR_8, VAR_10) == -1) {
   FUNC_1(VAR_5, "can't set layout: %s", VAR_10);
   goto error;
  }
  goto changed;
 }

 FUNC_2(VAR_11);
 return (VAR_1);

changed:
 FUNC_2(VAR_11);
 FUNC_11();
 FUNC_12(VAR_8);
 FUNC_10("window-layout-changed", VAR_8);
 return (VAR_1);

error:
 FUNC_2(VAR_8->old_layout);
 VAR_8->old_layout = VAR_11;
 return (VAR_0);
}
