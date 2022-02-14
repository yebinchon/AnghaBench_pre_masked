
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct window_mode_entry {int prefix; struct window_copy_mode_data* data; } ;
struct window_copy_mode_data {int jumptype; } ;
struct window_copy_cmd_state {struct window_mode_entry* wme; } ;
typedef enum window_copy_cmd_action { ____Placeholder_window_copy_cmd_action } window_copy_cmd_action ;


 int VAR_0 ;




 int FUNC_0 (struct window_mode_entry*) ;
 int FUNC_1 (struct window_mode_entry*) ;
 int FUNC_2 (struct window_mode_entry*) ;
 int FUNC_3 (struct window_mode_entry*) ;

__attribute__((used)) static enum window_copy_cmd_action
FUNC_4(struct window_copy_cmd_state *VAR_1)
{
 struct window_mode_entry *VAR_2 = VAR_1->wme;
 struct window_copy_mode_data *VAR_3 = VAR_2->data;
 u_int VAR_4 = VAR_2->prefix;

 switch (VAR_3->jumptype) {
 case 130:
  for (; VAR_4 != 0; VAR_4--)
   FUNC_0(VAR_2);
  break;
 case 131:
  for (; VAR_4 != 0; VAR_4--)
   FUNC_1(VAR_2);
  break;
 case 128:
  for (; VAR_4 != 0; VAR_4--)
   FUNC_2(VAR_2);
  break;
 case 129:
  for (; VAR_4 != 0; VAR_4--)
   FUNC_3(VAR_2);
  break;
 }
 return (VAR_0);
}
