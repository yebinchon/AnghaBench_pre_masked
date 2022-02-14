
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct window_mode_entry {struct window_copy_mode_data* data; } ;
struct window_copy_mode_data {int lineflag; } ;
struct window_copy_cmd_state {struct window_mode_entry* wme; } ;
typedef enum window_copy_cmd_action { ____Placeholder_window_copy_cmd_action } window_copy_cmd_action ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct window_mode_entry*) ;

__attribute__((used)) static enum window_copy_cmd_action
FUNC_1(struct window_copy_cmd_state *VAR_2)
{
 struct window_mode_entry *VAR_3 = VAR_2->wme;
 struct window_copy_mode_data *VAR_4 = VAR_3->data;

 VAR_4->lineflag = VAR_0;
 FUNC_0(VAR_3);

 return (VAR_1);
}
