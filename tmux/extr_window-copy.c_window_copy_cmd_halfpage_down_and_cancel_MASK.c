
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct window_mode_entry {scalar_t__ prefix; } ;
struct window_copy_cmd_state {struct window_mode_entry* wme; } ;
typedef enum window_copy_cmd_action { ____Placeholder_window_copy_cmd_action } window_copy_cmd_action ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct window_mode_entry*,int,int) ;

__attribute__((used)) static enum window_copy_cmd_action
FUNC_1(struct window_copy_cmd_state *VAR_2)
{

 struct window_mode_entry *VAR_3 = VAR_2->wme;
 u_int VAR_4 = VAR_3->prefix;

 for (; VAR_4 != 0; VAR_4--) {
  if (FUNC_0(VAR_3, 1, 1))
   return (VAR_0);
 }
 return (VAR_1);
}
