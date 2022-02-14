
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct window_mode_entry {struct window_copy_mode_data* data; } ;
struct window_copy_mode_data {char* searchstr; int searchx; int searchy; int cx; int cy; int searchtype; int searcho; int oy; } ;
struct window_copy_cmd_state {TYPE_1__* args; struct window_mode_entry* wme; } ;
typedef enum window_copy_cmd_action { ____Placeholder_window_copy_cmd_action } window_copy_cmd_action ;
struct TYPE_2__ {char** argv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const*,char const*) ;
 int FUNC_2 (struct window_mode_entry*) ;
 int FUNC_3 (struct window_mode_entry*) ;
 int FUNC_4 (struct window_mode_entry*) ;
 void* FUNC_5 (char const*) ;

__attribute__((used)) static enum window_copy_cmd_action
FUNC_6(struct window_copy_cmd_state *VAR_4)
{
 struct window_mode_entry *VAR_5 = VAR_4->wme;
 struct window_copy_mode_data *VAR_6 = VAR_5->data;
 const char *VAR_7 = VAR_4->args->argv[1];
 const char *VAR_8 = VAR_6->searchstr;
 char VAR_9;
 enum window_copy_cmd_action VAR_10 = VAR_0;

 VAR_9 = *VAR_7++;
 if (VAR_6->searchx == -1 || VAR_6->searchy == -1) {
  VAR_6->searchx = VAR_6->cx;
  VAR_6->searchy = VAR_6->cy;
  VAR_6->searcho = VAR_6->oy;
 } else if (VAR_8 != ((void*)0) && FUNC_1(VAR_7, VAR_8) != 0) {
  VAR_6->cx = VAR_6->searchx;
  VAR_6->cy = VAR_6->searchy;
  VAR_6->oy = VAR_6->searcho;
  VAR_10 = VAR_1;
 }
 if (*VAR_7 == '\0') {
  FUNC_2(VAR_5);
  return (VAR_1);
 }
 switch (VAR_9) {
 case '=':
 case '-':
  VAR_6->searchtype = VAR_3;
  FUNC_0(VAR_6->searchstr);
  VAR_6->searchstr = FUNC_5(VAR_7);
  if (!FUNC_4(VAR_5)) {
   FUNC_2(VAR_5);
   return (VAR_1);
  }
  break;
 case '+':
  VAR_6->searchtype = VAR_2;
  FUNC_0(VAR_6->searchstr);
  VAR_6->searchstr = FUNC_5(VAR_7);
  if (!FUNC_3(VAR_5)) {
   FUNC_2(VAR_5);
   return (VAR_1);
  }
  break;
 }
 return (VAR_10);
}
