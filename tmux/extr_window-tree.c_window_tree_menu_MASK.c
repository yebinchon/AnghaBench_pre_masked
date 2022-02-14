
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct window_tree_modedata {struct window_pane* wp; } ;
struct window_pane {int modes; } ;
struct window_mode_entry {void* data; } ;
struct client {int dummy; } ;
typedef int key_code ;


 struct window_mode_entry* FUNC_0 (int *) ;
 int FUNC_1 (struct window_mode_entry*,struct client*,int *,int *,int ,int *) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0, struct client *VAR_1, key_code VAR_2)
{
 struct window_tree_modedata *VAR_3 = VAR_0;
 struct window_pane *VAR_4 = VAR_3->wp;
 struct window_mode_entry *VAR_5;

 VAR_5 = FUNC_0(&VAR_4->modes);
 if (VAR_5 == ((void*)0) || VAR_5->data != VAR_0)
  return;
 FUNC_1(VAR_5, VAR_1, ((void*)0), ((void*)0), VAR_2, ((void*)0));
}
