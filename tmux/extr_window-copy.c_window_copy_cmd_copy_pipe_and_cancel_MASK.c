
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct window_mode_entry {int dummy; } ;
struct window_copy_cmd_state {struct window_mode_entry* wme; } ;
typedef enum window_copy_cmd_action { ____Placeholder_window_copy_cmd_action } window_copy_cmd_action ;


 int VAR_0 ;
 int FUNC_0 (struct window_mode_entry*) ;
 int FUNC_1 (struct window_copy_cmd_state*) ;

__attribute__((used)) static enum window_copy_cmd_action
FUNC_2(struct window_copy_cmd_state *VAR_1)
{
 struct window_mode_entry *VAR_2 = VAR_1->wme;

 FUNC_1(VAR_1);
 FUNC_0(VAR_2);
 return (VAR_0);
}
