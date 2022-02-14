
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct window_mode_entry {struct window_copy_mode_data* data; } ;
struct window_copy_mode_data {int lineflag; int cursordrag; } ;
struct window_copy_cmd_state {struct window_mode_entry* wme; } ;
typedef enum window_copy_cmd_action { ____Placeholder_window_copy_cmd_action } window_copy_cmd_action ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static enum window_copy_cmd_action
FUNC_0(struct window_copy_cmd_state *VAR_3)
{
 struct window_mode_entry *VAR_4 = VAR_3->wme;
 struct window_copy_mode_data *VAR_5 = VAR_4->data;

 VAR_5->cursordrag = VAR_0;
 VAR_5->lineflag = VAR_1;
 return (VAR_2);
}
