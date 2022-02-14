
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct window_mode_entry {struct window_copy_mode_data* data; } ;
struct window_copy_mode_data {int lineflag; } ;
struct window_copy_cmd_state {struct mouse_event* m; struct client* c; struct window_mode_entry* wme; } ;
struct mouse_event {int dummy; } ;
struct client {int dummy; } ;
typedef enum window_copy_cmd_action { ____Placeholder_window_copy_cmd_action } window_copy_cmd_action ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct client*,struct mouse_event*) ;
 int FUNC_1 (struct window_mode_entry*) ;

__attribute__((used)) static enum window_copy_cmd_action
FUNC_2(struct window_copy_cmd_state *VAR_3)
{
 struct window_mode_entry *VAR_4 = VAR_3->wme;
 struct client *VAR_5 = VAR_3->c;
 struct mouse_event *VAR_6 = VAR_3->m;
 struct window_copy_mode_data *VAR_7 = VAR_4->data;

 if (VAR_6 != ((void*)0)) {
  FUNC_0(VAR_5, VAR_6);
  return (VAR_1);
 }

 VAR_7->lineflag = VAR_0;
 FUNC_1(VAR_4);
 return (VAR_2);
}
