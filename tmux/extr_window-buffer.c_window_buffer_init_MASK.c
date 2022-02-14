
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct window_pane {int dummy; } ;
struct window_mode_entry {struct window_buffer_modedata* data; struct window_pane* wp; } ;
struct window_buffer_modedata {int data; void* command; void* format; int fs; struct window_pane* wp; } ;
struct screen {int dummy; } ;
struct cmd_find_state {int dummy; } ;
struct args {scalar_t__ argc; int * argv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct args*,float) ;
 int FUNC_1 (struct args*,float) ;
 int FUNC_2 (int *,struct cmd_find_state*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct window_pane*,struct args*,int ,int ,int ,int ,struct window_buffer_modedata*,int ,int ,int ,struct screen**) ;
 int FUNC_6 (int ,struct args*) ;
 int FUNC_7 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct window_buffer_modedata* FUNC_8 (int,int) ;
 void* FUNC_9 (int ) ;

__attribute__((used)) static struct screen *
FUNC_10(struct window_mode_entry *VAR_8, struct cmd_find_state *VAR_9,
    struct args *VAR_10)
{
 struct window_pane *VAR_11 = VAR_8->wp;
 struct window_buffer_modedata *VAR_12;
 struct screen *VAR_13;

 VAR_8->data = VAR_12 = FUNC_8(1, sizeof *VAR_12);
 VAR_12->wp = VAR_11;
 FUNC_2(&VAR_12->fs, VAR_9);

 if (VAR_10 == ((void*)0) || !FUNC_1(VAR_10, 'F'))
  VAR_12->format = FUNC_9(VAR_1);
 else
  VAR_12->format = FUNC_9(FUNC_0(VAR_10, 'F'));
 if (VAR_10 == ((void*)0) || VAR_10->argc == 0)
  VAR_12->command = FUNC_9(VAR_0);
 else
  VAR_12->command = FUNC_9(VAR_10->argv[0]);

 VAR_12->data = FUNC_5(VAR_11, VAR_10, VAR_2,
     VAR_3, VAR_6, VAR_4, VAR_12,
     VAR_5, VAR_7,
     FUNC_7(VAR_7), &VAR_13);
 FUNC_6(VAR_12->data, VAR_10);

 FUNC_3(VAR_12->data);
 FUNC_4(VAR_12->data);

 return (VAR_13);
}
