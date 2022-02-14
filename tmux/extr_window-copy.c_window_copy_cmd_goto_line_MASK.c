
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct window_mode_entry {int dummy; } ;
struct window_copy_cmd_state {TYPE_1__* args; struct window_mode_entry* wme; } ;
typedef enum window_copy_cmd_action { ____Placeholder_window_copy_cmd_action } window_copy_cmd_action ;
struct TYPE_2__ {char** argv; } ;


 int VAR_0 ;
 int FUNC_0 (struct window_mode_entry*,char const*) ;

__attribute__((used)) static enum window_copy_cmd_action
FUNC_1(struct window_copy_cmd_state *VAR_1)
{
 struct window_mode_entry *VAR_2 = VAR_1->wme;
 const char *VAR_3 = VAR_1->args->argv[1];

 if (*VAR_3 != '\0')
  FUNC_0(VAR_2, VAR_3);
 return (VAR_0);
}
