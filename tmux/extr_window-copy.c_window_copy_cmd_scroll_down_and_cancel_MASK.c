
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct window_mode_entry {scalar_t__ prefix; struct window_copy_mode_data* data; } ;
struct window_copy_mode_data {scalar_t__ oy; } ;
struct window_copy_cmd_state {struct window_mode_entry* wme; } ;
typedef enum window_copy_cmd_action { ____Placeholder_window_copy_cmd_action } window_copy_cmd_action ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct window_mode_entry*,int) ;

__attribute__((used)) static enum window_copy_cmd_action
FUNC_1(struct window_copy_cmd_state *VAR_2)
{
 struct window_mode_entry *VAR_3 = VAR_2->wme;
 struct window_copy_mode_data *VAR_4 = VAR_3->data;
 u_int VAR_5 = VAR_3->prefix;

 for (; VAR_5 != 0; VAR_5--)
  FUNC_0(VAR_3, 1);
 if (VAR_4->oy == 0)
  return (VAR_0);
 return (VAR_1);
}
