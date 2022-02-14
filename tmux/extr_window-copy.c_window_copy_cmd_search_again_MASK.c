
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct window_mode_entry {scalar_t__ prefix; struct window_copy_mode_data* data; } ;
struct window_copy_mode_data {scalar_t__ searchtype; } ;
struct window_copy_cmd_state {struct window_mode_entry* wme; } ;
typedef enum window_copy_cmd_action { ____Placeholder_window_copy_cmd_action } window_copy_cmd_action ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct window_mode_entry*) ;
 int FUNC_1 (struct window_mode_entry*) ;

__attribute__((used)) static enum window_copy_cmd_action
FUNC_2(struct window_copy_cmd_state *VAR_3)
{
 struct window_mode_entry *VAR_4 = VAR_3->wme;
 struct window_copy_mode_data *VAR_5 = VAR_4->data;
 u_int VAR_6 = VAR_4->prefix;

 if (VAR_5->searchtype == VAR_2) {
  for (; VAR_6 != 0; VAR_6--)
   FUNC_1(VAR_4);
 } else if (VAR_5->searchtype == VAR_1) {
  for (; VAR_6 != 0; VAR_6--)
   FUNC_0(VAR_4);
 }
 return (VAR_0);
}
