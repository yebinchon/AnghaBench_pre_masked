
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct window_tree_modedata {int references; int squash_groups; int type; int data; void* command; void* format; int fs; struct window_pane* wp; } ;
struct window_pane {int dummy; } ;
struct window_mode_entry {struct window_tree_modedata* data; struct window_pane* wp; } ;
struct screen {int dummy; } ;
struct cmd_find_state {int dummy; } ;
struct args {scalar_t__ argc; int * argv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct args*,float) ;
 scalar_t__ FUNC_1 (struct args*,char) ;
 int FUNC_2 (int *,struct cmd_find_state*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct window_pane*,struct args*,int ,int ,int ,int ,struct window_tree_modedata*,int ,int ,int ,struct screen**) ;
 int FUNC_6 (int ,struct args*) ;
 int FUNC_7 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct window_tree_modedata* FUNC_8 (int,int) ;
 void* FUNC_9 (int ) ;

__attribute__((used)) static struct screen *
FUNC_10(struct window_mode_entry *VAR_12, struct cmd_find_state *VAR_13,
    struct args *VAR_14)
{
 struct window_pane *VAR_15 = VAR_12->wp;
 struct window_tree_modedata *VAR_16;
 struct screen *VAR_17;

 VAR_12->data = VAR_16 = FUNC_8(1, sizeof *VAR_16);
 VAR_16->wp = VAR_15;
 VAR_16->references = 1;

 if (FUNC_1(VAR_14, 's'))
  VAR_16->type = VAR_4;
 else if (FUNC_1(VAR_14, 'w'))
  VAR_16->type = VAR_5;
 else
  VAR_16->type = VAR_3;
 FUNC_2(&VAR_16->fs, VAR_13, sizeof VAR_16->fs);

 if (VAR_14 == ((void*)0) || !FUNC_1(VAR_14, 'F'))
  VAR_16->format = FUNC_9(VAR_1);
 else
  VAR_16->format = FUNC_9(FUNC_0(VAR_14, 'F'));
 if (VAR_14 == ((void*)0) || VAR_14->argc == 0)
  VAR_16->command = FUNC_9(VAR_0);
 else
  VAR_16->command = FUNC_9(VAR_14->argv[0]);
 VAR_16->squash_groups = !FUNC_1(VAR_14, 'G');

 VAR_16->data = FUNC_5(VAR_15, VAR_14, VAR_6,
     VAR_7, VAR_10, VAR_8, VAR_16,
     VAR_9, VAR_11,
     FUNC_7(VAR_11), &VAR_17);
 FUNC_6(VAR_16->data, VAR_14);

 FUNC_3(VAR_16->data);
 FUNC_4(VAR_16->data);

 VAR_16->type = VAR_2;

 return (VAR_17);
}
