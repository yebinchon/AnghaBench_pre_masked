
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct window_mode_entry {scalar_t__ prefix; int wp; struct window_copy_mode_data* data; } ;
struct window_copy_mode_data {char* searchstr; int searchtype; } ;
struct window_copy_cmd_state {TYPE_1__* args; struct window_mode_entry* wme; } ;
typedef enum window_copy_cmd_action { ____Placeholder_window_copy_cmd_action } window_copy_cmd_action ;
struct TYPE_2__ {int argc; char** argv; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*,float) ;
 char* FUNC_1 (int *,char const*,int *,int *,int *,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct window_mode_entry*) ;
 char* FUNC_4 (char const*) ;

__attribute__((used)) static enum window_copy_cmd_action
FUNC_5(struct window_copy_cmd_state *VAR_2)
{
 struct window_mode_entry *VAR_3 = VAR_2->wme;
 struct window_copy_mode_data *VAR_4 = VAR_3->data;
 u_int VAR_5 = VAR_3->prefix;
 const char *VAR_6;
 char *VAR_7;

 if (VAR_2->args->argc == 2) {
  VAR_6 = VAR_2->args->argv[1];
  if (*VAR_6 != '\0') {
   if (FUNC_0(VAR_2->args, 'F')) {
    VAR_7 = FUNC_1(((void*)0), VAR_6, ((void*)0),
        ((void*)0), ((void*)0), VAR_3->wp);
    if (*VAR_7 == '\0') {
     FUNC_2(VAR_7);
     return (VAR_0);
    }
    FUNC_2(VAR_4->searchstr);
    VAR_4->searchstr = VAR_7;
   } else {
    FUNC_2(VAR_4->searchstr);
    VAR_4->searchstr = FUNC_4(VAR_6);
   }
  }
 }
 if (VAR_4->searchstr != ((void*)0)) {
  VAR_4->searchtype = VAR_1;
  for (; VAR_5 != 0; VAR_5--)
   FUNC_3(VAR_3);
 }
 return (VAR_0);
}
