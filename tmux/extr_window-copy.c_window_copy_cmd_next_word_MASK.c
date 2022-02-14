
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct window_mode_entry {scalar_t__ prefix; } ;
struct window_copy_cmd_state {struct session* s; struct window_mode_entry* wme; } ;
struct session {int options; } ;
typedef enum window_copy_cmd_action { ____Placeholder_window_copy_cmd_action } window_copy_cmd_action ;


 int VAR_0 ;
 char* FUNC_0 (int ,char*) ;
 int FUNC_1 (struct window_mode_entry*,char const*) ;

__attribute__((used)) static enum window_copy_cmd_action
FUNC_2(struct window_copy_cmd_state *VAR_1)
{
 struct window_mode_entry *VAR_2 = VAR_1->wme;
 struct session *VAR_3 = VAR_1->s;
 u_int VAR_4 = VAR_2->prefix;
 const char *VAR_5;

 VAR_5 = FUNC_0(VAR_3->options, "word-separators");
 for (; VAR_4 != 0; VAR_4--)
  FUNC_1(VAR_2, VAR_5);
 return (VAR_0);
}
